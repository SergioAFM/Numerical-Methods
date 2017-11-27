#ifndef NEWTONR_H
#define NEWTONR_H

#include <QMainWindow>

namespace Ui {
class Newtonr;
}

class Newtonr : public QMainWindow
{
    Q_OBJECT

public:
    explicit Newtonr(QWidget *parent = 0);
    ~Newtonr();
    double funcion(double x);
    double derivada(double x);

private:
    Ui::Newtonr *ui;
public slots:
    void metodo();
    void borrar();
};

#endif // NEWTONR_H
