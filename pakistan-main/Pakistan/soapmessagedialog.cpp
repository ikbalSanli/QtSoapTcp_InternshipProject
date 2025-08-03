#include "soapmessagedialog.h"
#include "ui_soapmessagedialog.h"
#include <QTcpSocket>

SoapMessageDialog::SoapMessageDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::SoapMessageDialog),
    socket(new QTcpSocket(this))
{
    ui->setupUi(this);
    connect(socket, &QTcpSocket::readyRead, this, &SoapMessageDialog::onSocketReadyRead);

}

SoapMessageDialog::~SoapMessageDialog()
{
    delete ui;
}


void SoapMessageDialog::setSoapMessage(const char* soapMessage)
{
     ui->textEdit->setText(soapMessage);// show request


}

void SoapMessageDialog::setResponse(const QString& response)
{
    qDebug() << "Response received:" << response;

    ui->textEdit_2->setText(response); //show response
    ui->textEdit_2->setVisible(true);

}

void SoapMessageDialog::on_pushButton_3_clicked()
{
    ui->textEdit_2->clear();//delete message
}






void SoapMessageDialog::on_pushButton_2_clicked()
{
    this->close();//back button

}


void SoapMessageDialog::on_pushButton_4_clicked()
{
    this->close();//back button

}
QString SoapMessageDialog::getSoapMessage() const
{
    return ui->textEdit->toPlainText();
}

void SoapMessageDialog::on_pushButton_clicked()//send button
{
    QString ip = ui->lineEditIP->text();
    int port = ui->lineEditPort->text().toInt();

    QString soapMessage = ui->textEdit->toPlainText();
    qDebug() << "SOAP Message to send:" << soapMessage;

    socket->abort();
    socket->connectToHost(ip, port);

    if (socket->waitForConnected(3000)) {


        qDebug() << "Connected to server.";
        socket->write(soapMessage.toUtf8());
        socket->waitForBytesWritten();
        socket->flush();

        qDebug() << "SOAP Message sent to server.";
    } else {


        qDebug() << "Connection to server failed:" << socket->errorString();
    }
}

void SoapMessageDialog::onSocketReadyRead()
{
    QByteArray response = socket->readAll();
    qDebug() << "Received response from server:" << response;

    ui->textEdit_2->setPlainText(QString::fromUtf8(response));
}

void SoapMessageDialog::handleClientError(QAbstractSocket::SocketError socketError)
{
    QTcpSocket *clientSocket = qobject_cast<QTcpSocket*>(sender());
    if (clientSocket) {
        qDebug() << "Client error:" << clientSocket->errorString();
        clientSocket->disconnectFromHost();
    }
}


