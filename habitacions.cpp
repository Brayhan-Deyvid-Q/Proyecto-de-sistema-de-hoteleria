#include<iostream>
#include "habitaciones.h"
using namespace std;

void habitacionesHotel(){

	int opcion;
    do {
    	cout << "\n" << endl;
        cout << "1. Mostrar tipos de Habitaciones disponibles" << endl;
        cout << "2. Editar datos" << endl;
        cout << "3. Editar habitaciones" << endl;
        cout << "4. Eliminar habitaciones " << endl;
        cout << "5. Salir de la aplicacion" << endl;
        cout << "6. Eliminarcliente" << endl;
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
