#include "ventanainicial.h"
#include "ui_ventanainicial.h"
#include "qdebug.h"


VentanaInicial::VentanaInicial(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::VentanaInicial)
{
    ui->setupUi(this);
    this->setWindowFlags(Qt::Window|Qt::MSWindowsFixedSizeDialogHint);
    qDebug() << "Aplicacion iniciada";


}

VentanaInicial::~VentanaInicial()
{
    delete ui;
}
