#ifndef LEVELC_H
#define LEVELC_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class levelC; }
QT_END_NAMESPACE

class levelC : public QWidget
{
    Q_OBJECT

public:
    levelC(QWidget *parent = nullptr);
    ~levelC();

signals:
    void toShowMenu();

private slots:
    void on_pushButton_clicked();

private:
    Ui::levelC *ui;
};
#endif // LEVELC_H
