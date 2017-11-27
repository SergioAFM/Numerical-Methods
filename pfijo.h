#ifndef PFIJO_H
#define PFIJO_H

#include <QMainWindow>

namespace Ui {
class Pfijo;
}

class Pfijo : public QMainWindow
{
    Q_OBJECT

public:
    explicit Pfijo(QWidget *parent = 0);
    ~Pfijo();
    double funcion(double c);

private:
    Ui::Pfijo *ui;
public slots:

    void metodo();
    void borrar();
};

#endif // PFIJO_H
