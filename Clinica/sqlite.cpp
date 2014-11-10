#include "sqlite.h"
#include "qdebug.h"

sqlite::sqlite()
{
}
bool sqlite::conectar()
{
    if(QSqlDatabase::isDriverAvailable("QSQLITE"))
    {
        db = QSqlDatabase::addDatabase("QSQLITE");
        db.setDatabaseName(QDir::homePath() + QDir::separator() +"data2.sqlite");
        bool db_ok = db.open();
        return db_ok;
        QString caca = "esto es una mismisima m";
        qDebug() << "Caca no disponible";

    }
    else
        qDebug() << "Driver no disponible";
        return false;

}

void sqlite::consulta()
{


    this->conectar();
    if(db.isOpen())
    {
        QSqlQuery qry;
        qry.exec("CREATE TABLE IF NOT EXISTS Pacientes (id integer primary key autoincrement, nombre text, apellidos text, direccion text, telefono varchar[9], compania text, DNI varchar[9])");
        QString stmt;
        QTextStream txtstr(&stmt);
        txtstr << "INSERT INTO PACIENTES (nombre, apellidos, direccion, telefono, compania, DNI) values (\"" << "pepe" << ", " << "flores campos" << ", " << "Pino 14" << ", " << "953151418" << ", " << "cavosa" << ", " << "25262471l" <<"\")";
        if(qry.exec(stmt))


        txtstr << "SELECT * FROM PACIENTES";

        if(qry.exec(stmt))
        {
            while(qry.next())
            {
                qDebug() << "id:" << qry.value(0).toString();
                qDebug() << "nombre:" << qry.value(1).toString();
                qDebug() << "apellidos:" << qry.value(2).toString();
                qDebug() << "direccion:" << qry.value(3).toString();
                qDebug() << "telefono:" << qry.value(4).toString();
                qDebug() << "compañia:" << qry.value(5).toString();
                qDebug() << "dni:" << qry.value(6).toString();
            }
        }
    }
db.close();}


