#include<iostream>
#include "habitaciones.h"
using namespace std;

struct Habitaciones{
	char nombre[20];
	int num_habi;
	char tipo[20];
}hab[30] = {{"Franco Avalos", 1, "Triple"},
					{"Daniela Alvarez", 2, "Individual"},
					{"Camila Roque", 3, "Doble"},
					{"David Mamani", 4, "Doble"},
					{"Mariela Herrera", 5, "Invidual"},
					{"Diego Rivera", 6, "Triple"},
					{"Martina Benitez", 7, "Invidual"},
					{"Alexander Chicaya", 8, "Triple"}
					
					};

void mostrarTipoDeHabitaciones(){
	Habitaciones h;
	
	cin.ignore();
	
	cout << "Digíte el nombre del huesped: " << endl;
	cin.getline(h.nombre, 20);
	
	cout << "Digíte el número de habitación del huesped (9-30): " << endl;
	cin >> h.num_habi;
	
	cin.ignore();
	
	cout << "Digíte el tipo de habitación del huesped: " << endl;
	cout << "-Individual" << endl;
	cout << "-Doble" << endl;
	cout << "-Triple" << endl;
	cin.getline(h.tipo, 20);
	
	
}
	
			

void habitacionesHotel(){
	int hab_ac;
	
	int opcion;
    do {
    	cout << "\n" << endl;
        cout << "1. Mostrar tipos de Habitaciones disponibles" << endl;
        cout << "2. Editar datos" << endl;
        cout << "3. Editar habitaciones" << endl;
        cout << "4. Eliminar habitaciones " << endl;
        cout << "5. Salir de la aplicacion" << endl;
        cout << "6. Eliminar huesped" << endl;
        cin >> opcion;
        // SWITCH PARA SELECIONAR LAS DIFERENTES OPCIONES DEL MENU CARTA
        switch (opcion) {
            case 1:
            	mostrarTipoDeHabitaciones();
                break;
            case 2:
                
                break;
            case 3:
            	
                break;
            case 4:
                
                break;
            case 5:
                
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
