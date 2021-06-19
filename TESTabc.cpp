#include "TESTabc.h"
#include "ui_TESTabc.h"
#include <QMessageBox>

TESTabc::TESTabc(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::TESTabc)
{
    ui->setupUi(this);
}

TESTabc::~TESTabc()
{
    delete ui;
}


void TESTabc::on_pushButton_clicked()
{
    QString apple = ui ->apple->text();
    QString cat = ui ->cat->text();
    QString bear = ui ->bear->text();

    if (apple == "apple" && cat == "cat" && bear == "bear" ) {
        QMessageBox :: information(this, "Ура!", "Ты успешно cправился с проверкой!");
    } else {
        QMessageBox :: warning(this, "Увы!", "Ты ошибся, попробуй снова!");
    }
}

void TESTabc::on_pushButton_2_clicked()
{
    this->close();
    emit toShowMenu();
}
