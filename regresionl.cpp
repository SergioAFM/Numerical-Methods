#include "regresionl.h"
#include "ui_regresionl.h"
#include <QString>
#include <cmath>

regresionL::regresionL(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::regresionL)
{
    ui->setupUi(this);
    connect(ui->Metodo,SIGNAL(clicked()),this,SLOT(Proceso()));
    connect(ui->Clean,SIGNAL(clicked()),this,SLOT(Borrar()));
}

regresionL::~regresionL()
{
    delete ui;
}

void regresionL::Proceso(){
    QString temp1, temp2, temp3, temp4;

    double Xi1=ui->Xi1->value();
    double Xi2=ui->Xi2->value();
    double Xi3=ui->Xi3->value();
    double Xi4=ui->Xi4->value();
    double Xi5=ui->Xi5->value();
    double Xi6=ui->Xi6->value();
    double Xi7=ui->Xi7->value();

    double Yi1=ui->Yi1->value();
    double Yi2=ui->Yi2->value();
    double Yi3=ui->Yi3->value();
    double Yi4=ui->Yi4->value();
    double Yi5=ui->Yi5->value();
    double Yi6=ui->Yi6->value();
    double Yi7=ui->Yi7->value();
    int n=7;

     double SXi=(Xi1+Xi2+Xi3+Xi4+Xi5+Xi6+Xi7); // Sum of the X
     double SYi=(Yi1+Yi2+Yi3+Yi4+Yi5+Yi6+Yi7); // Sum of the Y
     double SMXY=((Xi1*Yi1)+(Xi2*Yi2)+(Xi3*Yi3)+(Xi4*Yi4)+(Xi5*Yi5)+(Xi6*Yi6)+(Xi7*Yi7)); // Addition of multiplication X * Y
     double SXX=((Xi1*Xi1)+(Xi2*Xi2)+(Xi3*Xi3)+(Xi4*Xi4)+(Xi5*Xi5)+(Xi6*Xi6)+(Xi7*Xi7)); // Sum of the X squared
     double SYY=((Yi1*Yi1)+(Yi2*Yi2)+(Yi3*Yi3)+(Yi4*Yi4)+(Yi5*Yi5)+(Yi6*Yi6)+(Yi7*Yi7)); //Sum of the Y squared
     double PX=(SXi/n); //average of X
     double PY=(SYi/n); // average of Y
     double a1=(((n*SMXY)-(SXi*SYi))/((n*SXX)-(SXi*SXi))); //a1 it's the first part for the equation of Y
     double a0=((PY)-(a1*PX)); //a0 it's the second part of the equation of Y
     double r=(((n*SMXY)-(SXi*SYi))/((sqrt(n*(SXX)-(SXi*SXi)))*sqrt(n*SYY-(SYi*SYi)))); // r it's correlation of the points with the line

     temp1.append("Y=").append(temp2.setNum(a0)).append("+").append(temp3.setNum(a1)).append("X\nr=").append(temp4.setNum(r)); //Show results
     ui->Texto->setText(temp1);
}

void regresionL::Borrar(){
    ui->Xi1->setValue(0.0);
    ui->Xi2->setValue(0.0);
    ui->Xi3->setValue(0.0);
    ui->Xi4->setValue(0.0);
    ui->Xi5->setValue(0.0);
    ui->Xi6->setValue(0.0);
    ui->Xi7->setValue(0.0);

    ui->Yi1->setValue(0.0);
    ui->Yi2->setValue(0.0);
    ui->Yi3->setValue(0.0);
    ui->Yi4->setValue(0.0);
    ui->Yi5->setValue(0.0);
    ui->Yi6->setValue(0.0);
    ui->Yi7->setValue(0.0);

    ui->Texto->clear();
}
