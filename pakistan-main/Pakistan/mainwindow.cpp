#include "mainwindow.h"
#include "soapmessagedialog.h"
#include "ui_mainwindow.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>
#include <QNetworkReply>
#include <QDebug>
#include <QTcpServer>
#include <QTcpSocket>
#include <QDebug>
#include <QJsonDocument>
#include <QJsonObject>
#include <QXmlStreamReader>
#include <QXmlStreamWriter>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , networkManager(new QNetworkAccessManager(this))
    , tcpServer(new QTcpServer(this))
{
    ui->setupUi(this);
    tcpServer = new QTcpServer();


    connect(networkManager, &QNetworkAccessManager::finished, this, &MainWindow::handleNetworkReply);




    soapDialog = new SoapMessageDialog(this);
    connect(ui->pushButton, &QPushButton::clicked, this, &MainWindow::showTotalizerSoapMessage);
    connect(ui->pushButton_2, &QPushButton::clicked, this, &MainWindow::showRateChangeSoapMessage);
    connect(ui->pushButton_3, &QPushButton::clicked, this, &MainWindow::showDispenserSaleSoapMessage);
    connect(ui->pushButton_9, &QPushButton::clicked, this, &MainWindow::showDispenserLastSaleSoapMessage);
    connect(ui->pushButton_8, &QPushButton::clicked, this, &MainWindow::showChangePasswordSoapMessage);
    connect(ui->pushButton_7, &QPushButton::clicked, this, &MainWindow::showDeleteAllSoapMessage);
    connect(ui->pushButton_6, &QPushButton::clicked, this, &MainWindow::showDispenserLockSoapMessage);
    connect(ui->pushButton_5, &QPushButton::clicked, this, &MainWindow::showDispenserUnlockedSoapMessage);
    connect(ui->pushButton_4, &QPushButton::clicked, this, &MainWindow::showCheckGprsSoapMessage);

}

MainWindow::~MainWindow()
{
    delete ui;
    delete soapDialog;
}


void MainWindow::on_actionclose_triggered()
{
    QApplication::quit();//exit icon code
}


void MainWindow::openSoapMessageDialog(const QString& soapMessage, const QString& title)
{
    soapDialog->setWindowTitle(title);
    soapDialog->setSoapMessage(soapMessage.toStdString().c_str());
    soapDialog->show();
}
void MainWindow::showTotalizerSoapMessage()
{
    QString soapMessage =R"(<soapenv:Envelope xmlns:soapenv="http://schemas.xmlsoap.org/soap/envelope/" xmlns:psop="/PSOPK/">
    <soapenv:Header/>
    <soapenv:Body>
    <psop:totalizerRequest>
    <psop:ip>?</psop:ip>
    <psop:dispenser_id>?</psop:dispenser_id>
    <psop:nozzel_id>?</psop:nozzel_id>
    </psop:totalizerRequest>
    </soapenv:Body>
    </soapenv:Envelope>)";

    openSoapMessageDialog(soapMessage, "TOTALIZER");

}


void MainWindow::showRateChangeSoapMessage()
{
    QString soapMessage = R"(<soapenv:Envelope xmlns:soapenv="http://schemas.xmlsoap.org/soap/envelope/" xmlns:psop="/PSOPK/">
   <soapenv:Header/>
   <soapenv:Body>
      <psop:rateChangeRequest>
         <psop:ip>?</psop:ip>
         <psop:rate>?</psop:rate>
         <psop:productCode>?</psop:productCode>
      </psop:rateChangeRequest>
   </soapenv:Body>
</soapenv:Envelope>)";

    openSoapMessageDialog(soapMessage, "RATE CHANGE");

}


void MainWindow::showDispenserSaleSoapMessage()
{
    QString soapMessage = R"(<soapenv:Envelope xmlns:soapenv="http://schemas.xmlsoap.org/soap/envelope/" xmlns:psop="/PSOPK/">
   <soapenv:Header/>
   <soapenv:Body>
      <psop:dispenserSaleInfo>
         <psop:ip>?</psop:ip>
         <psop:dispenser_id>?</psop:dispenser_id>
         <psop:nozzle_id>?</psop:nozzle_id>
      </psop:dispenserSaleInfo>
   </soapenv:Body>
</soapenv:Envelope>)";

    openSoapMessageDialog(soapMessage, "DISPENSER SALE");
}


