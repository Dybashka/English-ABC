#include "mytcpserver.h"
#include <QDebug>
#include <QCoreApplication>
#include <QString>
#include "functions.h"

MyTcpServer::~MyTcpServer()
{
    foreach(int i, SClients.keys())
    {
      QTextStream os (SClients[i]);
      SClients[i]->close();
      SClients.remove(i);
    }
    server_status=0;// присваиваем переменной  server_status значение 0
    mTcpServer->close();
}

MyTcpServer::MyTcpServer(QObject * parent) : QObject(parent)
{
    mTcpServer = new QTcpServer(this);
    connect(mTcpServer, &QTcpServer::newConnection,
            this, &MyTcpServer::slotNewConnection);

    if (!mTcpServer->listen(QHostAddress::Any, 33333))
    {
        qDebug() << "server is not started";//выводит если не подключился к серверу
    }
    else
    {
        server_status = 1;
        qDebug() << "server is started"; //выводит если подключено
    }
}

void MyTcpServer::slotNewConnection()
{
    if (server_status == 1)
    {
        QTcpSocket *clientSocket= mTcpServer->nextPendingConnection();
        int idusersocs=(int)clientSocket->socketDescriptor();
        SClients[idusersocs]=clientSocket;
       // SClients[idusersocs]->write("Hello, World!!! I am echo server!");
        connect(SClients[idusersocs], &QTcpSocket::readyRead,this,&MyTcpServer::slotServerRead);
        connect(SClients[idusersocs],&QTcpSocket::disconnected,this,&MyTcpServer::slotClientDisconnected);
    }
}

void MyTcpServer::slotServerRead()
{
  /*  while (mTcpSocket->bytesAvailable() > 0)
    {
        QByteArray array = mTcpSocket->readAll();
        mTcpSocket->write(array);
    }*/
    QTcpSocket *clientSocket=(QTcpSocket*)sender();
       int id =(int)clientSocket->socketDescriptor();
       QByteArray array;
       std::string message= "";

       while(clientSocket->bytesAvailable()>0)
       {
           array =clientSocket->readAll();

       message += array.toStdString();
       }

       std::string log = "";
       std::string pass = "";

       qDebug()<<QString::fromStdString(message);
       int pos = message.find("&");
       message.erase(0,pos+1);

       //find login
       pos = message.find("&");
       log = message.substr(0,pos);
       message.erase(0,pos+1);

       // find password
       pos = message.find("&");
       pass = message.substr(0,pos);
       message.erase(0,pos+1);

       //Для работы с puTTy убираем лишние символы
       //pass.pop_back();
       //pass.pop_back();

       QString res = authorize(log,pass);
       qDebug()<<"login = " <<QString::fromStdString(log)
              <<"pass = "<<QString::fromStdString(pass)
             <<"result = "<< res;

       array.clear();
       array.append(res);
       clientSocket->write(array);
}

void MyTcpServer::slotClientDisconnected()
{
    QTcpSocket *clientSocket = (QTcpSocket*) sender();
    int id =(int)clientSocket->socketDescriptor();
    clientSocket->close();
    SClients.remove(id);
    qDebug() <<QString::fromUtf8("Client is disconnected \n");
}
