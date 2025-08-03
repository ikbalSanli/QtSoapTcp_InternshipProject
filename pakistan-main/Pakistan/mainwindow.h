#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QNetworkAccessManager>
#include <QTcpServer>
#include <QTcpSocket>
#include "soapmessagedialog.h"
#include <QNetworkRequest>
#include <QNetworkReply>
#include "server.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE
class SoapMessageDialog;

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_actionclose_triggered();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_4_clicked();

    void handleNetworkReply(QNetworkReply *reply);

    void newClientConnected();
    void readFromClient();
    void handleClientError(QAbstractSocket::SocketError socketError);

    void showTotalizerSoapMessage();
    void showRateChangeSoapMessage();
    void showDispenserSaleSoapMessage();
    void showDispenserLastSaleSoapMessage();
    void showChangePasswordSoapMessage();
    void showDeleteAllSoapMessage();
    void showDispenserLockSoapMessage();
    void showDispenserUnlockedSoapMessage();
    void showCheckGprsSoapMessage();


    void on_pushButton_10_clicked();
    void parseSoapResponse(const QByteArray &response);

private:

    Ui::MainWindow *ui;
    SoapMessageDialog *soapDialog;
    QNetworkAccessManager *networkManager;
    QTcpServer *tcpServer;
    QTcpSocket *clientSocket;
    void openSoapMessageDialog(const QString& soapMessage, const QString& title);
    QString lastButtonId;
    QByteArray lastSoapResponse;

    Server *server;
};
#endif
