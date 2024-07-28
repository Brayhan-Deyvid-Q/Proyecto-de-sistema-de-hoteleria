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
					{"Mariela Herrera", 5, "Individual"},
					{"Diego Rivera", 6, "Triple"},
					{"Martina Benitez", 7, "Invidual"},
					{"Alexander Chicaya", 8, "Triple"}
					
					};

int ha_actu = 8; //habitaciones actuales
	
void agregarHabitacion(){
	Habitaciones h;
	
	cin.ignore();
	
	cout << "Digite el nombre del huesped: " << endl;
	cin.getline(hab[ha_actu].nombre, 20);
	
	cout << "Digite el número de habitación del huesped (9-30): " << endl;
	cin >> hab[ha_actu].num_habi;
	
	cin.ignore();
	
	cout << "Digite el tipo de habitación del huesped: " << endl;
	cout << "-Individual" << endl;
	cout << "-Doble" << endl;
	cout << "-Triple" << endl;
	cin.getline(hab[ha_actu].tipo, 20);
	
	cout << "Habitacion agregada" << endl;
	ha_actu++;
}

void listarHabitaciones(){
	for ( int i = 0; i< ha_actu; i++){
		
		cout << "Nombre: " << hab[i].nombre << endl;
		cout << "Numero de habitacion: " << hab[i].num_habi << endl;
		cout << "Tipo de habitacion: " << hab[i].tipo << endl << endl;
		cout <<"---------------------------------------------" << endl;
	}

}	

void habitacionesHotel(){
	
	int opcion;
    do {
    	cout << "\n";
        cout << "1. Agregar habitacion" << endl;
        cout << "2. Listar habitaciones" << endl;
        cout << "3. Actualizar habitacion" << endl;
        cout << "4. Eliminar habitacion " << endl;
        cout << "5. Volver al menu principal." << endl;
        cout << "Opcion: ";
        cin >> opcion;
        
        cout << endl;
        // SWITCH PARA SELECIONAR LAS DIFERENTES OPCIONES DEL MENU
        switch (opcion) {
           
            case 1:
                agregarHabitacion();

                break;
            case 2:
            	listarHabitaciones();
            	
                break;
            case 3: 
            	break;
            case 4:
            	break;
            case 5:
                cout << "Regresando al menu inicial" << endl;
				break;
            default:
                cout << "Valor ingresado incorrecto, vuelva a ingresar otro valor" << endl;
                break;
        }
        
    } while (opcion != 5); //EN CASO SELECCIONAR EL NUMERO 4 REGRESA AL MENU ANTERIOR
}
