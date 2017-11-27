#ifndef EGAUSS_H
#define EGAUSS_H

#include <QMainWindow>

namespace Ui {
class Egauss;
}

class Egauss : public QMainWindow
{
    Q_OBJECT

public:
    explicit Egauss(QWidget *parent = 0);
    ~Egauss();

private:
    Ui::Egauss *ui;
public slots:
    void metodo();
    void borrar();
};

#endif // EGAUSS_H
