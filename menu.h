#ifndef MENU_H
#define MENU_H

#include <QMenu>
#include "levelA.h"
#include "levelB.h"
#include "levelC.h"
#include "TESTabc.h"
#include "achiv.h"

QT_BEGIN_NAMESPACE
namespace Ui { class Menu; }
QT_END_NAMESPACE

class Menu : public QMenu
{
    Q_OBJECT

public:
    Menu(QWidget *parent = nullptr);
    ~Menu();

private slots:
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();
    void on_pushButton_3_clicked();
    void on_pushButton_4_clicked();
    void on_pushButton_5_clicked();

private:
    Ui::Menu *ui;
    levelA *A;
    levelB *B;
    levelC *C;
    TESTabc *tst;
    achiv *ch;
};
#endif // MENU_H
