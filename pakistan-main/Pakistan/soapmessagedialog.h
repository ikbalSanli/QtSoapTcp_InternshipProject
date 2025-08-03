#ifndef SOAPMESSAGEDIALOG_H
#define SOAPMESSAGEDIALOG_H

#include <QDialog>
#include <QTcpSocket>
#include <QXmlStreamReader>

QT_BEGIN_NAMESPACE
namespace Ui {
class SoapMessageDialog;
}
QT_END_NAMESPACE

class SoapMessageDialog : public QDialog
{
    Q_OBJECT

public:
    explicit SoapMessageDialog(QWidget *parent = nullptr);
    ~SoapMessageDialog();

    void setSoapMessage(const char* soapMessage);
    void setResponse(const QString& response);
    QString getSoapMessage() const;


private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_clicked();





    void onSocketReadyRead();
    void handleClientError(QAbstractSocket::SocketError socketError);



private:
    Ui::SoapMessageDialog *ui;
    QTcpSocket *socket;
    void parseSoapResponse(const QByteArray &response);

};

#endif
