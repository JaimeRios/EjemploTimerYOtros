#ifndef USUARIO_H
#define USUARIO_H
#include <QString>

class Usuario
{
private:
    QString nombre,telefono,correo,edad;
public:
    Usuario();
    QString getNombre();
    QString getTelefono();
    QString getCorreo();
    QString getEdad();
    void setNombre(QString _Nombre);
    void setTelefono(QString _Telefono);
    void setCorreo(QString _Correo);
    void setEdad(QString _Edad);

};

#endif // USUARIO_H
