#include "user.h"
#include "QString"

User::User(QString login)
{
    Login = &login;
}

QString User::login()
{
    return *Login;
}
