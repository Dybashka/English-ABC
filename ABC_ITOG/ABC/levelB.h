#ifndef LEVELB_H
#define LEVELB_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class levelB ; }
QT_END_NAMESPACE
/*!
 *  \brief Класс уровень В
 *  \authors Балашова Дарья
 *
 *   Данный класс предоставляет интерфейс уровня В и обрабатывает нажатия на кнопки.
*/
class levelB : public QWidget
{
    Q_OBJECT

public:
    levelB(QWidget *parent = nullptr);
    ~levelB();

private slots:
    /*!
      * Обрабатывает нажатие кнопку, осуществляя переход в меню.
      */
    void on_pushButton_clicked();

private:
    Ui::levelB *ui;///< интерфейс уровня В
};
#endif // LEVELB_H
