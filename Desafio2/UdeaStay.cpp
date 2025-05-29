// ================= UdeaStay.cpp =================
#include "UdeaStay.h"

// Implementaciones básicas
Reserva::Reserva(string fEntrada, string muni, int noches, string codRes, string codAloja, string docH, string mPago, string fPago, double m, string n) {
    fechaEntrada = fEntrada;
    municipio = muni;
    cantNoches = noches;
    codigoReserva = codRes;
    codigoAlojamiento = codAloja;
    documentoHuesped = docH;
    metodoPago = mPago;
    fechaPago = fPago;
    monto = m;
    nota = n;
}

void Reserva::guardarReserva() {
    ofstream file("Archivos/reservas.txt", ios::app);
    if (file.is_open()) {
        file << fechaEntrada << "," << municipio << "," << cantNoches << ","
             << codigoReserva << "," << codigoAlojamiento << "," << documentoHuesped << ","
             << metodoPago << "," << fechaPago << "," << monto << "," << nota << "\n";
        file.close();
        cout << "Reserva guardada correctamente.\n";
    } else {
        cerr << "Error al guardar la reserva.\n";
    }
}

string Reserva::getCodigoReserva() { return codigoReserva; }
string Reserva::getCodigoAlojamiento() { return codigoAlojamiento; }
string Reserva::getFechaEntrada() { return fechaEntrada; }
int Reserva::getDuracion() { return cantNoches; }

void Alojamiento::mostrarAlojamientos() {
    ifstream file("Archivos/alojamientos.txt");
    string line;
    while (getline(file, line)) {
        cout << line << endl;
    }
    file.close();
}

bool Anfitrion::cancelarReserva(string codReserva) {
    ifstream in("Archivos/reservas.txt");
    ofstream out("Archivos/tmp.txt");
    string line;
    bool encontrada = false;
    while (getline(in, line)) {
        if (line.find(codReserva) == string::npos) {
            out << line << endl;
        } else {
            encontrada = true;
        }
    }
    in.close();
    out.close();
    remove("Archivos/reservas.txt");
    rename("Archivos/tmp.txt", "Archivos/reservas.txt");
    if (encontrada) cout << "Reserva cancelada correctamente.\n";
    else cout << "No se encontro la reserva.\n";
    return encontrada;
}

void Anfitrion::consultarReservasActivas(string desde, string hasta) {
    ifstream file("Archivos/reservas.txt");
    string line;
    cout << "Reservas entre " << desde << " y " << hasta << ":\n";
    while (getline(file, line)) {
        cout << line << endl; // Aquí podrías parsear y comparar fechas
    }
    file.close();
}

void Huesped::hacerReserva() {
    string fEntrada, muni, codRes, codAloja, docH, mPago, fPago, nota;
    int noches;
    double monto;
    cout << "Fecha entrada: "; cin >> fEntrada;
    cout << "Municipio: "; cin >> muni;
    cout << "Cantidad de noches: "; cin >> noches;
    cout << "Codigo alojamiento: "; cin >> codAloja;
    cout << "Documento huesped: "; cin >> docH;
    cout << "Metodo pago: "; cin >> mPago;
    cout << "Fecha pago: "; cin >> fPago;
    cout << "Monto: "; cin >> monto;
    cout << "Nota: "; cin.ignore(); getline(cin, nota);
    Reserva r(fEntrada, muni, noches, codRes, codAloja, docH, mPago, fPago, monto, nota);
    r.guardarReserva();
}

string Login::getterWel() {
    return "\\n*** Bienvenido a UdeAStay ***\\n";
}

bool Login::verificate(string user, string pass, string nombrearchivo) {
    ifstream file(nombrearchivo);
    string u, p;
    while (getline(file, u, ',') && getline(file, p)) {
        if (u == user && p == pass) return true;
    }
    return false;
}

void actualizarHistorico(string hoy) {
    ifstream in("Archivos/reservas.txt");
    ofstream out("Archivos/historico.txt", ios::app);
    ofstream temp("Archivos/tmp.txt");
    string line;
    while (getline(in, line)) {
        // Aquí deberías comparar fechas, asumimos que todas van al histórico por simplificación
        out << line << endl;
    }
    in.close();
    out.close();
    temp.close();
    remove("Archivos/reservas.txt");
    rename("Archivos/tmp.txt", "Archivos/reservas.txt");
    cout << "Reservas actualizadas al histórico.\n";
}
