#ifndef GSEIDEL_H
#define GSEIDEL_H

#include <QMainWindow>

namespace Ui {
class Gseidel;
}

class Gseidel : public QMainWindow
{
    Q_OBJECT

public:
    explicit Gseidel(QWidget *parent = 0);
    ~Gseidel();

private:
    Ui::Gseidel *ui;
    void metodo();//The functions slots for the program are declared
    void borrar();
};

#endif // GSEIDEL_H
