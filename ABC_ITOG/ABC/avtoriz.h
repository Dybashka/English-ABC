#ifndef AVTORIZ_H
#define AVTORIZ_H

#include <QDialog>
#include <QTcpSocket>
#include "menu.h"

namespace Ui { class Avtoriz; }

/*!
 *  \brief Класс авторизации
 *  \authors Балашова Дарья
 *
 *   Данный класс предоставляет интерфейс авторизации, а также регулирует взаимодействие клиента и сервера.
*/
class Avtoriz : public QDialog
{
    Q_OBJECT

public:
   explicit Avtoriz(QWidget *parent = nullptr);
    ~Avtoriz();

private:
    Ui::Avtoriz *ui;///< интерфейс для авторизации
    menu *shMenu; ///< интерфейс для меню
    QTcpSocket *client_socket; ///< клиент сокет

private slots:
    /*!
    * При нажатии на кнопку отправляет сообщение с поролем и логином на сервер.
    */
    void on_pushButton_clicked();

   // void authorize(QString login, QString pass);
    /*!
    * Подтверждает соединение клиента с сервером.
    */
    void slot_on_connected();// подтверждение о соединении
    /*!
    * Если автоизация успешлна то переходит в меню, если нет то выводит "authorization error".
    */
    void slot_readyRead();//что делать когда приходит соощение о подкл
    /*!
    * Отправка сообщения с клиента на сервер.
    * \param message Сообщение, которое надо передать.
    */
    void slot_send_to_server(QString message);//отправка сообщения
    /*!
    * Отсоединение клиента от сервера.
    */
    void slot_disconnected();//что делать при отсоединении
};
#endif // AVTORIZ_H
