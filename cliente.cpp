#include "cliente.h"

Cliente::Cliente()
{

}

string Cliente::getCedula() const
{
    return cedula;
}

void Cliente::setCedula(string newCedula)
{
    cedula = newCedula;
}

string Cliente::getName() const
{
    return name;
}

void Cliente::setName(const string &newName)
{
    name = newName;
}

string Cliente::getLastName() const
{
    return lastName;
}

void Cliente::setLastName(const string &newLastName)
{
    lastName = newLastName;
}

string Cliente::getDireccion() const
{
    return direccion;
}

void Cliente::setDireccion(const string &newDireccion)
{
    direccion = newDireccion;
}

string Cliente::getTelefono() const
{
    return telefono;
}

void Cliente::setTelefono(string newTelefono)
{
    telefono = newTelefono;
}

string Cliente::getEmail() const
{
    return email;
}

void Cliente::setEmail(const string &newEmail)
{
    email = newEmail;
}
/*
bool Cliente::validarCedula() {
    // Verificar que la cédula tenga 10 dígitos
    if (cedula.length() != 10) {
        return false;
    }

    // Algoritmo de Luhn para validación
    int suma = 0;
    for (int i = 0; i < 9; i++) {
        int digito = cedula[i].digitValue();
        if (i % 2 == 0) {
            digito *= 2;
            if (digito > 9) {
                digito -= 9;
            }
        }
        suma += digito;
    }

    int decenaSuperior = (suma % 10 == 0) ? suma : ((suma / 10) + 1) * 10;
    return (decenaSuperior - suma) % 10 == cedula[9].digitValue();
}*/
