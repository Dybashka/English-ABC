#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    QString login = ui ->login->text();
    QString password = ui ->pass->text();

    if (login == "codi" && password == "test") {
        QMessageBox :: information(this, "Ура!", "Вы успешно авторизовались!");
    } else {
        QMessageBox :: warning(this, "Увы!", "Вы не авторизовались!");
    }
}
