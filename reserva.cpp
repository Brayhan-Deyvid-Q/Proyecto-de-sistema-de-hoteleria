#include<iostream>
#include "reserva.h"
#include <string>

using namespace std;
// Clase para representar a un cliente
class Cliente {
public:
    string nombre;

    Cliente(string n = "") : nombre(n) {}
};

const int CLIENTES=30;//MAXIMO DE CLIENTES EN EL HOTEL
Cliente clientes[CLIENTES];
int numClientes = 0; //CONTADOR DE CLIENTES 

/*Dejo espacio para hacer las funciones para reserva.cpp */

//void selecionarClientes

//void fechaInicio 

//void fechaFin

//void cancelarReservas 

void mostrarReservas() {
    if (numClientes == 0) {
        cout << "No hay clientes registrados." << endl;
        return;
    }
    cout << "Clientes disponibles:" << endl;
    for (int i = 0; i < numClientes; ++i) {
        cout << i + 1 << ". " << clientes[i].nombre << endl;
    }
}

void reservaHotel(){

	int opcion;
    do {
    	cout << "\n" << endl;
        cout << "1. Seleccionar cliente" << endl;
        cout << "2. Fecha de inicio de la reserva" << endl;
        cout << "3. Fecha de fin de la reserva" << endl;
        cout << "4. Cancelar reservas" << endl;
        cout << "5. Mostrar reservas activas" << endl; //SE CAMBIO EL LISTADO DE MOSTRAR A LISTAR
        cout << "6. Volver al menú principal" << endl;
		
        cin >> opcion;
        // SWITCH PARA SELECIONAR LAS DIFERENTES OPCIONES DEL MENU CARTA
        switch (opcion) {
            case 1:
            	
                break;
            case 2:
                
                break;
            case 3:
            	
                break;
            case 4:
                
                break;
            case 5:
                mostrarReservas();
                break;
            case 6:
                cout << "Regresando al menu inicial" << endl;
                break;
            default:
                cout << "Valor ingresado incorrecto, vuelva a ingresar otro valor" << endl;
                break;
        }
        
    } while (opcion != 6); //EN CASO SELECCIONAR EL NUMERO 6 REGRESA AL MENU ANTERIOR
}



