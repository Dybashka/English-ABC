#include "menu.h"
#include "ui_Menu.h"

Menu::Menu(QWidget *parent)
    : QMenu(parent)
    , ui(new Ui::Menu)
{
    ui->setupUi(this);
    A = new levelA();
    B = new levelB();
    C = new levelC();
    tst = new TESTabc();
    ch = new achiv();
}

Menu::~Menu()
{
    delete ui;
}

void Menu::on_pushButton_clicked()
{
    this->close();
    A->show();
}
void Menu::on_pushButton_2_clicked()
{
    this->close();
    B->show();
}
void Menu::on_pushButton_3_clicked()
{
    this->close();
    C->show();
}
void Menu::on_pushButton_4_clicked()
{
    this->close();
    tst->show();
}

void Menu::on_pushButton_5_clicked()
{
    this->close();
    ch->show();
}
