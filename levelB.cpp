#include "levelB.h"
#include "ui_levelB.h"

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
    this->close();
    emit toShowMenu();
}
