#include "menu.h"
#include "ui_menu.h"

menu::menu(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::menu)
{
    ui->setupUi(this);
    A = new levelA();
    B = new levelB();
    C = new levelC();
    tst = new TESTabc();
    ch = new achiv();
}

menu::~menu()
{
    delete ui;
}

void menu::on_pushButton_clicked()
{
    this->close();
    A->show();
}
void menu::on_pushButton_2_clicked()
{
    this->close();
    B->show();
}
void menu::on_pushButton_3_clicked()
{
    this->close();
    C->show();
}
void menu::on_pushButton_4_clicked()
{
    this->close();
    tst->show();
}

void menu::on_pushButton_5_clicked()
{
    this->close();
    ch->show();
}
