#include<iostream>
#include "reserva.h"
using namespace std;

void reservaHotel(){

	int opcion;
    do {
    	cout << "\n" << endl;
        cout << "1. Seleccionar cliente" << endl;
        cout << "2. Fecha de inicio de la reserva" << endl;
        cout << "3. Fecha de fin de la reserva" << endl;
        cout << "4. Cancelar reservas" << endl;
        cout << "5. Mostrar reservas activas" << endl;
        cout << "6. Mostrar reservas activas" << endl;
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



