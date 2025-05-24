#include "UdeaStay.h"
#include <iostream>

using namespace std;

int main()
{
    Login welcome;
    cout<<welcome.getterWel();
    int opcion = 1;
    while(opcion!=0){
    cout<<"1.Anfitrion"<<endl;
    cout<<"2.Huesped"<<endl;
    cout<<"0.Salir"<<endl;
    cin>>opcion;
    switch (opcion) {
    case 1:{
        string user;
        string passwd;
        cout<<"ingrese Usuario:"<<endl;
        cin>>user;
        cout<<endl;
        cout<<"Ingrese Contraseña:"<<endl;
        cin>>passwd;
        cout<<endl;
        Login acceso;
        bool confirm=acceso.verificate(user,passwd);
        if(confirm){
            cout<<"Bienvenido Anfitrion";
        }
        else
            cout<<"Credenciales incorrectas"<<endl;

        break;
    }
    case 2:{
        string user;
        string passwd;
        cout<<"ingrese Usuario:"<<endl;
        cin>>user;
        cout<<"Ingrese Contraseña:"<<endl;
        cin>>passwd;
        break;

    }
    default:
        break;
    }

    }
    return 0;
}
