#include "database.h"
#include <QSqlDatabase>
DataBase::DataBase(QObject *parent) : QObject(parent)
{
}

DataBase::~DataBase()
{
}

void DataBase::openDataBase()
{
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("C:\\ABS_SQL\\file.db");
    if (db.open())
    {
        qDebug()<<"db is open";
    }
    else
    {
        qDebug()<<"db not open";
        qDebug() << db.lastError().text();
    }

}

/* Методы закрытия базы данных
 * */
void DataBase::closeDataBase()
{
    db.close();
}

/*Функция запроса в БД*/
QString DataBase::bdquery(QString temp)
{

    QSqlQuery query(db);
    if( !query.exec(temp) )
    {
        qDebug() << query.lastError().text();
    }
    if (query.next())
    {
        qDebug() << query.value(0).toString();
        return query.value(0).toString();
    }
    else {
        return "query error";
    }
}
