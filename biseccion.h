#ifndef BISECCION_H
#define BISECCION_H

#include <QMainWindow>

namespace Ui {
class Biseccion;
}

class Biseccion : public QMainWindow
{
    Q_OBJECT

public:
    explicit Biseccion(QWidget *parent = 0);
    ~Biseccion();
    double funcion(double c);

private:
    Ui::Biseccion *ui;
public slots:
    void metodo();
    void borrar();
};

#endif // BISECCION_H
