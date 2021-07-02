#include "levelB.h"
#include "ui_levelB.h"
#include "menu.h"

levelB::levelB(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::levelB)
{
    ui->setupUi(this);
}

levelB::~levelB()
{
    delete ui;
}

void levelB::on_pushButton_clicked()
{
    auto win= new menu();
    win->show();
    this->close();
}
