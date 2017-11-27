#include "rk.h"
#include "ui_rk.h"
#include <qstring.h>
#include <cmath>

rk::rk(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::rk)
{
    ui->setupUi(this);
    connect(ui->Metodo,SIGNAL(clicked()),this,SLOT(metodo()));
    connect(ui->Borrar,SIGNAL(clicked()),this,SLOT(borrar()));
    connect(ui->Salir,SIGNAL(clicked()),this,SLOT(close()));
}

rk::~rk()
{
    delete ui;
}
double dxdy(double dx, double dy){
   return ((dx-dy)/2);
}
double rungeKutta(double x0, double y0, double dx, double h){
    int n = (int)((dx - x0) / h);
    double k1, k2, k3, k4;
    double dy = y0;
    for (int i=1; i<=n; i++){
        k1 = h*dxdy(x0, dy);
        k2 = h*dxdy(x0 + 0.5*h, dy + 0.5*k1);
        k3 = h*dxdy(x0 + 0.5*h, dy + 0.5*k2);
        k4 = h*dxdy(x0 + h, dy + k3);

        dy = dy + (1.0/6.0)*(k1 + 2*k2 + 2*k3 + k4);;

        x0 = x0 + h;
    }

    return dy;
}
void rk::metodo()
{
    QString temp,temp1;
    double dx=ui->x->value();
    double dy=ui->y->value();
    double h=ui->h->value();
    double x0=ui->X0->value();
    double y0;

    temp.append("El Valor de Y en X es: ").append(temp1.setNum(rungeKutta(x0, y0, dx, h)));
    ui->texto->setText(temp);
}
void rk::borrar(){
    ui->x->setValue(0.0);
    ui->y->setValue(0.0);
    ui->h->setValue(0.0);
    ui->texto->clear();
}

