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
        cout<<"Objeto Login Acceso: "<<sizeof(acceso)<<" Bytes"<<endl;
        if(confirm){
            con++;
            cout<<"Iteracciones login externas: "<<con++<<endl;
            cout<<"Bienvenido Anfitrion\n";
        }
        else{
            cout<<"Credenciales incorrectas"<<endl;
       con++;
       cout<<"Iteracciones login externas: "<<con++<<endl;
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
           if(confirm){
            con++;
           cout<<"Bienvenido Huesped\n\n";
        cout<<"Iteraciones Login Huesped: "<<con++<<endl<<endl;
        }
        else{
            cout<<"credenciales incorrectas\n\n";
            cout<<"Iteraciones Login Huesped: "<<con<<endl<<endl;

        }
        break;

    }
    default:
        break;
    }

    }
    return 0;
}
