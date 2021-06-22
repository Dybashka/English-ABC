#include "functions.h"
#include "QString"
#include "avtoriz.h"
#include "menu.h"
#include "QString"
#include <QMessageBox>

QString authorize(std::string login,std::string pass)
{
    QString result;
    if (login == "user" && pass == "123"){
        result = "authorization ok";
        return result;
    }
    else if (login == "user2" && pass == "124"){
        result = "authorization ok";
        return result;
    }
    else {
        result = "authorization error";
        return result;
    }
}
