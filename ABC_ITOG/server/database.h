#ifndef DATABASE_H
#define DATABASE_H

#include <QObject>
#include <QSql>
#include <QSqlQuery>
#include <QSqlError>
#include <QSqlDatabase>
#include <QFile>
#include <QDate>
#include <QDebug>

//Директивы имен таблицы, полей таблицы и базы данных */
#define DATABASE_HOSTNAME   "file"
#define DATABASE_NAME       "file.db"
#define TABLE               "user"

/*!
 *  \brief Класс работы с базой данных
 *  \authors Балашова Дарья
 *
 *   Данный класс позволяет взаимодействовать с базой данных, а именно подключаться обрабатывать запросы и отключаться.
*/
class DataBase : public QObject
{
    Q_OBJECT
public:
    explicit DataBase(QObject *parent = 0);
    ~DataBase();


private:
    QSqlDatabase    db;///<объект базы данных, с которым будет производиться работа

public:
    /*!
      * База данных открывается по заданному пути
     * и имени базы данных, если она существует.
      */
    void openDataBase();
    /*!
      * Методы закрытия базы данных.
      */
    void closeDataBase();
    /*!
      * Обрабатывает запрос к БД.
      * \param temp Запрос к БД
      * \return Результат запроса к БД
      */
    QString bdquery(QString temp);
};

#endif // DATABASE_H
