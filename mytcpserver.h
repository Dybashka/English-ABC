#ifndef MYTCPSERVER_H
#define MYTCPSERVER_H
#include <QObject>
#include <QTcpServer>
#include <QTcpSocket>
#include <QtNetwork>
#include <QByteArray>
#include <QDebug>

class MyTcpServer : public QObject
{
    Q_OBJECT
public:
    explicit MyTcpServer (QObject * parent = nullptr);//конструктор неавтоматический
    ~MyTcpServer();
public slots:
    void slotNewConnection(); //обрабатывает запрос на новое соединение
    void slotClientDisconnected();// обрабатывает запрос на отсоединение от сервера
    void slotServerRead(); //отправдение на сервер
    //void slotReadClirnt();
private:
    QTcpServer * mTcpServer; //сервер
    QTcpSocket * mTcpSocket; //объект сокет
    int server_status; //статус сервера
};

#endif // MYTCPSERVER_H
