#include "achiv.h"
#include "ui_achiv.h"
#include "menu.h"

achiv::achiv(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::achiv)
{
    ui->setupUi(this);
}

achiv::~achiv()
{
    delete ui;
}

void achiv::on_pushButton_clicked()
{
    auto win= new menu();
    win->show();
    this->close();
}
