#include "usuario.h"

Usuario::Usuario()
{

}

QString Usuario::getNombre()
{
    return nombre;
}

QString Usuario::getTelefono()
{
    return telefono;
}

QString Usuario::getCorreo()
{
    return correo;
}

QString Usuario::getEdad()
{
    return edad;
}

void Usuario::setNombre(QString _Nombre)
{
    nombre=_Nombre;
}

void Usuario::setTelefono(QString _Telefono)
{
    telefono=_Telefono;
}

void Usuario::setCorreo(QString _Correo)
{
    correo=_Correo;
}

void Usuario::setEdad(QString _Edad)
{
    edad=_Edad;
}

