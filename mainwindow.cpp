#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QIcon icon1(":/imagenes/files_folder_256.png");//Creamos un objeto icono con la imagen
    ui->boton2->setIcon(icon1);//llamamos el metodo setIcon y le pasamos el icono que creamos.

    miTimer=new QTimer(this);//inicializo el QTimer con un objeto
    contador=0;//inicializo el entero contador con el valor 0
    connect(miTimer,SIGNAL(timeout()),this,SLOT(miSegundoSlot()));//Se estable la conexion.
    miTimer->start(1000);//se inicializa la cuenta con 1000 milisegundo = 1 segundo


    connect(ui->actionVer_Informacion,SIGNAL(triggered(bool)),this,SLOT(miPrimerSlot()));
    QStringList Titulos;//Creo una lista con los titulos
    Titulos<<"Nombre"<<"Telefono"<<"Correo"<<"Edad";//Agrego los titulos
    ui->tableWidget->setHorizontalHeaderLabels(Titulos);//Lleno los titulos en la tabla

    int numeroFilas= ui->tableWidget->rowCount();//Tomo el numero de Fila que en este caso es 0
    ui->tableWidget->insertRow(numeroFilas);//Agrego una fila

    miUsuario = new Usuario[10];

    miUsuario[0].setNombre("Juan Carlos");
    miUsuario[0].setTelefono("3106891745");
    miUsuario[0].setCorreo("juanc@udea.edu.co");
    miUsuario[0].setEdad("25");

    ui->tableWidget->setItem(0,0,new QTableWidgetItem(miUsuario[0].getNombre()));
    ui->tableWidget->setItem(0,1,new QTableWidgetItem(miUsuario[0].getTelefono()));
    ui->tableWidget->setItem(0,2,new QTableWidgetItem(miUsuario[0].getCorreo()));
    ui->tableWidget->setItem(0,3,new QTableWidgetItem(miUsuario[0].getEdad()));




}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::miPrimerSlot()
{
    ui->tabWidget->setCurrentIndex(1);
}

void MainWindow::miSegundoSlot()
{
    contador++;//Incrementa el contador
    QString texto="La cuenta va en: "+QString::number(contador);
    //Creo el mensaje
    ui->label->setText(texto);//Escribo el mensaje en el label
}


