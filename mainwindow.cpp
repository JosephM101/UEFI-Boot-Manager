#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QProcess"
#include <QMessageBox>
#include <strings.h>
#include <QCommonStyle>

QString confirm_reboot_fw = "You have requested to reboot the machine into its UEFI firmware settings. Are you sure you want to continue?";
QString confirm_reboot_selected_boot_device = "You have requested to reboot the machine, and boot from the selected device. Are you sure you want to continue?";
QString err_no_permissions_title = "Error: No Permissions";
QStringList bootOrder;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    //Test to see if efibootmgr is installed, and terminate if it isn't
    if (system("efibootmgr") != 0)
    {
        QMessageBox::warning(this, "efibootmgr not installed", "Couldn't execute efibootmgr: it doesn't seem to exist. Check if it's installed, then try running this application again.", QMessageBox::Ok,QMessageBox::Ok);
        exit(EXIT_FAILURE);
    }

    ui->setupUi(this);
    ui->pushButton_clearNextBootDevice->setVisible(false); //Feature not working
    //ui->pushButton_rebootFromSelectedDevice->setVisible(false); //Feature not working
    ui->menuHelp->setVisible(false); //Feature not working
    ui->actionAbout->setVisible(false); //Feature not working
    ui->actionAbout_2->setVisible(false); //Feature not working
    //Button icons
    QCommonStyle style;
    ui->pushButton_refreshBootDevices->setIcon(style.standardIcon(QStyle::SP_BrowserReload));
    //connect(ui->actionAbout, SIGNAL(triggered()), this, SLOT(showAboutWindow()));
    refreshAvailableBootDevices();
}

void MainWindow::refreshAvailableBootDevices()
{
    ui->label_currentBootDevice->setText("Unknown");
    ui->label_nextBootDevice->setText("Not set");
    //Run the command, and get the returned data
    ui->listWidget_availableBootDevices->clear();
    ui->listWidget_bootOrder_order->clear();
    ui->listWidget_bootOrder_availableBootDevices->clear();
    ui->tabWidget->setCurrentIndex(0); //Set to first (default) page
    QProcess process;
    process.setProgram("efibootmgr");
    process.start();
    process.waitForFinished(-1);
    QString out = process.readAllStandardOutput();
    //Now parse the data line-by-line
    QStringList lines = out.split('\n');

    QString qstr;
    QStringList combo;

    for(int i = 0; i < lines.size(); i++)
    {
        QString currentLine = lines[i];
        if(currentLine.contains("Boot0"))
        {
            QString bootDeviceName = currentLine.mid(10, currentLine.length());
            QString bootDeviceId = currentLine.mid(4, 4);
            QString listEntryString = "(" + bootDeviceId + ") " + bootDeviceName;
            ui->listWidget_availableBootDevices->addItem(listEntryString);
            ui->listWidget_bootOrder_availableBootDevices->addItem(listEntryString);
            combo.append(listEntryString);
        }
        if(currentLine.contains("BootCurrent"))
        {
            QString currentBootDevice = currentLine.mid(13, currentLine.length());
            ui->label_currentBootDevice->setText(currentBootDevice);
        }
        if(currentLine.contains("BootNext"))
        {
            QString nextBootDevice = currentLine.mid(10, currentLine.length());
            ui->label_nextBootDevice->setText(nextBootDevice);
        }
        if(currentLine.contains("BootOrder"))
        {
            qstr = currentLine.mid(11, currentLine.length());
            bootOrder = qstr.split(",");
        }
    }
    for(int i = 0; i < bootOrder.size(); i++)
    {
        QString id = bootOrder[i];
        //ui->listWidget_bootOrder->addItem(id);
    }
}

