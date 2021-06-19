#include "levelA.h"
#include "ui_levelA.h"

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
    this->close();
    emit toShowMenu();
}
