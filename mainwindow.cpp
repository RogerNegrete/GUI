#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    // Obtener texto del lineEdit
    QString campoTexto = ui->textCampoDatos->toPlainText();
    QStringList camposSeparados = campoTexto.split("\n");

    // Asegurarse de que haya al menos un elemento
    if (camposSeparados.size() >= 1) {
        ui->textCedula->setText(camposSeparados[0]);
    }

    // Asegurarse de que haya al menos dos elementos
    if (camposSeparados.size() >= 2) {
        ui->textNames->setText(camposSeparados[1]);
    }
    // Asegurarse de que haya al menos dos elementos
    if (camposSeparados.size() >= 3) {
        ui->textLastname->setText(camposSeparados[2]);
    }
    if (camposSeparados.size() >= 4) {
        ui->textDireccion->setText(camposSeparados[3]);
    }
    if (camposSeparados.size() >= 5) {
        ui->textTelefono->setText(camposSeparados[4]);
    }
    if (camposSeparados.size() >= 6) {
        ui->textEmail->setText(camposSeparados[5]);
    }


    // Si quieres manejar el caso de que haya menos campos de los esperados, puedes hacer algo como esto:
    if (camposSeparados.size() <6) {
        // Mostrar un mensaje de error o manejarlo de alguna manera
        QMessageBox::critical(this, "Error", "Faltan datos. Por favor, complete todos los campos.");
    }
}
/*
void MainWindow::on_pushButton_clicked()
{
    Cliente cliente;
    // Obtener texto del lineEdit
    QString campoTexto = ui->textCampoDatos->toPlainText();
    QStringList camposSeparados = campoTexto.split("\n");


    // Asegurarse de que haya al menos un elemento
    if (camposSeparados.size() >= 1) {
        QString cedula = camposSeparados[0];
        // Validar cédula
        if (!nuevoCliente.validarCedula()) {
            // Mostrar un mensaje de error o manejar de alguna manera si la cédula no es válida
            return;
        }
        ui->textCedula->setText(cedula);
    }

    // Asegurarse de que haya al menos dos elementos
    if (camposSeparados.size() >= 2) {
        QString name = camposSeparados[1];
        ui->textNames->setText(name);
    }
    // Asegurarse de que haya al menos tres elementos
    if (camposSeparados.size() >= 3) {
        QString lastname = camposSeparados[2];
        ui->textLastname->setText(lastname);
    }
    if (camposSeparados.size() >= 4) {
        QString direccion = camposSeparados[3];
        ui->textDireccion->setText(direccion);
    }
    if (camposSeparados.size() >= 5) {
        QString telefono = camposSeparados[4];
        ui->textTelefono->setText(telefono);
    }
    if (camposSeparados.size() >= 6) {
        QString email = camposSeparados[5];
        ui->textEmail->setText(email);
    }


    // Si quieres manejar el caso de que haya menos campos de los esperados, puedes hacer algo como esto:
    if (camposSeparados.size() <6) {
        // Mostrar un mensaje de error o manejarlo de alguna manera
        QMessageBox::critical(this, "Error", "Faltan datos. Por favor, complete todos los campos.");
    }
}
*/