void MainWindow::setNextBootDevice(QString id, bool reboot)
{
    //Generate the command
    if(id != "null")
    {
        QString commandPrefix = "pkexec efibootmgr --bootnext ";
        QString command = commandPrefix + id; //Should look something like "pkexec efibootmgr --bootnext 0000"
        if(reboot == true)
        {
            command = command + " && pkexec reboot";
        }
        //Convert it to a const char for the 'system' command
        QByteArray ba = command.toLocal8Bit();
        const char *c_str2 = ba.data();
        //Now, execute the final command.
        if (system(c_str2) != 0)
        {
            QMessageBox::warning(this, err_no_permissions_title, "Couldn't set the boot device: no permissions. Try running this application as root.", QMessageBox::Ok,QMessageBox::Ok);
        }
        else
        {
            //Finally, refresh everything.
            refreshAvailableBootDevices();
            QMessageBox::information(this, "Next Boot Device Set", "The system will now attempt to boot from the selected device on the next startup.", QMessageBox::Ok,QMessageBox::Ok);
        }
    }
    else
    {
        QMessageBox::warning(this, "Error: Couldn't set the boot device", "Either no device was selected, or the selected device is invalid.", QMessageBox::Ok,QMessageBox::Ok);
    }
}

void MainWindow::on_pushButton_rebootToFW_clicked()
{
    //int ret = QMessageBox::question(this, tr("UEFI Boot Manager"), confirm_reboot_fw, QMessageBox::Yes | QMessageBox::No,QMessageBox::Yes);
    QMessageBox msgBox;
    msgBox.setWindowTitle("Reboot to UEFI Firmware");
    msgBox.setText(confirm_reboot_fw);
    msgBox.setStandardButtons(QMessageBox::Yes);
    msgBox.addButton(QMessageBox::No);
    msgBox.setDefaultButton(QMessageBox::Yes);
    msgBox.setIcon(QMessageBox::Icon::Question);
    if(msgBox.exec() == QMessageBox::Yes){
        //Reboot the system into UEFI firmware settings
        if (system("pkexec systemctl reboot --firmware-setup") != 0)
        {
            QMessageBox::warning(this, err_no_permissions_title, "Couldn't reboot the system: no permissions. Try running this application as root.", QMessageBox::Ok,QMessageBox::Ok);
        }
    }
}



void MainWindow::on_pushButton_refreshBootDevices_clicked()
{
    refreshAvailableBootDevices();
}

MainWindow::~MainWindow()
{
    delete ui;
}

QString MainWindow::GetSelectedBootDeviceID()
{
    if (ui->listWidget_availableBootDevices->selectedItems().length() != 0)
    {
        QString selectionText = ui->listWidget_availableBootDevices->selectedItems()[0]->text();
        QString bootDeviceID = selectionText.mid(1,4);
        return bootDeviceID;
    }
    else return "null";
}

void MainWindow::on_pushButton_setSelectedAsNextBootDevice_clicked()
{
    QMessageBox msgBox;
    msgBox.setWindowTitle("Set next boot device");
    msgBox.setText("Set the selected device as the next boot device?");
    msgBox.setStandardButtons(QMessageBox::Yes);
    msgBox.addButton(QMessageBox::No);
    msgBox.setDefaultButton(QMessageBox::Yes);
    msgBox.setIcon(QMessageBox::Icon::Question);
    if(msgBox.exec() == QMessageBox::Yes)
    {
        setNextBootDevice(GetSelectedBootDeviceID(), false);
    }
}

void MainWindow::on_pushButton_rebootFromSelectedDevice_clicked()
{
    QMessageBox msgBox;
    msgBox.setWindowTitle("Reboot computer now?");
    msgBox.setText("Reboot your computer from the selected device?");
    msgBox.setStandardButtons(QMessageBox::Yes);
    msgBox.addButton(QMessageBox::No);
    msgBox.setDefaultButton(QMessageBox::Yes);
    msgBox.setIcon(QMessageBox::Icon::Question);
    if(msgBox.exec() == QMessageBox::Yes)
    {
        setNextBootDevice(GetSelectedBootDeviceID(), true);
    }
}

