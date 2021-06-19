#ifndef AVTORIZ_H
#define AVTORIZ_H

#include <QDialog>
#include <QTcpSocket>
#include "menu.h"


namespace Ui { class Avtoriz; }

class Avtoriz : public QDialog
{
    Q_OBJECT

public:
   explicit Avtoriz(QWidget *parent = nullptr);
    ~Avtoriz();

private:
    Ui::Avtoriz *ui;
    Menu *shMenu;
    QTcpSocket *client_socket;


signals:
    void toShowMenu();

private slots:
    void on_pushButton_clicked();
    void authorize(QString login, QString pass);

private slots:
    void slot_on_connected();// подтверждение о соединении
    void slot_ready_read();//что делать когда приходит соощение о подкл
    void slot_send_to_server(QString message);//отправка сообщения
    void slot_disconnected();//что делать при отсоединении
};
#endif // AVTORIZ_H
