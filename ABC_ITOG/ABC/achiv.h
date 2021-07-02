#ifndef ACHIV_H
#define ACHIV_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class achiv; }
QT_END_NAMESPACE
/*!
 *  \brief Класс достижений
 *  \authors Балашова Дарья
 *
 *   Данный класс предоставляет интерфейс достижений и обрабатывает нажатия на кнопки.
*/
class achiv : public QWidget
{
    Q_OBJECT

public:
   achiv(QWidget *parent = nullptr);
    ~achiv();

private slots:
   /*!
     * Обрабатывает нажатие кнопку, осуществляя переход в меню.
     */
    void on_pushButton_clicked();

private:
    Ui::achiv *ui;///< интерфейс авторизации
};
#endif // ACHIV_H
