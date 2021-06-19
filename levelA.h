#ifndef LEVELA_H
#define LEVELA_H

#include <QWidget>


QT_BEGIN_NAMESPACE
namespace Ui { class levelA; }
QT_END_NAMESPACE

class levelA : public QWidget
{
    Q_OBJECT

public:
     levelA(QWidget *parent = nullptr);
    ~levelA();

signals:
    void toShowMenu();

private slots:
    void on_pushButton_clicked();

private:
    Ui::levelA *ui;

};
#endif // LEVELA_H
