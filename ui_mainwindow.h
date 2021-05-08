/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionExit;
    QAction *actionAbout;
    QAction *actionAbout_2;
    QWidget *centralwidget;
    QGridLayout *gridLayout_2;
    QWidget *verticalWidget_2;
    QVBoxLayout *verticalLayout_3;
    QTabWidget *tabWidget;
    QWidget *main;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_7;
    QVBoxLayout *verticalLayout_7;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_5;
    QVBoxLayout *verticalLayout_6;
    QSpacerItem *verticalSpacer_4;
    QLabel *label;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *pushButton_refreshBootDevices;
    QListWidget *listWidget_availableBootDevices;
    QHBoxLayout *horizontalLayout_6;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLabel *label_currentBootDevice;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLabel *label_nextBootDevice;
    QSpacerItem *horizontalSpacer_4;
    QVBoxLayout *verticalLayout_8;
    QSpacerItem *verticalSpacer_6;
    QVBoxLayout *verticalLayout_4;
    QPushButton *pushButton_clearNextBootDevice;
    QPushButton *pushButton_rebootFromSelectedDevice;
    QPushButton *pushButton_setSelectedAsNextBootDevice;
    QSpacerItem *verticalSpacer_3;
    QPushButton *pushButton_rebootToFW;
    QSpacerItem *verticalSpacer_5;
    QWidget *boot_order;
    QLabel *label_4;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout_3;
    QListWidget *listWidget_bootOrder_availableBootDevices;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_2;
    QPushButton *pushButton_bootOrder_add;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_bootOrder_remove;
    QSpacerItem *verticalSpacer;
    QListWidget *listWidget_bootOrder_order;
    QPushButton *pushButton_saveBootOrder;
    QPushButton *pushButton_showCurrentBootOrder;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton_closeApplication;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuHelp;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->setWindowModality(Qt::NonModal);
        MainWindow->resize(610, 500);
        MainWindow->setMinimumSize(QSize(610, 500));
        MainWindow->setDockOptions(QMainWindow::AllowTabbedDocks|QMainWindow::AnimatedDocks);
        MainWindow->setUnifiedTitleAndToolBarOnMac(true);
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
        actionAbout->setVisible(true);
        actionAbout_2 = new QAction(MainWindow);
        actionAbout_2->setObjectName(QString::fromUtf8("actionAbout_2"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(centralwidget->sizePolicy().hasHeightForWidth());
        centralwidget->setSizePolicy(sizePolicy);
        centralwidget->setContextMenuPolicy(Qt::PreventContextMenu);
        centralwidget->setAutoFillBackground(true);
        gridLayout_2 = new QGridLayout(centralwidget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        verticalWidget_2 = new QWidget(centralwidget);
        verticalWidget_2->setObjectName(QString::fromUtf8("verticalWidget_2"));
        verticalLayout_3 = new QVBoxLayout(verticalWidget_2);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        tabWidget = new QTabWidget(verticalWidget_2);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setTabShape(QTabWidget::Rounded);
        main = new QWidget();
        main->setObjectName(QString::fromUtf8("main"));
        gridLayout = new QGridLayout(main);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(-1, 5, -1, -1);
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalSpacer_4 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Maximum);

        verticalLayout_6->addItem(verticalSpacer_4);

        label = new QLabel(main);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout_6->addWidget(label);


        horizontalLayout_5->addLayout(verticalLayout_6);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_3);

        pushButton_refreshBootDevices = new QPushButton(main);
        pushButton_refreshBootDevices->setObjectName(QString::fromUtf8("pushButton_refreshBootDevices"));
        pushButton_refreshBootDevices->setCheckable(false);
        pushButton_refreshBootDevices->setAutoDefault(false);
        pushButton_refreshBootDevices->setFlat(false);

        horizontalLayout_5->addWidget(pushButton_refreshBootDevices);


        verticalLayout_5->addLayout(horizontalLayout_5);

        listWidget_availableBootDevices = new QListWidget(main);
        listWidget_availableBootDevices->setObjectName(QString::fromUtf8("listWidget_availableBootDevices"));

        verticalLayout_5->addWidget(listWidget_availableBootDevices);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(4);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(2, -1, -1, -1);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_2 = new QLabel(main);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMinimumSize(QSize(180, 0));

        horizontalLayout->addWidget(label_2);

        label_currentBootDevice = new QLabel(main);
        label_currentBootDevice->setObjectName(QString::fromUtf8("label_currentBootDevice"));
        label_currentBootDevice->setMinimumSize(QSize(100, 0));

        horizontalLayout->addWidget(label_currentBootDevice);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_3 = new QLabel(main);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMinimumSize(QSize(180, 0));

        horizontalLayout_2->addWidget(label_3);

        label_nextBootDevice = new QLabel(main);
        label_nextBootDevice->setObjectName(QString::fromUtf8("label_nextBootDevice"));
        label_nextBootDevice->setMinimumSize(QSize(100, 0));

        horizontalLayout_2->addWidget(label_nextBootDevice);


        verticalLayout_2->addLayout(horizontalLayout_2);


        horizontalLayout_6->addLayout(verticalLayout_2);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_4);


        verticalLayout_5->addLayout(horizontalLayout_6);


        verticalLayout_7->addLayout(verticalLayout_5);


        horizontalLayout_7->addLayout(verticalLayout_7);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_8->addItem(verticalSpacer_6);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        pushButton_clearNextBootDevice = new QPushButton(main);
        pushButton_clearNextBootDevice->setObjectName(QString::fromUtf8("pushButton_clearNextBootDevice"));
        pushButton_clearNextBootDevice->setAutoDefault(false);

        verticalLayout_4->addWidget(pushButton_clearNextBootDevice);

        pushButton_rebootFromSelectedDevice = new QPushButton(main);
        pushButton_rebootFromSelectedDevice->setObjectName(QString::fromUtf8("pushButton_rebootFromSelectedDevice"));
        pushButton_rebootFromSelectedDevice->setAutoRepeat(false);
        pushButton_rebootFromSelectedDevice->setAutoDefault(false);
        pushButton_rebootFromSelectedDevice->setFlat(false);

        verticalLayout_4->addWidget(pushButton_rebootFromSelectedDevice);

        pushButton_setSelectedAsNextBootDevice = new QPushButton(main);
        pushButton_setSelectedAsNextBootDevice->setObjectName(QString::fromUtf8("pushButton_setSelectedAsNextBootDevice"));
        pushButton_setSelectedAsNextBootDevice->setAutoRepeat(false);
        pushButton_setSelectedAsNextBootDevice->setAutoDefault(false);
        pushButton_setSelectedAsNextBootDevice->setFlat(false);

        verticalLayout_4->addWidget(pushButton_setSelectedAsNextBootDevice);

        verticalSpacer_3 = new QSpacerItem(20, 80, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_4->addItem(verticalSpacer_3);

        pushButton_rebootToFW = new QPushButton(main);
        pushButton_rebootToFW->setObjectName(QString::fromUtf8("pushButton_rebootToFW"));
        pushButton_rebootToFW->setAutoRepeat(false);
        pushButton_rebootToFW->setAutoDefault(false);
        pushButton_rebootToFW->setFlat(false);

        verticalLayout_4->addWidget(pushButton_rebootToFW);


        verticalLayout_8->addLayout(verticalLayout_4);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_8->addItem(verticalSpacer_5);


        horizontalLayout_7->addLayout(verticalLayout_8);


        gridLayout->addLayout(horizontalLayout_7, 0, 0, 1, 1);

        tabWidget->addTab(main, QString());
        boot_order = new QWidget();
        boot_order->setObjectName(QString::fromUtf8("boot_order"));
        label_4 = new QLabel(boot_order);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(10, 10, 421, 16));
        horizontalLayoutWidget = new QWidget(boot_order);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(10, 30, 571, 301));
        horizontalLayout_3 = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        listWidget_bootOrder_availableBootDevices = new QListWidget(horizontalLayoutWidget);
        listWidget_bootOrder_availableBootDevices->setObjectName(QString::fromUtf8("listWidget_bootOrder_availableBootDevices"));
        listWidget_bootOrder_availableBootDevices->setDragDropMode(QAbstractItemView::NoDragDrop);

        horizontalLayout_3->addWidget(listWidget_bootOrder_availableBootDevices);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        pushButton_bootOrder_add = new QPushButton(horizontalLayoutWidget);
        pushButton_bootOrder_add->setObjectName(QString::fromUtf8("pushButton_bootOrder_add"));

        verticalLayout->addWidget(pushButton_bootOrder_add);

        horizontalSpacer = new QSpacerItem(40, 10, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout->addItem(horizontalSpacer);

        pushButton_bootOrder_remove = new QPushButton(horizontalLayoutWidget);
        pushButton_bootOrder_remove->setObjectName(QString::fromUtf8("pushButton_bootOrder_remove"));

        verticalLayout->addWidget(pushButton_bootOrder_remove);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout_3->addLayout(verticalLayout);

        listWidget_bootOrder_order = new QListWidget(horizontalLayoutWidget);
        listWidget_bootOrder_order->setObjectName(QString::fromUtf8("listWidget_bootOrder_order"));
        listWidget_bootOrder_order->setDragEnabled(false);
        listWidget_bootOrder_order->setDragDropMode(QAbstractItemView::InternalMove);

        horizontalLayout_3->addWidget(listWidget_bootOrder_order);

        pushButton_saveBootOrder = new QPushButton(boot_order);
        pushButton_saveBootOrder->setObjectName(QString::fromUtf8("pushButton_saveBootOrder"));
        pushButton_saveBootOrder->setGeometry(QRect(458, 340, 121, 31));
        pushButton_showCurrentBootOrder = new QPushButton(boot_order);
        pushButton_showCurrentBootOrder->setObjectName(QString::fromUtf8("pushButton_showCurrentBootOrder"));
        pushButton_showCurrentBootOrder->setGeometry(QRect(279, 340, 171, 31));
        tabWidget->addTab(boot_order, QString());

        verticalLayout_3->addWidget(tabWidget);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);

        pushButton_closeApplication = new QPushButton(verticalWidget_2);
        pushButton_closeApplication->setObjectName(QString::fromUtf8("pushButton_closeApplication"));
        pushButton_closeApplication->setMaximumSize(QSize(16777215, 25));
        pushButton_closeApplication->setAutoDefault(false);

        horizontalLayout_4->addWidget(pushButton_closeApplication);


        verticalLayout_3->addLayout(horizontalLayout_4);


        gridLayout_2->addWidget(verticalWidget_2, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 610, 23));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuHelp = new QMenu(menubar);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        MainWindow->setMenuBar(menubar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuHelp->menuAction());
        menuFile->addAction(actionExit);
        menuHelp->addAction(actionAbout_2);

        retranslateUi(MainWindow);
        QObject::connect(actionExit, SIGNAL(triggered()), MainWindow, SLOT(close()));
        QObject::connect(pushButton_closeApplication, SIGNAL(clicked()), MainWindow, SLOT(close()));

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "UEFI Boot Manager", nullptr));
        actionExit->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
        actionAbout->setText(QCoreApplication::translate("MainWindow", "About", nullptr));
        actionAbout_2->setText(QCoreApplication::translate("MainWindow", "About", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Available boot devices:", nullptr));
        pushButton_refreshBootDevices->setText(QString());
        label_2->setText(QCoreApplication::translate("MainWindow", "Current boot device:", nullptr));
        label_currentBootDevice->setText(QCoreApplication::translate("MainWindow", "Unknown", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Next boot device:", nullptr));
        label_nextBootDevice->setText(QCoreApplication::translate("MainWindow", "Not set", nullptr));
        pushButton_clearNextBootDevice->setText(QCoreApplication::translate("MainWindow", "Clear Next Boot Device", nullptr));
        pushButton_rebootFromSelectedDevice->setText(QCoreApplication::translate("MainWindow", "Reboot from Selected\n"
"Device", nullptr));
        pushButton_setSelectedAsNextBootDevice->setText(QCoreApplication::translate("MainWindow", "Set selected as next\n"
"boot device", nullptr));
        pushButton_rebootToFW->setText(QCoreApplication::translate("MainWindow", "Reboot to Firmware", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(main), QCoreApplication::translate("MainWindow", "Boot Devices", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Click and drag items to change the boot order/priority.", nullptr));
        pushButton_bootOrder_add->setText(QCoreApplication::translate("MainWindow", "Add ->", nullptr));
        pushButton_bootOrder_remove->setText(QCoreApplication::translate("MainWindow", "<- Remove", nullptr));
        pushButton_saveBootOrder->setText(QCoreApplication::translate("MainWindow", "Save Boot Order", nullptr));
        pushButton_showCurrentBootOrder->setText(QCoreApplication::translate("MainWindow", "Show Current Boot Order", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(boot_order), QCoreApplication::translate("MainWindow", "Boot Order (Beta)", nullptr));
        pushButton_closeApplication->setText(QCoreApplication::translate("MainWindow", "Close", nullptr));
        menuFile->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
        menuHelp->setTitle(QCoreApplication::translate("MainWindow", "Help", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
