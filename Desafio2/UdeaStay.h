// ================= UdeaStay.h =================
#ifndef UDEASTAY_H
#define UDEASTAY_H

#include <iostream>
#include <fstream>
using namespace std;

class Reserva {
    string fechaEntrada;
    string municipio;
    int cantNoches;
    string codigoReserva;
    string codigoAlojamiento;
    string documentoHuesped;
    string metodoPago;
    string fechaPago;
    double monto;
    string nota;
public:
    Reserva() {}
    Reserva(string fEntrada, string muni, int noches, string codRes, string codAloja, string docH, string mPago, string fPago, double m, string n);
    void guardarReserva();
    string getCodigoReserva();
    string getCodigoAlojamiento();
    string getFechaEntrada();
    int getDuracion();
};

class Alojamiento {
    string nombre;
    string codigoID;
    string anfitrion;
    string municipio;
    string tipo;
    string direccion;
    double precio;
    string amenidades;
public:
    Alojamiento() {}
    void mostrarAlojamientos();
};

class Anfitrion {
    string documento;
    int antiguedad;
    double puntuacion;
    string password;
    string usuario;
public:
    Anfitrion() {}
    bool cancelarReserva(string codReserva);
    void consultarReservasActivas(string desde, string hasta);
};

class Huesped {
    string usuario;
    string documento;
    int antiguedad;
    double puntuacion;
    string password;
public:
    Huesped() {}
    void hacerReserva();
};

class Login {
    string bienvenidad;
public:
    Login() {}
    string getterWel();
    bool verificate(string user, string pass, string nombrearchivo);
};

void actualizarHistorico(string hoy);

#endif
