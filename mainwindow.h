#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "usuario.h"
#include <QTimer>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void miPrimerSlot();
    void miSegundoSlot();

private:
    Ui::MainWindow *ui;
    Usuario *miUsuario;
    QTimer *miTimer;
    int contador;

};

#endif // MAINWINDOW_H
