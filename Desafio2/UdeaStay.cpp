#include "UdeaStay.h"

//metodos Clase Login
string Login::getterWel(){
    bienvenidad="||||Bienvenido a UdeAStay||||\n";
    return bienvenidad;
}

bool Login::verificate(string user,string pass){
    int n=10;
    string copia[n];
    char c;
    bool valida;
    int cont=0;
    ifstream archivo("Archivos/loginAnfitrion.txt");
    if(!archivo.is_open()){
        cerr<<"Error: no se abrio el archivo\n";
    }
    else
        cout<<"Archivo Abierto correctamente"<<endl;
    for (int i = 0; i < n; ++i) {
        while (archivo.get(c)) {
            if(c==','||c=='\n'){
                break;
                }
            copia[i]+=c;
        }
        cont++;
        if (copia[i]=="")
            break;
    }

    copia[cont-1]='\0';
    for (int e = 0; e<n; e+=2) {
        if(copia[e]==user&&copia[e+1]==pass){
            valida=true;
            break;
        }
    }



    archivo.close();

    return valida;
    }

//Metodos Clase Anfitriones


Anfitrion::Anfitrion(){}

string Anfitrion::getterDoc(){
    return documento;
}

void Anfitrion::setterDoc (string doc){
    documento=doc;
}

