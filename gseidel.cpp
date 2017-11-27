#include "gseidel.h"
#include "ui_gseidel.h"
#include <QString>
#include <cmath>

Gseidel::Gseidel(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Gseidel)
{
    ui->setupUi(this);
    connect(ui->procesar,SIGNAL(clicked()),this,SLOT(metodo())); //Connections slots-buttons
    connect(ui->borrar,SIGNAL(clicked()),this,SLOT(borrar()));
    connect(ui->salir,SIGNAL(clicked()),this,SLOT(close()));
}

Gseidel::~Gseidel()
{
    delete ui;
}
void Gseidel::metodo(){
QString temp,temp2,temp3,temp4,temp5, temp6; //Text variables that will show the results
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
    int Error=ui->error->value();
    double x1,x2,x3,x4; //Variables are created
    double xa1=0,xa2=0,xa3=0,xa4=0;
    double ex1=100,ex2=100,ex3=100,ex4=100;
    double iter=0;
    while((ex1>Error)||(ex2>Error)||(ex3>Error)||(ex4>Error)&&(iter<1000)){  // Conditions for the method to be executed
        x1=(a-(b1*x2)-(c1*x3)-(d1*x4))/a1;
        x2=(b-(a2*x1)-(c2*x3)-(d2*x4))/b2;
        x3=(c-(a3*x1)-(b3*x2)-(d3*x4))/c3;
        x4=(d-(a4*x1)-(b4*x2)-(c4*x3))/d4;

        ex1=abs(((x1-xa1)/x1)*100);
        ex2=abs(((x2-xa2)/x2)*100);
        ex3=abs(((x3-xa3)/x3)*100);
        ex4=abs(((x4-xa4)/x4)*100);

        xa1=x1;
        xa2=x2;
        xa3=x3;
        xa4=x4;

        iter++;


    }
    temp.append("X1=").append(temp2.setNum(x1)).append("\nX2=").append(temp3.setNum(x2)).append("\nX3=").append(temp4.setNum(x3)).append("\nX4=").append(temp5.setNum(x4)).append("\nIteracciones=").append(temp6.setNum(iter));
    ui->texto->setText(temp); //Variables of text are used to show the result in the text box
}
void Gseidel::borrar(){
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
    ui->error->setValue(0.0);
    ui->texto->clear();
}
