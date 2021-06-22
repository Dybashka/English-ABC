#include "levelC.h"
#include "ui_levelC.h"
#include "menu.h"

levelC::levelC(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::levelC)
{
    ui->setupUi(this);
}

levelC::~levelC()
{
    delete ui;
}

void levelC::on_pushButton_clicked()
{
    auto win= new menu();
    win->show();
    this->close();
}
