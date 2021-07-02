#ifndef TESTABC_H
#define TESTABC_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class TESTabc; }
QT_END_NAMESPACE
/*!
 *  \brief Класс тесты
 *  \authors Мошникова Виктория
 *
 *   Данный класс предоставляет интерфейс тестов и обрабатывает нажатия на кнопки.
*/
class TESTabc : public QWidget
{
    Q_OBJECT

public:
    TESTabc(QWidget *parent = nullptr);
    ~TESTabc();

private slots:
    /*!
      * Обрабатывает нажатие на первую кнопку, осуществляя проверку ответов, занесённых в поля ответов пользователем.
      */
    void on_pushButton_clicked();
    /*!
      * Обрабатывает нажатие на вторую кнопку, осуществляя переход в меню.
      */
    void on_pushButton_2_clicked();

private:
    Ui::TESTabc *ui;///< интерфейс тестов
};
#endif // TESTABC_H
