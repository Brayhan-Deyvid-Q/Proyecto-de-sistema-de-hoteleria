#ifndef RESERVA_H
#define RESERVA_H

#include <string>

using namespace std;

struct Fecha {
    int dia;
    int mes;
    int anio;

    Fecha(int d = 0, int m = 0, int a = 0) : dia(d), mes(m), anio(a) {}
};

class Cliente {
public:
    string nombre;

    Cliente(string n = "") : nombre(n) {}
};

void validacionFecha(int &dia, int &mes, int &anio);
void fechaInicio();
void mostrarReservas();
void reservaHotel();

#endif 

