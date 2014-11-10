#ifndef VENTANAINICIAL_H
#define VENTANAINICIAL_H

#include <QMainWindow>
#include "sqlite.h"

namespace Ui {
class VentanaInicial;
}

class VentanaInicial : public QMainWindow
{
    Q_OBJECT

public:
    explicit VentanaInicial(QWidget *parent = 0);
    ~VentanaInicial();

private:
    Ui::VentanaInicial *ui;
    QSqlDatabase db;
};

#endif // VENTANAINICIAL_H
