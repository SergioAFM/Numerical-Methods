#include "pfijo.h"
#include "ui_pfijo.h"
#include <QString>
#include <cmath>

Pfijo::Pfijo(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Pfijo)
{
    ui->setupUi(this);
    connect(ui->Metodo,SIGNAL(clicked()),this,SLOT(metodo()));
    connect(ui->Borrar,SIGNAL(clicked()),this,SLOT(borrar()));
}

Pfijo::~Pfijo()
{
    delete ui;
}
double Pfijo::funcion(double c){
    return (667.38/c)*(1-exp(-0.146843*c))-40;

}
void Pfijo::metodo(){
    QString temp,temp2,temp3;
    double X1=ui->x->value();
    double error=ui->Error->value();
    double xr=0.0;
    double ea=100.0;
    while(ea>error){
        xr=funcion(X1);
        ea=100*std::abs(xr-X1)/xr;
        X1=xr;
    }
    temp.append("Raiz=").append(temp2.setNum(xr)).append("\nError=").append(temp3.setNum(ea));  // The text to be presented
    ui->Texto->setText(temp);
}
void Pfijo::borrar(){
    ui->x->setValue(0.0);
    ui->Error->setValue(0.0);
    ui->Texto->clear();
}
