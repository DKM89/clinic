#include "ventanainicial.h"
#include "sqlite.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);


    VentanaInicial w;
    w.show();

    return a.exec();
}