void MainWindow::showDispenserLastSaleSoapMessage()
{
    QString soapMessage = R"(<soapenv:Envelope xmlns:soapenv="http://schemas.xmlsoap.org/soap/envelope/" xmlns:psop="/PSOPK/">
   <soapenv:Header/>
   <soapenv:Body>
      <psop:dispenserLastSaleInfo>
         <psop:ip>?</psop:ip>
      </psop:dispenserLastSaleInfo>
   </soapenv:Body>
</soapenv:Envelope>)";

    openSoapMessageDialog(soapMessage, "DISPANSER LAST SALE ");
}

void MainWindow::showChangePasswordSoapMessage()
{
    QString soapMessage = R"(<soapenv:Envelope xmlns:soapenv="http://schemas.xmlsoap.org/soap/envelope/" xmlns:psop="/PSOPK/">
   <soapenv:Header/>
   <soapenv:Body>
      <psop:dispenserChangePasswordRequest>
         <psop:ip>?</psop:ip>
         <psop:dispenser_id>?</psop:dispenser_id>
         <psop:new_password>?</psop:new_password>
      </psop:dispenserChangePasswordRequest>
   </soapenv:Body>
</soapenv:Envelope>)";

    openSoapMessageDialog(soapMessage, "CHANGE PASSWORD");
}


void MainWindow::showDeleteAllSoapMessage()
{
    QString soapMessage = R"(<soapenv:Envelope xmlns:soapenv="http://schemas.xmlsoap.org/soap/envelope/" xmlns:psop="/PSOPK/">
   <soapenv:Header/>
   <soapenv:Body>
      <psop:deleteAllRequest>
         <psop:ip>?</psop:ip>
      </psop:deleteAllRequest>
   </soapenv:Body>
</soapenv:Envelope>)";

    openSoapMessageDialog(soapMessage, "DELETE ALL");
}


void MainWindow::showDispenserLockSoapMessage()
{
    QString soapMessage = R"(<soapenv:Envelope xmlns:soapenv="http://schemas.xmlsoap.org/soap/envelope/" xmlns:psop="/PSOPK/">
   <soapenv:Header/>
   <soapenv:Body>
      <psop:dispenserLockRequest>
         <psop:ip>?</psop:ip>
         <psop:dispenser_id>?</psop:dispenser_id>
      </psop:dispenserLockRequest>
   </soapenv:Body>
</soapenv:Envelope>)";

    openSoapMessageDialog(soapMessage, "DISPENSER LOCK");
}


void MainWindow::showDispenserUnlockedSoapMessage()
{
    QString soapMessage = R"(<soapenv:Envelope xmlns:soapenv="http://schemas.xmlsoap.org/soap/envelope/" xmlns:psop="/PSOPK/">
   <soapenv:Header/>
   <soapenv:Body>
      <psop:dispenserUnlockRequest>
         <psop:ip>?</psop:ip>
         <psop:dispenser_id>?</psop:dispenser_id>
      </psop:dispenserUnlockRequest>
   </soapenv:Body>
</soapenv:Envelope>)";

    openSoapMessageDialog(soapMessage, "DISPENSER UNLOCKED");
}

void MainWindow::showCheckGprsSoapMessage()
{
    QString soapMessage = R"(<soapenv:Envelope xmlns:soapenv="http://schemas.xmlsoap.org/soap/envelope/" xmlns:psop="/PSOPK/">
   <soapenv:Header/>
   <soapenv:Body>
      <psop:checkGprs>
         <psop:ip>?</psop:ip>
      </psop:checkGprs>
   </soapenv:Body>
</soapenv:Envelope>)";
    openSoapMessageDialog(soapMessage, "CHECK GPRS");

}


