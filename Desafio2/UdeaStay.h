#ifndef UDEASTAY_H
#define UDEASTAY_H

#include <iostream>
#include <string>
#include <fstream>
using namespace std;

class Reserva
{
    string fechaEntrada;
    string municipio;
    int cantNoches;
    string codigoReserva;
    string codigoID;
    string documentoHuesped;
    string metodoPago;
    string fechaPago;
    double monto;
    string nota;

public:

    Reserva() {}
    Reserva(string fechaPago);
    void Reservas(string fechaEntrada,string municipio,int cantNoches);
    void verReservas();

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
    void listaAlojamientos();
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
    string usuario;
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
