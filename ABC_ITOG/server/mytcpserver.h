#ifndef MYTCPSERVER_H
#define MYTCPSERVER_H
#include <QObject>
#include <QTcpServer>
#include <QTcpSocket>
#include <QtNetwork>
#include <QByteArray>
#include <QDebug>

/*!
 *  \brief Класс сервер
 *  \authors Балашова Дарья, Мошникова Виктория
 *
 *   Данный класс реализует функии сервера.
*/
class MyTcpServer : public QObject
{
    Q_OBJECT
public:
    explicit MyTcpServer (QObject * parent = nullptr);//конструктор неавтоматический
    ~MyTcpServer();
public slots:
    /*!
    * Обрабатывает запрос на новое соединение с клиентом.
    */
    void slotNewConnection();
    /*!
    * Обрабатывает запрос на отсоединение клиента от сервера.
    */
    void slotClientDisconnected();
    /*!
    * Обрататывает сообщения с клиента.
    */
    void slotServerRead();

private:
    QTcpServer * mTcpServer;
    int server_status;
    QMap<int,QTcpSocket *> SClients;
};

#endif // MYTCPSERVER_H
