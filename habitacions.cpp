/*#include<iostream>
#include "habitaciones.h"
#include <windows.h>
using namespace std;




int buscarHuesped(Habitaciones huespedes[], int n){
	for(int i = 0; i<30; i++){
		if ( huespedes[i].hab.num_habi == n){
			return i;
		}
	}
	return -1;
}

void agregarHabitacion(int &n_huesp, Huesped huespedes[]){
	
	cin.ignore();
	
	
	cout << "Digite el número de habitación del huesped (9-30): " << endl;
	cin >> huespedes[ha_actu].hab.num_habi;
	
	cin.ignore();
	
	cout << "Digite el tipo de habitación del huesped: " << endl;
	cout << "-Individual" << endl;
	cout << "-Doble" << endl;
	cout << "-Triple" << endl;
	cin.getline(huespedes[ha_actu].hab.tipo, 20);
	
	cout << "Habitacion agregada" << endl;
	ha_actu++;
}

void listarHabitaciones(){
	for ( int i = 0; i< ha_actu; i++){
		
		cout << "Numero de habitacion: " << huespedes[i].hab.num_habi << endl;
		cout << "Tipo de habitacion: " << huespedes[i].hab.tipo << endl << endl;
		cout <<"---------------------------------------------" << endl;
	}

}
void actualizarHabitacion(Habitaciones){
	int num;
	
	cout << "Digite el numero de habitacion que va editar: " << endl;
	cin >> num;
	cout << endl;
	
	int numero = buscarHuesped(huespedes, num);
	
	if (numero != -1){
		cout << "Huesped encontrado" << endl;
		cout << "Numero de habitacion: " << huespedes[numero].hab.num_habi << endl;
		cout << "Tipo de habitacion: " << huespedes[numero].hab.tipo << endl << endl;
		
		cout << "Digite el nuevo numero de habitacion: " << endl;
		cin >> huespedes[numero].hab.num_habi;
		cout << "Digite el nuevo tipo de habitacion: " << endl;
		cin >> huespedes[numero].hab.tipo;
		
		cout << "Los datos fueron actualizados" << endl;
	} else{
		cout << "Huesped no encontrado." << endl;
	}
}			

void habitacionesHotel(int &n_huesp, Huesped huespedes[], Habitaciones){
	
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
        SWITCH PARA SELECIONAR LAS DIFERENTES OPCIONES DEL MENU
        switch (opcion) {
           
            case 1:
                agregarHabitacion(int &n_huesp, Huesped huespedes[]);

                break;
            case 2:
            	listarHabitaciones();
            	
                break;
            case 3: 
            	//actualizarHabitacion(Habitaciones);
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
}*/
