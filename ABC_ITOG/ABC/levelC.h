#ifndef LEVELC_H
#define LEVELC_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class levelC; }
QT_END_NAMESPACE

/*!
 *  \brief Класс уровень С
 *  \authors Балашова Дарья
 *
 *   Данный класс предоставляет интерфейс уровня С и обрабатывает нажатия на кнопки.
*/
class levelC : public QWidget
{
    Q_OBJECT

public:
    levelC(QWidget *parent = nullptr);
    ~levelC();

private slots:
    /*!
      * Обрабатывает нажатие кнопку, осуществляя переход в меню.
      */
    void on_pushButton_clicked();

private:
    Ui::levelC *ui;///< интерфейс уровня С
};
#endif // LEVELC_H
