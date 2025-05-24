#include "UdeaStay.h"

//metodos Clase Login
string Login::getterWel(){
    bienvenidad="||||Bienvenido a UdeAStay||||\n";
    return bienvenidad;
}

bool Login::verificate(string user,string pass){

    string copia;
    char c;
    bool validaU;
    bool validaP;
    int longitud;
    int longitudP=pass.length();
    int longitudU=user.length();
    ifstream archivo("Archivos/loginAnfitrion.txt");
    if(!archivo.is_open()){
        cerr<<"Error: no se abrio el archivo\n";
    }
    else{
        cout<<"Archivo Abierto correctamente"<<endl;
    }

    while(archivo.get(c)){
        copia+=c;
    }
    longitud=copia.length();
    for (int u = 0; u < longitud; u+=longitudU) {
        for (int t = 0; t < longitud; ++t)
        {
            if(copia[u+t]==',')
                break;
            else if(copia[u+t]==user[u+t]){
                validaU=true;
            }

        }
    }

    archivo.close();


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

