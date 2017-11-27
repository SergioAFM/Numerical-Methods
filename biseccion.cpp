#include "biseccion.h"
#include "ui_biseccion.h"
#include <QString>
#include <cmath>

Biseccion::Biseccion(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Biseccion)
{
    ui->setupUi(this);
    connect(ui->Procesar,SIGNAL(clicked()),this,SLOT(metodo()));
    connect(ui->Borrar,SIGNAL(clicked()),this,SLOT(borrar()));
    connect(ui->Salir,SIGNAL(clicked()),this,SLOT(close()));
}

Biseccion::~Biseccion()
{
    delete ui;
}
double Biseccion::funcion(double c){
    return (667.38/c)*(1-exp(-0.146843*c))-40; //devuelve la función de arrastre
}
void Biseccion::metodo(){
    QString temp,temp2,temp3;
    double x1=ui->X1->value();
    double x2=ui->X2->value();
    double err=ui->Err->value();
    double xr=0.0;
    double ea=100.0;
    while(ea>err){
        xr=(x1+x2)/2;
        ea=100*std::abs(xr-x2)/xr;
        if(funcion(x1)*funcion(xr)<0)
            x2=xr;
        if(funcion(x1)*funcion(xr)>0)
            x1=xr;
    }
    temp.append("Raiz=").append(temp2.setNum(xr)).append("\nError=").append(temp3.setNum(ea));  //Se prepara el texto para ser presentado
    ui->Texto->setText(temp);
}
void Biseccion::borrar(){
    ui->X1->setValue(0.0);
    ui->X2->setValue(0.0);
    ui->Err->setValue(0.0);
    ui->Texto->clear();
}
