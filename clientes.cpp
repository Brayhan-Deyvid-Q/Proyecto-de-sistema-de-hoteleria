#include <iostream>
#include "clientes.h"
#include <string.h>
using namespace std;

struct Huesped{

char Nombre[50];
char Telefono[50];
char dni[50];

};

Huesped huespedes[30] = {{"Franco Avalos", "982827837", "73728372"},
					{"Daniela Alvarez", "992932892", "48548934"},
					{"Camila Roque", "938438231", "00565623"},
					{"David Mamani", "918229385", "67232718"},
					{"Mariela Herrera", "912718328", "15843498"},
					{"Diego Rivera", "928382891", "23923390"},
					{"Martina Benitez", "986594342", "54894383"},
					{"Alexander Chicaya", "992382831", "10120193"}
					
					};
					
void agregarHuesped(){
	Huesped h;
	
	int n_huesp = 8; //Huespedes actuales
	cin.ignore();
	
	cout << "Digite el nombre: " << endl;
	cin.getline(h.Nombre, 40);
		
	cout << "Digite el numero de telefono: " << endl;
	cin.getline(h.Telefono, 40);
		
	cout << "Digite el numero de DNI: " << endl;
	cin.getline(h.dni, 40);
		
	if (n_huesp >= 30){
		
		cout << "No se pueden añadir mas huespedes, el hotel el 'TELO' anda lleno" << endl;
	}
	
	strcpy(huespedes[n_huesp].Nombre, h.Nombre);
	strcpy(huespedes[n_huesp].Telefono, h.Telefono);
	strcpy(huespedes[n_huesp].dni, h.dni);
	
	n_huesp++;
	
	cout << "El huesped fue agregado de manera exitosa. ";
}


void huespedHotel(){
	int opcion;
    do {
    	cout << "\n" << endl;
        cout << "1. Agregar cliente" << endl;
        cout << "2. Editar datos" << endl;
        cout << "3. Eliminar cliente" << endl;
        cout << "4. Listar clientes" << endl;
        cout << "5. Regresar al menu principal" << endl;
        cin >> opcion;
        // SWITCH PARA SELECIONAR LAS DIFERENTES OPCIONES DEL MENU CARTA
        switch (opcion) {
            case 1:
            	agregarHuesped();
                break;
            case 2:
                
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
        
    } while (opcion != 5); //EN CASO SELECCIONAR EL NUMERO 6 REGRESA AL MENU ANTERIOR
}
