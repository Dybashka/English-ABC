#ifndef TESTABC_H
#define TESTABC_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class TESTabc; }
QT_END_NAMESPACE

class TESTabc : public QWidget
{
    Q_OBJECT

public:
    TESTabc(QWidget *parent = nullptr);
    ~TESTabc();


//signals:
   // void toShowMenu();

private slots:
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();

private:
    Ui::TESTabc *ui;
};
#endif // TESTABC_H
