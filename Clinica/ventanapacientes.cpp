#include "ventanapacientes.h"
#include "ui_ventanapacientes.h"

ventanapacientes::ventanapacientes(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ventanapacientes)
{
    ui->setupUi(this);
}

ventanapacientes::~ventanapacientes()
{
    delete ui;
}