void MainWindow::on_pushButton_clearNextBootDevice_clicked()
{
    if(system("pkexec efibootmgr --delete-bootnext") != 0)
    {
        QMessageBox::warning(this, err_no_permissions_title, "Couldn't clear next boot device: no permissions. Try running this application as root.", QMessageBox::Ok,QMessageBox::Ok);
    }
    else
    {
        refreshAvailableBootDevices();
    }
}

void MainWindow::on_pushButton_bootOrder_moveSelectionUp_clicked()
{
      //int currentRow = ui->listWidget_bootOrder->currentRow();
      //QListWidgetItem *currentItem = ui->listWidget_bootOrder->takeItem(currentRow);
      //ui->listWidget_bootOrder->insertItem(currentRow - 1, currentItem);
}

void MainWindow::on_pushButton_bootOrder_moveSelectionDown_clicked()
{

}

void MainWindow::on_pushButton_saveBootOrder_clicked()
{
    if(ui->listWidget_bootOrder_order->count()<1)
    {
        QMessageBox::warning(this, "Not enough devices", "You need to select at least one device.", QMessageBox::Ok,QMessageBox::Ok);
    }
    else
    {
        QString commandPrefix = "pkexec efibootmgr --bootorder ";
        QString bootOrder_commandArg;
        for (int i = 0; i < ui->listWidget_bootOrder_order->count(); i++)
        {
            bootOrder_commandArg.append(ui->listWidget_bootOrder_order->item(i)->text().mid(1,4));
            if(i != ui->listWidget_bootOrder_order->count() - 1)
            {
                bootOrder_commandArg.append(",");
            }
        }

        QString command = commandPrefix + bootOrder_commandArg;

        QMessageBox msgBox;
        msgBox.setWindowTitle("Save boot order");
        msgBox.setText("Are you sure you want to save this boot order? \n" + bootOrder_commandArg + "\nWARNING: This feature is still in beta, and may cause problems. Proceed at your own risk.");
        msgBox.setStandardButtons(QMessageBox::Yes);
        msgBox.addButton(QMessageBox::No);
        msgBox.setDefaultButton(QMessageBox::Yes);
        msgBox.setIcon(QMessageBox::Icon::Question);
        if(msgBox.exec() == QMessageBox::Yes)
        {
            QByteArray ba = command.toLocal8Bit();
            const char *c_str2 = ba.data();
            //Now, execute the final command.
            if (system(c_str2) != 0)
            {
                QMessageBox::warning(this, err_no_permissions_title, "Couldn't set the boot order: no permissions. Try running this application as root.", QMessageBox::Ok,QMessageBox::Ok);
            }
            else
            {
                QMessageBox::information(this, "Saved", "Boot order saved.", QMessageBox::Ok,QMessageBox::Ok);
                refreshAvailableBootDevices();
            }
        }
    }
}

void MainWindow::on_pushButton_bootOrder_add_clicked()
{
    if(ui->listWidget_bootOrder_availableBootDevices->selectedItems().count() > 0)
    {
        ui->listWidget_bootOrder_order->addItem(ui->listWidget_bootOrder_availableBootDevices->selectedItems()[0]->text());
        qDeleteAll(ui->listWidget_bootOrder_availableBootDevices->selectedItems());
    }
}

void MainWindow::on_pushButton_bootOrder_remove_clicked()
{
    if(ui->listWidget_bootOrder_order->selectedItems().count() > 0)
    {
        ui->listWidget_bootOrder_availableBootDevices->addItem(ui->listWidget_bootOrder_order->selectedItems()[0]->text());
        qDeleteAll(ui->listWidget_bootOrder_order->selectedItems());
    }
}

void MainWindow::on_pushButton_showCurrentBootOrder_clicked()
{
    QString bootOrder_formatted;
    bootOrder_formatted.append("Current boot order: \n");
    for(int i = 0; i < bootOrder.count(); i++)
    {
        bootOrder_formatted.append(bootOrder[i]);
        bootOrder_formatted.append("\n");
    }
    QMessageBox::information(this, "Current Boot Order", bootOrder_formatted, QMessageBox::Ok,QMessageBox::Ok);
}
