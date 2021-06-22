#ifndef MENU_H
#define MENU_H

#include <QWidget>
#include "levelA.h"
#include "levelB.h"
#include "levelC.h"
#include "TESTabc.h"
#include "achiv.h"

QT_BEGIN_NAMESPACE
namespace Ui { class menu; }
QT_END_NAMESPACE

class menu : public QWidget
{
    Q_OBJECT

public:
   menu(QWidget *parent = nullptr);
    ~menu();

private slots:
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();
    void on_pushButton_3_clicked();
    void on_pushButton_4_clicked();
    void on_pushButton_5_clicked();
   // void op();

private:
    Ui::menu *ui;
    levelA *A;
    levelB *B;
    levelC *C;
    TESTabc *tst;
    achiv *ch;
};
#endif // MENU_H
