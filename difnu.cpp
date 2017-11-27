#include "difnu.h"
#include "ui_difnu.h"
#include <cmath>
#include <QString>

DifNu::DifNu(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::DifNu)
{
    ui->setupUi(this);
    connect(ui->metodo,SIGNAL(clicked()),this,SLOT(metodo()));
    connect(ui->borrar,SIGNAL(clicked()),this,SLOT(borrar()));
}

DifNu::~DifNu()
{
    delete ui;
}
double DifNu::funcion(double v){  //ecuation
    return((-0.1*pow(v,4))-(0.15*pow(v,3))-(0.5*pow(v,2))-((0.25*v)+1.2));
}
double DifNu::funcion1(double v){ //first derivate
    return (-(0.4*pow(v,3))-(0.45*pow(v,2))-(v)-(0.25));

}
double DifNu::funcion2(double v){ //second derivate
    return (-(1.2*pow(v,2))-(0.9*v)-(1));

}
double DifNu::funcion3(double v){ //third derivate
    return (-(2.4*v)-(0.9));

}
double DifNu::funcion4(double v){ //fourth derivate
    return (-2.4);

}

void DifNu::metodo(){
    QString temp,temp2,temp3,temp4,temp5,temp6,temp7,temp8,temp9,temp10,temp11,temp12,temp13,temp14,temp15,temp16,temp17,temp18,temp19,temp20,temp21,temp22,temp23,temp24,temp25;//text

    double x_5=ui->X_5->value();
    double x_4=ui->X_4->value();
    double x_3=ui->X_3->value();
    double x_2=ui->X_2->value();
    double x_1=ui->X_1->value();
    double f_5=ui->F_5->value();
    double f_4=ui->F_4->value();
    double f_3=ui->F_3->value();
    double f_2=ui->F_2->value();
    double f_1=ui->F_1->value();
    double xi=ui->XI->value();
    double x1=ui->X1->value();
    double x2=ui->X2->value();
    double x3=ui->X3->value();
    double x4=ui->X4->value();
    double x5=ui->X5->value();
    double fi=ui->FI->value();
    double f1=ui->F1->value();
    double f2=ui->F2->value();
    double f3=ui->F3->value();
    double f4=ui->F4->value();
    double f5=ui->F5->value();
    double h=ui->h->value();
    double Fa1,Fa2,Fa3,Fa4;      //function variables evaluated backwards
    double Fc1,Fc2,Fc3,Fc4;      // central evaluated function variables
    double Fad1,Fad2,Fad3,Fad4;  //function variables evaluated forward
    double Eat1,Eat2,Eat3,Eat4;  // backward error variables
    double Ec1,Ec2,Ec3,Ec4;      //central error variables
    double Ead1,Ead2,Ead3,Ead4;  //forward error variables
    double X=0;                  //derivative variables
    double X2=0;
    double X3=0;
    double X4=0;

X= (funcion1(xi));  //evaluation of derivatives in xi
X2= (funcion2(xi));
X3= (funcion3(xi));
X4= (funcion4(xi));

Fa1=((3*fi)-(4*f_1)+(f_2))/(2*h);  //first derivative
Eat1=100*std::abs((Fa1-X)/Fa1);
Fc1=((-f2)+(8*(f1))-(8*(f_1))+(f_2))/(12*h);
Ec1=100*std::abs((X-Fc1)/X);
Fad1=((-f2)+(4*(f1))-(3*(fi)))/(2*h);
Ead1=100*std::abs(( X-Fad1)/X);

Fa2=((2*fi)-(5*f_1)+(4*f_2)-(f_3))/(h*h);  //second derivative
Eat2=100*std::abs((Fa2-X2)/Fa2);
Fc2=((-f2)+(16*(f1))-(30*fi)+(16*f_1)-(f_2))/(12*(h*h));
Ec2=100*std::abs((X2-Fc2)/X2);
Fad2=((-f3)+(4*f2)-(5*f1)+(2*fi))/(h*h);
Ead2=100*std::abs((X2-Fad2)/X2);

Fa3=((5*fi)-(18*f_1)+(24*f_2)-(14*f_3)+(3*f_4))/(2*(h*h*h)); //third derivative
Eat3=100*std::abs((Fa3-X3)/Fa3);
Fc3=((-f3)+(8*f2)-(13*f1)+(13*f_1)-(8*f_2)+(f_3))/(8*(h*h*h));
Ec3=100*std::abs((X3-Fc3)/X3);
Fad3=((-3*f3)+(14*f3)-(24*f2)+(18*f1)-(5*fi)/(2*(h*h*h)));
Ead3=100*std::abs((X3-Fad3)/X3);

Fa4=((3*fi)-(14*f_1)+(26*f_2)-(24*f_3)+(11*f_4)-(2*f_5))/(h*h*h*h); //fourth derivative
Eat4=100*std::abs((Fa4-X4)/Fa4);
Fc4=((-f3)+(12*f2)+(39*f1)+(56*fi)-(39*f_1)+(12*f_2)+(f_3))/(6*(h*h*h*h));
Ec4=100*std::abs((X4-Fc4)/X4);
Fad4=((-2*f5)+(11*f4)-(24*f3)+(26*f2)-(14*f1)+(3*fi))/(h*h*h*h);
Ead4=100*std::abs((X4-Fad4)/X4);

temp
    .append("\nPrimera derivada:\n")
    .append("\na) Derivada trasera\n\n")
    .append("f(x)'=").append(temp2.setNum(Fa1)).append("\t\nError=").append(temp3.setNum(Eat1))
    .append("\nb) Derivada centrada\n\n")
    .append("f(x)'=").append(temp4.setNum(Fc1)).append("\t\nError=").append(temp5.setNum(Ec1))
    .append("\nc) Derivada delantera\n\n")
    .append("f(x)'=").append(temp6.setNum(Fad1)).append("\t\nError=").append(temp7.setNum(Ead1))

    .append("\n\nSegunda derivada:\n")
    .append("\na) Derivada trasera\n")
    .append("f(x)''=").append(temp8.setNum(Fa2)).append("\t\nError=").append(temp9.setNum(Eat2))
    .append("\nb) Derivada centrada\n\n")
    .append("f(x)''=").append(temp10.setNum(Fc2)).append("\t\nError=").append(temp11.setNum(Ec2))
    .append("\nc) Derivada delantera\n\n")
    .append("f(x)''=").append(temp12.setNum(Fad2)).append("\t\nError=").append(temp13.setNum(Ead2))

    .append("\n\nTercera derivada:\n")
    .append("\na) Derivada trasera\n\n")
    .append("f(x)'''=").append(temp14.setNum(Fa3)).append("\t\nError=").append(temp15.setNum(Eat3))
    .append("\nb) Derivada centrada\n\n")
    .append("f(x)'''=").append(temp16.setNum(Fc3)).append("\t\nError=").append(temp17.setNum(Ec3))
    .append("\nc) Derivada delantera\n\n")
    .append("f(x)'''=").append(temp18.setNum(Fad3)).append("\t\nError=").append(temp19.setNum(Ead3))

    .append("\n\nCuarta derivada:\n")
    .append("\na) Derivada trasera\n\n")
    .append("f(x)''''=").append(temp20.setNum(Fa4)).append("\t\nError=").append(temp21.setNum(Eat4))
    .append("\nb) Derivada centrada\n\n")
    .append("f(x)''''=").append(temp22.setNum(Fc4)).append("\t\nError=").append(temp23.setNum(Ec4))
    .append("\nc) Derivada delantera\n\n")
    .append("f(x)''''=").append(temp24.setNum(Fad4)).append("\t\nError=").append(temp25.setNum(Ead4));

ui->Texto->setText(temp);
}

void DifNu::borrar(){
    ui->X_5->setValue(0.0);   //spinbox's is deleted
    ui->X_4->setValue(0.0);
    ui->X_3->setValue(0.0);
    ui->X_2->setValue(0.0);
    ui->X_1->setValue(0.0);
    ui->XI->setValue(0.0);
    ui->X1->setValue(0.0);
    ui->X2->setValue(0.0);
    ui->X3->setValue(0.0);
    ui->X4->setValue(0.0);
    ui->X5->setValue(0.0);
    ui->F_5->setValue(0.0);
    ui->F_4->setValue(0.0);
    ui->F_3->setValue(0.0);
    ui->F_2->setValue(0.0);
    ui->F_1->setValue(0.0);
    ui->FI->setValue(0.0);
    ui->F1->setValue(0.0);
    ui->F2->setValue(0.0);
    ui->F3->setValue(0.0);
    ui->F4->setValue(0.0);
    ui->F5->setValue(0.0);
    ui->h->setValue(0.0);
    ui->Texto->clear();       //Text is deleted
}
