/********************************************************************************
** Form generated from reading UI file 'soapmessagedialog.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SOAPMESSAGEDIALOG_H
#define UI_SOAPMESSAGEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_SoapMessageDialog
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2a;
    QPushButton *pushButton_3;
    QPushButton *pushButton_2;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QTextEdit *textEdit;
    QTextEdit *textEdit_2;
    QLineEdit *lineEditPort;
    QLabel *label_2;
    QLineEdit *lineEditIP;
    QLabel *label;

    void setupUi(QDialog *SoapMessageDialog)
    {
        if (SoapMessageDialog->objectName().isEmpty())
            SoapMessageDialog->setObjectName("SoapMessageDialog");
        SoapMessageDialog->resize(1539, 767);
        pushButton = new QPushButton(SoapMessageDialog);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(320, 630, 431, 61));
        pushButton->setStyleSheet(QString::fromUtf8("border-width: 5px;\n"
"border-style: solid;\n"
"background-color: rgb(120, 120, 0);\n"
"color: rgb(255, 255, 255);\n"
"font: 700 12pt \"Segoe UI\";\n"
"background-color: rgb(0, 0, 127);\n"
"border-radius: 25px;"));
        pushButton_2a = new QPushButton(SoapMessageDialog);
        pushButton_2a->setObjectName("pushButton_2a");
        pushButton_2a->setGeometry(QRect(280, 700, 1051, 51));
        pushButton_2a->setStyleSheet(QString::fromUtf8("border-width: 5px;\n"
"border-style: solid;\n"
"background-color: rgb(120, 120, 0);\n"
"color: rgb(255, 255, 255);\n"
"font: 700 12pt \"Segoe UI\";\n"
"background-color: rgb(0, 0, 127);\n"
"\n"
"border-radius: 25px;"));
        pushButton_3 = new QPushButton(SoapMessageDialog);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(850, 630, 431, 61));
        pushButton_3->setStyleSheet(QString::fromUtf8("border-width: 5px;\n"
"border-style: solid;\n"
"background-color: rgb(120, 120, 0);\n"
"color: rgb(255, 255, 255);\n"
"font: 700 12pt \"Segoe UI\";\n"
"background-color: rgb(0, 0, 127);\n"
"border-radius: 25px;"));
        pushButton_2 = new QPushButton(SoapMessageDialog);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(20, 10, 71, 51));
        pushButton_2->setStyleSheet(QString::fromUtf8("\n"
"image: url(:/images/back.png);\n"
"border-width: 5px;\n"
"border-style: solid;\n"
"border-color: rgb(255, 255, 255);\n"
"background-color: rgb(0, 0, 127);\n"
"border-radius: 25px;"));
        pushButton_4 = new QPushButton(SoapMessageDialog);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(320, 10, 431, 61));
        pushButton_4->setStyleSheet(QString::fromUtf8("border-width: 5px;\n"
"border-style: solid;\n"
"background-color: rgb(120, 120, 0);\n"
"color: rgb(255, 255, 255);\n"
"font: 700 12pt \"Segoe UI\";\n"
"background-color: rgb(0, 0, 127);\n"
"border-radius: 25px;"));
        pushButton_5 = new QPushButton(SoapMessageDialog);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(860, 10, 431, 61));
        pushButton_5->setStyleSheet(QString::fromUtf8("border-width: 5px;\n"
"border-style: solid;\n"
"background-color: rgb(120, 120, 0);\n"
"color: rgb(255, 255, 255);\n"
"font: 700 12pt \"Segoe UI\";\n"
"background-color: rgb(0, 0, 127);\n"
"border-radius: 25px;"));
        textEdit = new QTextEdit(SoapMessageDialog);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(290, 80, 491, 541));
        textEdit->setStyleSheet(QString::fromUtf8("border-radius: 25px;\n"
"background-color: rgb(255, 255, 255);"));
        textEdit_2 = new QTextEdit(SoapMessageDialog);
        textEdit_2->setObjectName("textEdit_2");
        textEdit_2->setGeometry(QRect(830, 80, 491, 541));
        textEdit_2->setStyleSheet(QString::fromUtf8("border-radius: 25px;\n"
"background-color: rgb(255, 255, 255);"));
        lineEditPort = new QLineEdit(SoapMessageDialog);
        lineEditPort->setObjectName("lineEditPort");
        lineEditPort->setGeometry(QRect(110, 500, 113, 26));
        lineEditPort->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label_2 = new QLabel(SoapMessageDialog);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(60, 500, 31, 20));
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        lineEditIP = new QLineEdit(SoapMessageDialog);
        lineEditIP->setObjectName("lineEditIP");
        lineEditIP->setGeometry(QRect(110, 540, 113, 26));
        lineEditIP->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label = new QLabel(SoapMessageDialog);
        label->setObjectName("label");
        label->setGeometry(QRect(30, 540, 71, 20));
        label->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        retranslateUi(SoapMessageDialog);

        QMetaObject::connectSlotsByName(SoapMessageDialog);
    } // setupUi

    void retranslateUi(QDialog *SoapMessageDialog)
    {
        SoapMessageDialog->setWindowTitle(QCoreApplication::translate("SoapMessageDialog", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("SoapMessageDialog", "SEND", nullptr));
        pushButton_2a->setText(QCoreApplication::translate("SoapMessageDialog", "EXIT", nullptr));
        pushButton_3->setText(QCoreApplication::translate("SoapMessageDialog", "CLEAR", nullptr));
        pushButton_2->setText(QString());
        pushButton_4->setText(QCoreApplication::translate("SoapMessageDialog", "REQUEST", nullptr));
        pushButton_5->setText(QCoreApplication::translate("SoapMessageDialog", "RESPONSE", nullptr));
        label_2->setText(QCoreApplication::translate("SoapMessageDialog", "Port:", nullptr));
        label->setText(QCoreApplication::translate("SoapMessageDialog", "IP Adress:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SoapMessageDialog: public Ui_SoapMessageDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SOAPMESSAGEDIALOG_H
