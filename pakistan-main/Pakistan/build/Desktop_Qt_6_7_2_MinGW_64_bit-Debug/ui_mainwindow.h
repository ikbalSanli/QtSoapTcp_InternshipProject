/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionlogo;
    QAction *actionclose;
    QWidget *centralwidget;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QPushButton *pushButton_10;
    QPushButton *pushButton_11;
    QMenuBar *menubar;
    QMenu *menuQT_LE_TEMEL_SOAP_LEMLER_2;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1572, 953);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 77, 200);\n"
"background-color: rgb(15, 94, 179);\n"
"background-color:rgb(31, 0, 94);\n"
"background-color: rgb(0, 0, 85);"));
        MainWindow->setIconSize(QSize(20, 20));
        actionlogo = new QAction(MainWindow);
        actionlogo->setObjectName("actionlogo");
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/MEPSAN-LOGO.jpg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionlogo->setIcon(icon);
        actionlogo->setMenuRole(QAction::TextHeuristicRole);
        actionclose = new QAction(MainWindow);
        actionclose->setObjectName("actionclose");
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/closeicon.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionclose->setIcon(icon1);
        actionclose->setMenuRole(QAction::TextHeuristicRole);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(290, 100, 271, 121));
        pushButton->setStyleSheet(QString::fromUtf8("border-radius: 25px;\n"
"font: 700 12pt \"Segoe UI\";\n"
"background-color: rgb(0, 0, 127);\n"
"border-color: rgb(255, 255, 255);\n"
"color: rgb(255, 255, 255);\n"
"border-width: 5px;\n"
"border-style: solid;\n"
"\n"
"\n"
""));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(650, 100, 271, 121));
        pushButton_2->setStyleSheet(QString::fromUtf8("border-radius: 25px;\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(0, 0, 127);\n"
"border-width: 5px;\n"
"border-style: solid;\n"
"font: 700 12pt \"Segoe UI\";\n"
"\n"
""));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(1030, 100, 271, 121));
        pushButton_3->setStyleSheet(QString::fromUtf8("font: 700 12pt \"Segoe UI\";\n"
"color: rgb(255, 255, 255);\n"
"border-radius: 25px;\n"
"background-color: rgb(0, 0, 127);\n"
"color: rgb(255, 255, 255);\n"
"border-width: 5px;\n"
"border-style: solid;\n"
"\n"
"\n"
"\n"
""));
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(1030, 510, 271, 121));
        pushButton_4->setStyleSheet(QString::fromUtf8("border-radius: 25px;\n"
"color: rgb(255, 255, 255);\n"
"border-width: 5px;\n"
"border-style: solid;\n"
"font: 700 12pt \"Segoe UI\";\n"
"background-color: rgb(0, 0, 127);\n"
"\n"
""));
        pushButton_5 = new QPushButton(centralwidget);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(650, 510, 271, 121));
        pushButton_5->setStyleSheet(QString::fromUtf8("border-radius: 25px;\n"
"background-color: rgb(85, 85, 127);\n"
"border-width: 5px;\n"
"border-style: solid;\n"
"background-color: rgb(0, 85, 127);\n"
"font: 700 12pt \"Segoe UI\";\n"
"background-color: rgb(0, 0, 127);\n"
"color: rgb(255, 255, 255);\n"
"\n"
"\n"
""));
        pushButton_6 = new QPushButton(centralwidget);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setGeometry(QRect(290, 510, 271, 121));
        pushButton_6->setStyleSheet(QString::fromUtf8("border-radius: 25px;\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(0, 0, 127);\n"
"font: 700 12pt \"Segoe UI\";\n"
"border-width: 5px;\n"
"border-style: solid;\n"
"\n"
""));
        pushButton_7 = new QPushButton(centralwidget);
        pushButton_7->setObjectName("pushButton_7");
        pushButton_7->setGeometry(QRect(1030, 290, 271, 121));
        pushButton_7->setStyleSheet(QString::fromUtf8("border-radius: 25px;\n"
"background-color: rgb(120, 120, 0);\n"
"background-color: rgb(0, 0, 127);\n"
"color: rgb(255, 255, 255);\n"
"border-width: 5px;\n"
"border-style: solid;\n"
"font: 700 12pt \"Segoe UI\";\n"
"\n"
"\n"
""));
        pushButton_8 = new QPushButton(centralwidget);
        pushButton_8->setObjectName("pushButton_8");
        pushButton_8->setGeometry(QRect(650, 290, 271, 121));
        pushButton_8->setStyleSheet(QString::fromUtf8("border-radius: 25px;\n"
"background-color: rgb(0, 0, 127);\n"
"color: rgb(255, 255, 255);\n"
"font: 700 12pt \"Segoe UI\";\n"
"border-width: 5px;\n"
"border-style: solid;\n"
"\n"
""));
        pushButton_9 = new QPushButton(centralwidget);
        pushButton_9->setObjectName("pushButton_9");
        pushButton_9->setGeometry(QRect(290, 290, 271, 121));
        pushButton_9->setStyleSheet(QString::fromUtf8("border-radius: 25px;\n"
"background-color: rgb(0, 0, 127);\n"
"color: rgb(255, 255, 255);\n"
"\n"
"border-color: rgb(255, 255, 255);\n"
"font: 700 12pt \"Segoe UI\";\n"
"border-width: 5px;\n"
"border-style: solid;\n"
"\n"
"\n"
""));
        pushButton_10 = new QPushButton(centralwidget);
        pushButton_10->setObjectName("pushButton_10");
        pushButton_10->setGeometry(QRect(1470, 0, 41, 41));
        pushButton_10->setStyleSheet(QString::fromUtf8("image: url(:/images/closeicon.png);\n"
"background-color: rgb(0, 77, 200);\n"
"background-color: rgb(0, 0, 85);"));
        pushButton_11 = new QPushButton(centralwidget);
        pushButton_11->setObjectName("pushButton_11");
        pushButton_11->setGeometry(QRect(10, 10, 71, 71));
        pushButton_11->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 77, 200);\n"
"image: url(:/images/LOGO.jpg);\n"
""));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1572, 26));
        menuQT_LE_TEMEL_SOAP_LEMLER_2 = new QMenu(menubar);
        menuQT_LE_TEMEL_SOAP_LEMLER_2->setObjectName("menuQT_LE_TEMEL_SOAP_LEMLER_2");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuQT_LE_TEMEL_SOAP_LEMLER_2->menuAction());

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionlogo->setText(QCoreApplication::translate("MainWindow", "logo", nullptr));
        actionclose->setText(QCoreApplication::translate("MainWindow", "close", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "TOTALIZER", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "RATE CHANGE", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "DISPENSER SALE", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "CHECK GPRS", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "DISPENSER UNLOCKED", nullptr));
        pushButton_6->setText(QCoreApplication::translate("MainWindow", "DISPENSER LOCK", nullptr));
        pushButton_7->setText(QCoreApplication::translate("MainWindow", "DELETE ALL", nullptr));
        pushButton_8->setText(QCoreApplication::translate("MainWindow", "CHANGE PASSWORD", nullptr));
        pushButton_9->setText(QCoreApplication::translate("MainWindow", "DISPENSER LAST SALE", nullptr));
        pushButton_10->setText(QString());
        pushButton_11->setText(QString());
        menuQT_LE_TEMEL_SOAP_LEMLER_2->setTitle(QCoreApplication::translate("MainWindow", "                              QT \304\260LE TEMEL SOAP \304\260\305\236LEMLER\304\260          ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
