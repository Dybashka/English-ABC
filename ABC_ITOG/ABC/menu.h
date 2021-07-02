#ifndef MENU_H
#define MENU_H

#include <QWidget>
#include <QDebug>
#include "levelA.h"
#include "levelB.h"
#include "levelC.h"
#include "TESTabc.h"
#include "achiv.h"
#include "user.h"

QT_BEGIN_NAMESPACE
namespace Ui { class menu; }
QT_END_NAMESPACE

/*!
 *  \brief Класс меню
 *  \authors Балашова Дарья
 *
 *   Данный класс предоставляет интерфейс меню и обрабатывает нажатия на кнопки.
*/
class menu : public QWidget
{
    Q_OBJECT

public:
   menu(QWidget *parent = nullptr);
    ~menu();
   /*!
     * Присвоение пользователя.
     * \param activeUser Потльзователь.
     */
   void setActiveUser(User activeUser);

private slots:
   /*!
     * Обрабатывает нажатие на первую кнопку, осуществляя переход на уровень А.
     */
    void on_pushButton_clicked();
    /*!
      * Обрабатывает нажатие на вторую кнопку, осуществляя переход на уровень В.
      */
    void on_pushButton_2_clicked();
    /*!
      * Обрабатывает нажатие на третью кнопку, осуществляя переход на уровень С.
      */
    void on_pushButton_3_clicked();
    /*!
      * Обрабатывает нажатие на четвёртую кнопку, осуществляя переход в тесты.
      */
    void on_pushButton_4_clicked();
    /*!
      * Обрабатывает нажатие на пятую кнопку, осуществляя переход в достижения.
      */
    void on_pushButton_5_clicked();

private:
    Ui::menu *ui;///< интерфейс для меню
    levelA *A;///< интерфейс для уровня А
    levelB *B;///< интерфейс для уровня В
    levelC *C;///< интерфейс для уровня С
    TESTabc *tst;///< интерфейс для тестов
    achiv *ch;///< интерфейс для достижений
    User *ActiveUser;///< хранит пользователя
};
#endif // MENU_H
