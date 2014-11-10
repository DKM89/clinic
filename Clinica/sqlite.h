#ifndef SQLITE_H
#define SQLITE_H
#include <QtSql>
class sqlite
{
public:
    sqlite();
    bool conectar();
    void consulta();
    QSqlDatabase db;
};

#endif // SQLITE_H
