#include "database.h"

DataBase::DataBase(QObject *parent) : QObject(parent)
{
}

DataBase::~DataBase()
{
}
void DataBase::openDataBase()
{
    /* База данных открывается по заданному пути
     * и имени базы данных, если она существует
     * */
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("C:/ABC_SQL/"  DATABASE_NAME);
    if (db.open()) {qDebug()<<"db is open";} else {qDebug()<<"db not open";}
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
    query.exec(temp);
    query.next();
    if (query.value(0).toString().length() > 0)
    {
        return "query done";
    }
    else {
        return "query error";
    }
}






/* Методы для подключения к базе данных

void DataBase::connectToDataBase()
{
    /* Перед подключением к базе данных производим проверку на её существование.
     * В зависимости от результата производим открытие базы данных или её восстановление

    if(!QFile("C:/example/" DATABASE_NAME).exists()){
        this->restoreDataBase();
    } else {
        this->openDataBase();
    }
}

/* Методы восстановления базы данных

bool DataBase::restoreDataBase()
{
    if(this->openDataBase()){
        if(!this->createTable()){
            return false;
        } else {
            return true;
        }
    } else {
        qDebug() << "Не удалось восстановить базу данных";
        return false;
    }
    return false;
}

/* Метод для открытия базы данных

bool DataBase::openDataBase()
{

     db=QSqlDatabase::addDatabase("QMYSQL");
     db->setHostName("localhost");
     db->setDatabaseName("С:/Qt/Test.db");
     db->setUserName("root");
     db->setPassword("password");
     db->open();
    }
}

/* Методы закрытия базы данных

void DataBase::closeDataBase()
{
    db.close();
}

/* Метод для вставки записи в базу данных

bool DataBase::inserIntoTable(const QVariantList &data)
{
    /* Запрос SQL формируется из QVariantList,
     * в который передаются данные для вставки в таблицу.

    QSqlQuery query;
    /* В начале SQL запрос формируется с ключами,
     * которые потом связываются методом bindValue
     * для подстановки данных из QVariantList

    query.prepare("INSERT INTO " TABLE " ( " TABLE_DATE ", "
                                             TABLE_TIME ", "
                                             TABLE_RANDOM ", "
                                             TABLE_MESSAGE " ) "
                  "VALUES (:Date, :Time, :Random, :Message )");
    query.bindValue(":Date",        data[0].toDate());
    query.bindValue(":Time",        data[1].toTime());
    query.bindValue(":Random",      data[2].toInt());
    query.bindValue(":Message",     data[3].toString());
    // После чего выполняется запросом методом exec()
    if(!query.exec()){
        qDebug() << "error insert into " << TABLE;
        qDebug() << query.lastError().text();
        return false;
    } else {
        return true;
    }
    return false;
}
*/
