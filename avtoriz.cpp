#include "avtoriz.h"
#include "ui_avtoriz.h"
#include "QString"
#include <QMessageBox>
#include "functions.h"
#include "menu.h"

Avtoriz::Avtoriz(QWidget *parent):
    QDialog(parent),
    ui(new Ui::Avtoriz)
{
    ui->setupUi(this);
    ui->label_error->setVisible(false);

    shMenu= new Menu();

    client_socket = new QTcpSocket(this);
    client_socket->connectToHost("127.0.0.1", 33333);

    connect(client_socket,SIGNAL(connected()),SLOT(slot_connected()));
    connect(client_socket,SIGNAL(readyRead()),SLOT(slot_readyRead()));
}

Avtoriz::~Avtoriz()
{
    delete ui;
    client_socket->close();
}

void Avtoriz::authorize(QString login, QString pass)
{
    QString message_to_server;
    message_to_server = login+"&"+pass;
    slot_send_to_server(message_to_server);

}

void Avtoriz::on_pushButton_clicked()
{
        slot_send_to_server("auth&"+ui->login->text() +"&"+ ui->pass->text());
}

void Avtoriz::slot_on_connected()
{
    QMessageBox Msg;
    Msg.setText("Connection!!!");
    Msg.exec();

}

void Avtoriz:: slot_ready_read()
{
    QByteArray array;
    std::string message = "";

    while(client_socket->bytesAvailable()>0)
    {
        array = client_socket->readAll();
        message += array.toStdString();
    }

    if(message=="authorization yes ")
    {
        this->close();
        shMenu->show();
    }
    else if (message=="authorization error ")
    {
        ui->label_error->setVisible(true);
    }
}

void Avtoriz::slot_send_to_server(QString message)
{
     QByteArray array;
     array.append(message);
     client_socket->write(array);
}

void Avtoriz::slot_disconnected()
{
    client_socket->close();
}
