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
					
void agregarHuesped(int n_huesp, Huesped h){

}



void listarclientes(Huesped huespedes[30], int n_huesp){
     for(int i=0; i<n_huesp; i++){
          cout<<"Huesped n�mero "<<i<<" :"<<endl;
          cout<<"Nombre: "<<huespedes[i].Nombre<<endl;
          cout<<"N�mero: "<<huespedes[i].Telefono<<endl;
          cout<<"N�mero de DNI: "<<huespedes[i].dni<<endl;
	}
}


void huespedHotel(){
	int opcion;
	int n_huesp = 8; //Huespedes actuales (contador de huespedes)
	
	Huesped h;
		
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
            	agregarHuesped(n_huesp, h);
                break;
            case 2:
                
                break;
            case 3:
            	
                break;
            case 4:
                listarclientes(huespedes, n_huesp);
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
