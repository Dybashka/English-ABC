#ifndef LEVELB_H
#define LEVELB_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class levelB ; }
QT_END_NAMESPACE

class levelB : public QWidget
{
    Q_OBJECT

public:
    levelB(QWidget *parent = nullptr);
    ~levelB();

signals:
    void toShowMenu();

private slots:
    void on_pushButton_clicked();

private:
    Ui::levelB *ui;
};
#endif // LEVELB_H
