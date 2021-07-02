#include "levelA.h"
#include "ui_levelA.h"
#include "menu.h"
#include <QString>


levelA::levelA(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::levelA)
{
    ui->setupUi(this);
}

levelA::~levelA()
{
    delete ui;
}

void levelA::on_pushButton_clicked()
{
    auto win= new menu();
    win->show();
    this->close();

}
