#include "server.h"
#include <QDebug>


Server::Server(QObject *parent) : QObject(parent), tcpServer(new QTcpServer(this))
{
    connect(tcpServer, &QTcpServer::newConnection, this, &Server::newClientConnected);
}

Server::~Server()
{
    tcpServer->close();
    qDeleteAll(clients);
}

void Server::startServer()
{
    if (!tcpServer->listen(QHostAddress::Any, 1234)) {
        qDebug() << "Server could not start!";
    } else {
        connect(tcpServer, &QTcpServer::newConnection, this, &Server::newClientConnected);
        qDebug() << "Server started...";
    }
}


void Server::handleNetworkReply(QNetworkReply *reply)
{
    if (reply->error() == QNetworkReply::NoError) {
        QByteArray response = reply->readAll();
        qDebug() << "SOAP Response:" << response;

        soapDialog->setSoapMessage(response);
        soapDialog->show();
    } else {
        qDebug() << "Error:" << reply->errorString();
    }
    reply->deleteLater();
}
void Server::newClientConnected()
{
    QTcpSocket *clientSocket = tcpServer->nextPendingConnection();
    clients.append(clientSocket);

    connect(clientSocket, &QTcpSocket::readyRead, this, &Server::clientReadyRead);
    connect(clientSocket, &QTcpSocket::disconnected, this, &Server::clientDisconnected);

    qDebug() << "Client connected!";
}

void Server::clientReadyRead()
{
    QTcpSocket *clientSocket = qobject_cast<QTcpSocket*>(sender());
    if (clientSocket) {
        QByteArray data = clientSocket->readAll();
        qDebug() << "Received: " << data;
        QString receivedMessage(data);

        emit clientMessageReceived(receivedMessage);

        QString responseMessage = " OPEN";

        clientSocket->write(responseMessage.toUtf8());
        clientSocket->flush();
    }
}
void Server::clientDisconnected()
{
    QTcpSocket *clientSocket = qobject_cast<QTcpSocket*>(sender());
    if (clientSocket) {
        qDebug() << "Client disconnected!";
        clients.removeAll(clientSocket);
        clientSocket->deleteLater();
    }
}
