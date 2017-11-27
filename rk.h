#ifndef RK_H
#define RK_H

#include <QMainWindow>

namespace Ui {
class rk;
}

class rk : public QMainWindow
{
    Q_OBJECT

public:
    explicit rk(QWidget *parent = 0);
    ~rk();
    double P(double x);
    double Q(double y);
    double xi,yi,x,h,f1,f2;

private:
    Ui::rk *ui;
public slots:
    void metodo();
    void borrar();
};

#endif // RK_H
