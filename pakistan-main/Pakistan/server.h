#ifndef SERVER_H
#define SERVER_H

#include <QObject>
#include <QTcpServer>
#include <QTcpSocket>
#include <QList>
#include <QNetworkAccessManager>
#include <QNetworkRequest>
#include <QNetworkReply>
#include <QDebug>
#include <QSet>
#include "soapmessagedialog.h"

class Server : public QObject
{
    Q_OBJECT

public:
    explicit Server(QObject *parent = nullptr);
    ~Server();

    void startServer();
    void sendSoapRequest(const QString &soapMessage, const QString &title);

private slots:
    void newClientConnected();
    void clientReadyRead();
    void clientDisconnected();
    void handleNetworkReply(QNetworkReply *reply);

signals:
    void clientMessageReceived(const QString& message);

private:
    QTcpServer *tcpServer;
    QList<QTcpSocket*> clients;
    QNetworkAccessManager *networkManager;
    SoapMessageDialog *soapDialog;
};

#endif
