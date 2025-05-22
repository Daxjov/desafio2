#include "UdeaStay.h"

//metodos Clase Login
string Login::getterWel(){
    bienvenidad="||||Bienvenido a UdeAStay||||\n";
    return bienvenidad;
}

bool Login::verificate(string user,string pass){
    string copiaU;
    string copiaP;
    char c;
    ifstream archivo("Archivos/loginAnfitrion.txt");
    if(!archivo.is_open()){
        cerr<<"Error: no se abrio el archivo\n";
    }
    while(archivo.get(c)){
        if(c==',')break;
        copiaU+=c;
    }
    if(copiaU==user)
        return true;
    else
        return false;

}

void Login::getterMenu(){
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
            cout<<"Ingrese Contraseña:"<<endl;
            cin>>passwd;
            verificate(user,passwd);
            break;
            }


        default:
            break;
        }
        }


}


/*string Login::readAnf(const string &archivo){
    ifstream archivo;
    if(!archivo.is_open()){
        cerr<<"Error: archivo "<<archivo<<" no fue abierto"<<endl;
    }
    char c;
    string user;
    while(archivo.get(c)){
        if (c == ',')break;
        user += c;
    }
    archivo.close();
    return user;
    }
*/
//Metodos Clase Anfitriones


Anfitrion::Anfitrion(){}

string Anfitrion::getterDoc(){
    return documento;
}

void Anfitrion::setterDoc (string doc){
    documento=doc;
}

