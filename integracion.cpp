#include "integracion.h"
#include "ui_integracion.h"
#include <cmath>
#include <QString>

Integracion::Integracion(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Integracion)
{
    ui->setupUi(this);
    connect(ui->Metodo,SIGNAL(clicked()),this,SLOT(metodo()));
    connect(ui->Borrar,SIGNAL(clicked()),this,SLOT(borrar()));
}

Integracion::~Integracion()
{
    delete ui;
}
void Integracion::metodo(){
    QString temp, temp1;
      double q[11];
      double h=ui->h->value();
      double integral=0;
      double integral1=0;
      double integral2=0;
      int r;
      q[0]=ui->FX5->value();
      q[1]=ui->FX1->value();
      q[2]=ui->FX2->value();
      q[3]=ui->FX3->value();
      q[4]=ui->FX4->value();
      q[5]=ui->FX->value();
      q[6]=ui->FX_1->value();
      q[7]=ui->FX_2->value();
      q[8]=ui->FX_3->value();
      q[9]=ui->FX_4->value();
      q[10]=ui->FX_5->value();

      integral1=(h/2)*q[0];
      integral2=(h/2)*q[10];

      for(r=1;r<10;r++){
          integral=integral+((h)*q[r]);
      }

      integral=integral+integral1+integral2;

      temp.append("Resultado de la integral:").append(temp1.setNum(integral));
      ui->Texto->setText(temp);

}

void Integracion::borrar(){
    ui->X->setValue(0.0);
    ui->X1->setValue(0.0);
    ui->X2->setValue(0.0);
    ui->X3->setValue(0.0);
    ui->X4->setValue(0.0);
    ui->X5->setValue(0.0);
    ui->X_1->setValue(0.0);
    ui->X_2->setValue(0.0);
    ui->X_3->setValue(0.0);
    ui->X_4->setValue(0.0);
    ui->X_5->setValue(0.0);
    ui->FX->setValue(0.0);
    ui->FX1->setValue(0.0);
    ui->FX2->setValue(0.0);
    ui->FX3->setValue(0.0);
    ui->FX4->setValue(0.0);
    ui->FX5->setValue(0.0);
    ui->FX_1->setValue(0.0);
    ui->FX_2->setValue(0.0);
    ui->FX_3->setValue(0.0);
    ui->FX_4->setValue(0.0);
    ui->FX_5->setValue(0.0);
    ui->h->setValue(0.0);
     ui->Texto->clear();
}
