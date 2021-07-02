#include "functions.h"
#include "database.h"

/* Функция проверки логина/пароля: на вход подаются переменные типа std::string log и pass, в которых
 * находятся данные, введенные пользователем,
если авторизация успешна, получаем сообщение: "authorization yes ", а если нет, то "authorization error " на выходе
*/
QString authorize(std::string login,std::string pass)
{
    QString  result;
    DataBase db;
    db.openDataBase();
    QString id = db.bdquery("select ID_user from user where ID_user = '" + QString::fromStdString(login) + "' AND pass = '" + QString::fromStdString(pass) +"'");
    if (id != "query error")
        result = id;
    else
        result = "authorization error";
    db.closeDataBase();
    return result;
}
