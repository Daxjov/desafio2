#ifndef RESERVACION_H
#define RESERVACION_H
#include <iostream>
#include <string>

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

#endif//RESERVACION_H


#ifndef ALOJAMIENTO_H
#define ALOJAMIENTO_H
#include<iostream>
#include <string>
using namespace std;


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
    Reservacion fechasReservas(string fechaPago);
public:

    Alojamiento() {}
    Alojamiento(string archivo);
};

#endif//ALOJAMIENTO_H

#ifndef UDEASTAY_H
#define UDEASTAY_H
#include <iostream>
#include <string>

using namespace std;
class Anfitrion
{
private:
    string documento;
    int antiguedad;
    double puntuacion;
    Alojamiento leerPropiedades (string archivo);
    string password;
public:

    Anfitrion();
    bool login(string doc,string pass);

};

#endif // UDEASTAY_H




#ifndef HUESPEDES_H
#define HUESPEDES_H
#include <iostream>
#include <string>

class Huespedes
{
    string documento;
    int antiguedad;
    double puntuacion;
    Reservacion infoReserva(string archivo);
public:
    Huespedes() {}
};
#endif
