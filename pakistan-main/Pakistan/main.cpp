#include "mainwindow.h"
#include <QApplication>
#include <QCoreApplication>
#include "server.h"


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    MainWindow w;
    w.show();
    Server server;
    server.startServer();
    return a.exec();
}
