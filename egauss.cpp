#include "egauss.h"
#include "ui_egauss.h"
#include <QString>
#include <cmath>

Egauss::Egauss(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Egauss)
{
    ui->setupUi(this);
    connect(ui->procesar,SIGNAL(clicked()),this,SLOT(metodo()));
    connect(ui->borrar,SIGNAL(clicked()),this,SLOT(borrar()));
    connect(ui->salir,SIGNAL(clicked()),this,SLOT(close()));
}

Egauss::~Egauss()
{
    delete ui;
}
void Egauss::metodo(){
QString temp,temp2,temp3,temp4,temp5; //Text variables that will show the results
   double a1=ui->a1->value(); //Read the spinboxes' value
   double a2=ui->a2->value();
   double a3=ui->a3->value();
   double a4=ui->a4->value();
   double b1=ui->b1->value();
   double b2=ui->b2->value();
   double b3=ui->b3->value();
   double b4=ui->b4->value();
   double c1=ui->c1->value();
   double c2=ui->c2->value();
   double c3=ui->c3->value();
   double c4=ui->c4->value();
   double d1=ui->d1->value();
   double d2=ui->d2->value();
   double d3=ui->d3->value();
   double d4=ui->d4->value();
   double a=ui->a->value();
   double b=ui->b->value();
   double c=ui->c->value();
   double d=ui->d->value();
   double x1,x2,x3,x4; //Variables are created
   {
       a1=a1/a1;
       b1=b1/a1;
       c1=c1/a1;
       d1=d1/a1;
       a=a/a1;
       a2=((-a2)*(a1))+a2;
       b2=((-a2)*(b1))+b2;
       c2=((-a2)*(c1))+c2;
       d2=((-a2)*(d1))+d2;
       b=((-a2)*(a))+b;
       b2=b2/b2;
       c2=c2/b2;
       d2=d2/b2;
       b=b/b2;
       a3=((-a3)*(a1))+a3;
       b3=((-a3)*(b1))+b3;
       c3=((-a3)*(c1))+c3;
       d3=((-a3)*(d1))+d3;
       c=((-a3)*(a))+c;
       b3=((-b3)*(b2))+b3;
       c3=((-b3)*(c2))+c3;
       d3=((-b3)*(d2))+d3;
       c=((-b3)*(b))+c;
       c3=c3/c3;
       d3=d3/c3;
       c=c/c3;
       a4=((-a4)*(a1))+a4;
       b4=((-a4)*(b1))+b4;
       c4=((-a4)*(c1))+c4;
       d4=((-a4)*(d1))+d4;
       d=((-a4)*(a))+d;
       b4=((-b4)*(b2))+b4;
       c4=((-b4)*(c2))+c4;
       d4=((-b4)*(d2))+d4;
       d=((-b4)*(b))+d;
       c4=((-c4)*(c3))+c4;
       d4=((-c4)*(d3))+d4;
       d=((-c4)*(c))+d;
       d=d/d4;
       d4=d4/d4;
       x4=d;//The equations are solved
       x3=c-(d3*x4);
       x2=b-(x3*c2)-(x4*d2);
       x1=a-(x4*d1)-(x3*c1)-(x2*b1);
   }
   temp.append("X1=").append(temp2.setNum(x1)).append("\nX2=").append(temp3.setNum(x2)).append("\nX3=").append(temp4.setNum(x3)).append("\nX4=").append(temp5.setNum(x4));
   ui->texto->setText(temp); //Variables of text are used to show the result in the text box
}
void Egauss::borrar(){
   ui->a1->setValue(0.0);//The spinboxes and text box are cleared
   ui->a2->setValue(0.0);
   ui->a3->setValue(0.0);
   ui->a4->setValue(0.0);
   ui->b1->setValue(0.0);
   ui->b2->setValue(0.0);
   ui->b3->setValue(0.0);
   ui->b4->setValue(0.0);
   ui->c1->setValue(0.0);
   ui->c2->setValue(0.0);
   ui->c3->setValue(0.0);
   ui->c4->setValue(0.0);
   ui->d1->setValue(0.0);
   ui->d2->setValue(0.0);
   ui->d3->setValue(0.0);
   ui->d4->setValue(0.0);
   ui->a->setValue(0.0);
   ui->b->setValue(0.0);
   ui->c->setValue(0.0);
   ui->d->setValue(0.0);
   ui->texto->clear();
}
