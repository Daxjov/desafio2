#include "UdeaStay.h"


using namespace std;

int main()
{
    int con=0;
    con++;
    Login welcome;
    con++;
    cout<<welcome.getterWel();
    cout<<"objeto Login welcome "<<sizeof(welcome)<<" Bytes"<<endl;
    con++;
    cout<<"interacciones welcome: "<<con++<<endl<<endl;
    int opcion = 1;
    con=0;
    con++;
    while(opcion!=0){
    cout<<"1.Anfitrion"<<endl;
        con++;
    cout<<"2.Huesped"<<endl;
        con++;
    cout<<"0.Salir"<<endl;
        con++;
    cin>>opcion;
        con++;
    cout<<"Iteraciones Menu : "<<con<<endl;
    switch (opcion) {
    case 1:{
        con=0;
        string user;
        con++;
        string passwd;
        con++;
        cout<<"ingrese Usuario:"<<endl;
        con++;
        cin>>user;
        cout<<endl;
        con++;
        cout<<"Ingrese Contraseña:"<<endl;
        con++;
        cin>>passwd;
        con++;
        cout<<endl;
        con++;
        Login acceso;
        bool confirm=acceso.verificate(user,passwd,"Archivos/loginAnfitrion.txt");
        cout<<"Objeto Login Acceso: "<<sizeof(acceso)<<" Bytes"<<endl<<endl;
        if(confirm){
            con++;
            cout<<"Iteracciones login externas: "<<con++<<endl;
            cout<<"Bienvenido Anfitrion\n";
        }
        else{
       cout<<"Iteracciones login externas: "<<con++<<endl;
            con++;
        cout<<"Credenciales incorrectas"<<endl;
        }

        break;
       }
    case 2:{
           con=0;
        con++;
        string user;
           con++;
        string passwd;
           con++;
           cout<<"ingrese Usuario:"<<endl;
           con++;
           cin>>user;
           con++;
           cout<<"Ingrese Contraseña:"<<endl;
           con++;
           cin>>passwd;
           con++;
           cout<<endl;
           con++;
           Login acceso;
           con++;
           bool confirm=acceso.verificate(user,passwd,"Archivos/loginHuesped.txt");

           cout<<"Objeto Login acceso: "<<sizeof(acceso)<<" Bytes"<<endl;

           cout<<"Iteraciones Login Huesped: "<<con++<<endl<<endl;

           if(confirm){
            int opcion1=1;
            con=0;
            con++;
            while(opcion1!=0){
                con++;
            cout<<"Bienvenido Huesped\n\n";
            con++;
            cout<<"1.Reservar Alojamiento"<<endl;
            con++;
            cout<<"2.Anular Reservacion"<<endl;
            con++;
            cout<<"0.Salir"<<endl;
            con++;
            cin>>opcion1;
            con++;
            cout<<"Iteraciones Menu Huesped: "<<con++<<endl;
            switch (opcion1) {
                con=0;
                con++;
            case 1:{
                con++;
                string fechaR;
                con++;
                string municipio;
                con++;
                int noches;
                con++;
                cout<<"Formato Fecha Ej: lunes,3,agosto,2025"<<endl;
                con++;
                cout<<"Ingrese Fecha de reserva:\n";
                con++;
                cin>>fechaR;
                con++;
                cout<<"Ingrese Municipio:\n";
                con++;
                cin>>municipio;
                con++;
                cout<<"Ingrese cantidad de noches:\n";
                con++;
                cin>>noches;
                con++;
                Reserva reserva1;
                reserva1.Reservas(fechaR,municipio,noches);


            break;
            }
            default:
                break;
            }
               }
           }
        else{
            cout<<"credenciales incorrectas\n\n";
            con++;
            cout<<"Iteraciones Login Huesped: "<<con++<<endl<<endl;

        }
        break;

    }
    default:
        break;
    }

    }
    return 0;
}
