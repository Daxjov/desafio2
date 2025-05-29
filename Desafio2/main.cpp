// ================= main.cpp =================
#include "UdeaStay.h"

int main() {
    Login login;
    string usuario, clave;
    int tipo;
    cout << login.getterWel();
    cout << "Ingrese tipo de usuario (1-Huesped, 2-Anfitrion): ";
    cin >> tipo;
    cout << "Usuario: "; cin >> usuario;
    cout << "Clave: "; cin >> clave;

    if (tipo == 1 && login.verificate(usuario, clave, "Archivos/loginHuespedes.txt")) {
        int opcion;
        Huesped h;
        Alojamiento a;
        do {
            cout << "\nMENU HUESPED:\n1. Hacer reserva\n2.Alojamientos\n0. Salir\nOpcion: ";
            cin >> opcion;
            if (opcion == 1) h.hacerReserva();
            else if(opcion==2){
                cout<<"Nombre,Codigo,Anfitrion,Departamento,Municipio,Direccion,Precio,Amenidades"<<endl;
                a.mostrarAlojamientos();
                }
        } while (opcion != 0);

    } else if (tipo == 2 && login.verificate(usuario, clave, "Archivos/loginAnfitrion.txt")) {
        int opcion;
        Anfitrion a;
        do {
            cout << "\nMENU ANFITRION:\n1. Cancelar reserva\n2. Consultar reservas activas\n3. Actualizar historico\n0. Salir\nOpcion: ";
            cin >> opcion;
            if (opcion == 1) {
                string cod;
                cout << "Codigo reserva a cancelar: ";
                cin >> cod;
                a.cancelarReserva(cod);
            } else if (opcion == 2) {
                string desde, hasta;
                cout << "Fecha desde (dd/mm/yyyy): "; cin >> desde;
                cout << "Fecha hasta (dd/mm/yyyy): "; cin >> hasta;
                a.consultarReservasActivas(desde, hasta);
            } else if (opcion == 3) {
                string hoy;
                cout << "Ingrese la fecha de hoy (dd/mm/yyyy): "; cin >> hoy;
                actualizarHistorico(hoy);
            }
        } while (opcion != 0);

    } else {
        cout << "Credenciales incorrectas o tipo de usuario invalido.\n";
    }
    return 0;
}
