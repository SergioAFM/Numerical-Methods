#ifndef REGRESIONL_H
#define REGRESIONL_H

#include <QMainWindow>

namespace Ui {
class regresionL;
}

class regresionL : public QMainWindow
{
    Q_OBJECT

public:
    explicit regresionL(QWidget *parent = 0);
    ~regresionL();

private:
    Ui::regresionL *ui;

public slots:
    void Proceso();
    void Borrar();
};

#endif // REGRESIONL_H