void MainWindow::parseSoapResponse(const QByteArray &response)
{
    QXmlStreamReader xml(response);

    while (!xml.atEnd() && !xml.hasError()) {
        QXmlStreamReader::TokenType token = xml.readNext();

        if (token == QXmlStreamReader::StartElement) {
            if (xml.name().toString() == "totalizerResponse") {
                qDebug() << "Totalizer Response Element Found";
            }
        }
    }

    if (xml.hasError()) {
        qDebug() << "XML Error:" << xml.errorString();
    }
}


void MainWindow::handleNetworkReply(QNetworkReply *reply)
{
    if (reply->error() == QNetworkReply::NoError) {
        QByteArray response = reply->readAll();
        qDebug() << "SOAP Response:" << response;

        parseSoapResponse(response);

        soapDialog->setWindowTitle("SOAP Response");
        soapDialog->setSoapMessage(response);
        soapDialog->show();
    } else {
        qDebug() << "Error:" << reply->errorString();
    }
    reply->deleteLater();
}

void MainWindow::newClientConnected()
{
    QTcpSocket *clientSocket = tcpServer->nextPendingConnection();
    connect(clientSocket, &QTcpSocket::readyRead, this, &MainWindow::readFromClient);
    connect(clientSocket, &QTcpSocket::errorOccurred, this, &MainWindow::handleClientError);
    qDebug() << "Yeni bir istemci bağlandı.";
}

void MainWindow::readFromClient()
{
    QTcpSocket *clientSocket = qobject_cast<QTcpSocket*>(sender());
    if (clientSocket) {
        QByteArray data = clientSocket->readAll();
        qDebug() << "İstemciden gelen veri:" << data;

        QString soapMessage(data);
        QString title = "SOAP Response";

        soapDialog->setWindowTitle(title);
        soapDialog->setSoapMessage(soapMessage.toStdString().c_str());
        soapDialog->show();

        QString responseMessage = " ";
        clientSocket->write(responseMessage.toUtf8());
        clientSocket->flush();
    }
}


void MainWindow::handleClientError(QAbstractSocket::SocketError )
{
    QTcpSocket *clientSocket = qobject_cast<QTcpSocket*>(sender());
    if (clientSocket) {
        qDebug() << "İstemci hatası:" << clientSocket->errorString();
        clientSocket->disconnectFromHost();
    }
}

void MainWindow::on_pushButton_clicked()
{
    SoapMessageDialog *dialog=new SoapMessageDialog(this);
    dialog->setWindowTitle("TOTALIZER");
}


void MainWindow::on_pushButton_2_clicked()
{
    SoapMessageDialog *dialog=new SoapMessageDialog(this);
    dialog->setWindowTitle("RATE CHANGE");
}


void MainWindow::on_pushButton_3_clicked()
{
    SoapMessageDialog *dialog=new SoapMessageDialog(this);
    dialog->setWindowTitle("DISPENSER SALE");
}


void MainWindow::on_pushButton_9_clicked()
{
    SoapMessageDialog *dialog=new SoapMessageDialog(this);
    dialog->setWindowTitle("DISPENSER LAST SALE");
}


void MainWindow::on_pushButton_8_clicked()
{
    SoapMessageDialog *dialog=new SoapMessageDialog(this);
    dialog->setWindowTitle("CHANGE PASSWORD");
}


void MainWindow::on_pushButton_7_clicked()
{
    SoapMessageDialog *dialog=new SoapMessageDialog(this);
    dialog->setWindowTitle("DELETE ALL");
}


void MainWindow::on_pushButton_6_clicked()
{
    SoapMessageDialog *dialog=new SoapMessageDialog(this);
    dialog->setWindowTitle("DISPENSER LOCK");
}


void MainWindow::on_pushButton_5_clicked()
{
    SoapMessageDialog *dialog=new SoapMessageDialog(this);
    dialog->setWindowTitle("DISPENSER UNLOCKED");
}


void MainWindow::on_pushButton_4_clicked()
{
    SoapMessageDialog *dialog=new SoapMessageDialog(this);
    dialog->setWindowTitle("CHECK GPRS");
}

void MainWindow::on_pushButton_10_clicked()
{
    QApplication::quit();//exit
}
