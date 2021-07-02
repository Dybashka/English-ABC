#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "avtoriz.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE
/*!
 *  \brief Класс главного окна
 *  \authors Балашова Дарья
 *
 *   Данный класс предоставляет интерфейс главного окна и обрабатывает нажатия на кнопки.
*/
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    /*!
      * Обрабатывает нажатие кнопку, осуществляя переход в авторизацию.
      */
    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;///< интерфейс главного окна
    Avtoriz *avt;///< интерфейс авторизации
};
#endif // MAINWINDOW_H
