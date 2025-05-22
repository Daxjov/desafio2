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
    else{
        cout<<"Archivo Abierto correctamente"<<endl;
    }
    while(archivo.get(c)){
        if(c==',')
            break;
        copiaU+=c;

    }
    while(archivo.get(c)){
        if(c==','||c=='\n')continue;
        copiaP+=c;
    }
    archivo.close();

    return (copiaU==user && copiaP==pass);

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

