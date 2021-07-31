#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_rebootToFW_clicked();
    void refreshAvailableBootDevices();
    void setNextBootDevice(QString id, bool reboot);
    void on_pushButton_refreshBootDevices_clicked();
    void on_pushButton_setSelectedAsNextBootDevice_clicked();
    //void showAboutWindow();

    QString GetSelectedBootDeviceID();

    void on_pushButton_rebootFromSelectedDevice_clicked();

    void on_pushButton_clearNextBootDevice_clicked();

    void on_pushButton_bootOrder_moveSelectionUp_clicked();

    void on_pushButton_bootOrder_moveSelectionDown_clicked();

    void on_pushButton_saveBootOrder_clicked();

    void on_pushButton_bootOrder_add_clicked();

    void on_pushButton_bootOrder_remove_clicked();

    void on_pushButton_showCurrentBootOrder_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
