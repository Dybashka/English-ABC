#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class achiv; }
QT_END_NAMESPACE

class achiv : public QWidget
{
    Q_OBJECT

public:
   achiv(QWidget *parent = nullptr);
    ~achiv();

signals:
    void toShowMenu();

private slots:
    void on_pushButton_clicked();

private:
    Ui::achiv *ui;
};
#endif // WIDGET_H
