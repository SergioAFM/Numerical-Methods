#ifndef PROYECTO_H
#define PROYECTO_H

#include <QMainWindow>
#include "biseccion.h"
#include "pfijo.h"
#include "newtonr.h"
#include "egauss.h"
#include "gseidel.h"
#include "interl.h"
#include "regresionl.h"
#include "rmultiple.h"
#include "difnu.h"
#include "integracion.h"
#include "euler.h"
#include "rk.h"

namespace Ui {
class Proyecto;
}

class Proyecto : public QMainWindow
{
    Q_OBJECT

public:
    explicit Proyecto(QWidget *parent = 0);
    ~Proyecto();
    Biseccion *BiSec;
    DifNu *DN;
    Pfijo *PF;
    Integracion *integra;
    Newtonr *NR;
    Egauss *EliGau;
    Gseidel *GaSe;
    Interl *IDL;
    regresionL *RL;
    RMultiple *RM;
    Euler *Eu;
    rk *RuKu;

private:
    Ui::Proyecto *ui;

public slots:
    void bisec();
    void difen();
    void puntof();
    void inte();
    void newrap();
    void elga();
    void gausei();
    void interl();
    void regrel();
    void regrem();
    void eul();
    void ruku();
    void Salir();
};

#endif // PROYECTO_H
