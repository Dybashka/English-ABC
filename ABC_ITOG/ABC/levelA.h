#ifndef LEVELA_H
#define LEVELA_H

#include <QWidget>


QT_BEGIN_NAMESPACE
namespace Ui { class levelA; }
QT_END_NAMESPACE

/*!
 *  \brief Класс уровень А
 *  \authors Балашова Дарья
 *
 *   Данный класс предоставляет интерфейс уровня А и обрабатывает нажатия на кнопки.
*/
class levelA : public QWidget
{
    Q_OBJECT

public:
     levelA(QWidget *parent = nullptr);
    ~levelA();


private slots:
     /*!
       * Обрабатывает нажатие кнопку, осуществляя переход в меню.
       */
    void on_pushButton_clicked();
   // void on_pushButton_2_clicked();

private:
    Ui::levelA *ui;///< интерфейс уровня А

};
#endif // LEVELA_H
