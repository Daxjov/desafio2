#include "UdeaStay.h"

//metodos Clase Login
string Login::getterWel(){
    bienvenidad="||||Bienvenido a UdeAStay||||\n\n";
    return bienvenidad;
}

bool Login::verificate(string user,string pass, string nombrearchivo){
    int con=0;
    con++;
    int n=10;
    con++;
    string copia[n];
    con++;
    char c;
    con++;
    bool valida;
    con++;
    int cont=0;
    con++;
    ifstream archivo(nombrearchivo);
    con++;
    if(!archivo.is_open()){
        con++;
        cerr<<"Error: no se abrio el archivo\n";
        con++;
    }
    for (int i = 0; i < n; ++i) {
        while (archivo.get(c)) {
            if(c==','||c=='\n'){
                con++;
                break;
                }
            con++;
            copia[i]+=c;
        }
        cont++;
        con++;
        if (copia[i]=="")
            con++;
            break;
    }

    copia[cont-1]='\0';
    con++;
    for (int e = 0; e<n; e+=2) {
        if(copia[e]==user&&copia[e+1]==pass){
            con++;
            valida=true;
            con++;
            break;
        }
    }



    archivo.close();
    con++;
    cout<<"interacciones Internas de login: "<<con<<endl;
    return valida;
    }

    //Metodos Clase Huesped




    //Metodos Clase Anfitriones

Anfitrion::Anfitrion(){}

string Anfitrion::getterDoc(){
    return documento;
}

void Anfitrion::setterDoc (string doc){
    documento=doc;
}

