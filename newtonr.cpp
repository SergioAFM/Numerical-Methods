#include "newtonr.h"
#include "ui_newtonr.h"
#include <QString>
#include <cmath>

Newtonr::Newtonr(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Newtonr)
{
    ui->setupUi(this);
    connect(ui->Procesar,SIGNAL(clicked()),this,SLOT(metodo()));
    connect(ui->Borrar,SIGNAL(clicked()),this,SLOT(borrar()));
    connect(ui->Salir,SIGNAL(clicked()),this,SLOT(close()));
}

Newtonr::~Newtonr()
{
    delete ui;
}
double Newtonr::funcion(double x){
    return (x*x*x)+x+16;
}
double Newtonr::derivada(double x){
     return (3)*(x*x)+1;
}
void Newtonr::metodo(){
    QString temp,temp2,temp3;
    double x=ui->x->value();
    double err=ui->err->value();
    double in=ui->in->value();
    double eo=100.0;
    double xn=0.0, xa=0;
    int i=0;
    while (eo>err&&in>i){
        xa=xn-funcion(x)/derivada(x);
        eo=100*std::abs((xn-x)/xn);
        i++;
        xn=xa;
    }
temp.append("Raiz= ").append(temp2.setNum(xn)).append("\nError= ").append(temp3.setNum(eo));
ui->texto->setText(temp);
}
void Newtonr::borrar(){
  ui->x->setValue(0.0);
  ui->err->setValue(0.0);
  ui->texto->clear();
}
