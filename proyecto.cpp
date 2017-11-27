#include "proyecto.h"
#include "ui_proyecto.h"


Proyecto::Proyecto(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Proyecto)
{
    ui->setupUi(this);
    BiSec = new Biseccion();
    DN = new DifNu();
    PF = new Pfijo();
    integra = new Integracion();
    NR = new Newtonr();
    EliGau = new Egauss();
    GaSe = new Gseidel();
    IDL = new Interl();
    RL = new regresionL();
    RM = new RMultiple();
    Eu = new Euler();
    RuKu = new rk();

    connect(ui->bisec,SIGNAL(clicked()),this,SLOT(bisec()));
    connect(ui->puntof,SIGNAL(clicked()),this,SLOT(puntof()));
    connect(ui->difen,SIGNAL(clicked()),this,SLOT(difen()));
    connect(ui->inte,SIGNAL(clicked()),this,SLOT(inte()));
    connect(ui->newrap,SIGNAL(clicked()),this,SLOT(newrap()));
    connect(ui->elga,SIGNAL(clicked()),this,SLOT(elga()));
    connect(ui->gausei,SIGNAL(clicked()),this,SLOT(gausei()));
    connect(ui->interl,SIGNAL(clicked()),this,SLOT(interl()));
    connect(ui->regrel,SIGNAL(clicked()),this,SLOT(regrel()));
    connect(ui->regrem,SIGNAL(clicked()),this,SLOT(regrem()));
    connect(ui->eul,SIGNAL(clicked()),this,SLOT(eul()));
    connect(ui->ruku,SIGNAL(clicked()),this,SLOT(ruku()));
    connect(ui->Salir,SIGNAL(clicked()),this,SLOT(close()));
}


Proyecto::~Proyecto()
{
    delete ui;
}

void Proyecto::bisec(){
    BiSec->show();
}
void Proyecto::puntof(){
    PF->show();
}
void Proyecto::difen(){
    DN->show();
}
void Proyecto::inte(){
    integra->show();
}
void Proyecto::newrap(){
    NR->show();
}
void Proyecto::elga(){
    EliGau->show();
}
void Proyecto::gausei(){
    GaSe->show();
}
void Proyecto::interl(){
    IDL->show();
}
void Proyecto::regrel(){
    RL->show();
}
void Proyecto::regrem(){
    RM->show();
}
void Proyecto::eul()
{
    Eu->show();
}
void Proyecto::ruku(){
    RuKu->show();
}

void Proyecto::Salir(){
    delete BiSec;
    delete PF;
    delete DN;
    delete integra;
    delete NR;
    delete EliGau;
    delete GaSe;
    delete IDL;
    delete RL;
    delete RM;
    delete Eu;
    delete RuKu;
    close();
}
