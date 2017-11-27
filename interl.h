#ifndef INTERL_H
#define INTERL_H

#include <QMainWindow>

namespace Ui {
class Interl;
}

class Interl : public QMainWindow
{
    Q_OBJECT

public:
    explicit Interl(QWidget *parent = 0);
    ~Interl();
    double a[4];
    double b[4];
    double y[4];

private:
    Ui::Interl *ui;
public slots:
    void metodo(); //Run the processes
    void limpiar(); //Clear all the variables
};

#endif // INTERL_H
