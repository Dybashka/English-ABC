#ifndef USER_H
#define USER_H

#include "QString"

QT_BEGIN_NAMESPACE
namespace user { class User; }
QT_END_NAMESPACE
/*!
 *  \brief Класс пользователь
 *  \authors Балашова Дарья
 *
 *   Данный класс отвечает за сохранение логина пользователя для дальнейшей его передачи.
*/
class User
{
public:
    User(QString login);
    User() {};
    ~User() {};
    QString login();
private:
    QString *Login;///< логин пользователя
};

#endif // USER_H
