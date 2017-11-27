#ifndef DIFNU_H
#define DIFNU_H

#include <QMainWindow>

namespace Ui {
class DifNu;
}

class DifNu : public QMainWindow
{
    Q_OBJECT

public:
    explicit DifNu(QWidget *parent = 0);
    ~DifNu();
    double funcion(double v);
    double funcion1(double v);
    double funcion2(double v);
    double funcion3(double v);
    double funcion4(double v);

private:
    Ui::DifNu *ui;

public slots:
    void metodo();//Slot that carries out the numerical method of fixed point
    void borrar(); //Slot that erases the contents of the spinbox and textp
};

#endif // DIFNU_H
