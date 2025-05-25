#ifndef UDEASTAY_H
#define UDEASTAY_H

#include <iostream>
#include <string>
#include <fstream>
using namespace std;

class Reservacion
{
    string fechaEntrada;
    int duracion;
    string codigoReserva;
    string codigoID;
    string documentoHuesped;
    string metodoPago;
    string fechaPago;
    double monto;
    string nota;
public:

    Reservacion() {}
    Reservacion(string fechaPago);

};




class Alojamiento
{
    string nombre;
    string codigoID;
    string departamento;
    string municipio;
    string direccion;
    double precio;
    string amenidades;
    string archivo;
    string fechaPago;
public:

    Alojamiento() {}
    Alojamiento(string archivo);
};


class Anfitrion
{
private:
    string documento;
    int antiguedad;
    double puntuacion;
    string alojamientos;
    string password;
    string usuario;
public:

    Anfitrion();
    //metodos
    string getterDoc();
    void setterDoc( string doc);


};


//Clase Huesped
class Huesped
{
    string documento;
    int antiguedad;
    double puntuacion;
    string reservas;
    string password;
public:
    Huesped() {}
};

//Clase Login
class Login
{
    string bienvenidad;
public:
    Login() {}
    string getterWel();
    bool verificate(string user,string pass,string nombrearchivo);

};

#endif // UDEASTAY_H
