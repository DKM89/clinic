#ifndef VENTANAPACIENTES_H
#define VENTANAPACIENTES_H

#include <QDialog>

namespace Ui {
class ventanapacientes;
}

class ventanapacientes : public QDialog
{
    Q_OBJECT

public:
    explicit ventanapacientes(QWidget *parent = 0);
    ~ventanapacientes();

private:
    Ui::ventanapacientes *ui;
};

#endif // VENTANAPACIENTES_H
