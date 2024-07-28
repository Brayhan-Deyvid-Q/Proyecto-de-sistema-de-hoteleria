#include <iostream>
#include "clientes.h"
#include <string>
using namespace std;
					
void agregarHuesped(int &n_huesp, Huesped huespedes[]){
	if (n_huesp<30){
	cout<<"Ingrese el nombre del nuevo huesped: ";
	cin>>huespedes[n_huesp].Nombre;
	cout<<"Ingrese su número telefónico: ";
	cin>>huespedes[n_huesp].Telefono;
	cout<<"Ingrese su número de DNI: ";
	cin>>huespedes[n_huesp].dni;
	cout<<endl;
	n_huesp++;
	cout<<"Se ha agregado un nuevo cliente de forma exitosa..."<<endl;
	}else{
		cout<<"El hotel se encuentra lleno en este momento";
	}
	
} 

void eliminarCliente(int &n_huesp, Huesped huespedes[], int indice){
	if (indice >= 0 && indice<n_huesp){
		for(int i=indice; i<n_huesp;++i){
			huespedes[i]=huespedes[i+1];
		}
	}
}


void listarclientes(Huesped huespedes[30], int n_huesp){
     for(int i=0; i<n_huesp; i++){
          cout<<"Huesped número "<<i<<" :"<<endl;
          cout<<"Nombre: "<<huespedes[i].Nombre<<endl;
          cout<<"Número: "<<huespedes[i].Telefono<<endl;
          cout<<"Número de DNI: "<<huespedes[i].dni<<endl;
          cout<<endl;
	}
}


void huespedHotel(int &n_huesp, Huesped huespedes[30]){
	int opcion, indice;
		
    do {
    	cout << "\n" << endl;
        cout << "1. Agregar cliente" << endl;
        cout << "2. Eliminar cliente" << endl;
        cout << "3. Listar clientes" << endl;
        cout << "4. Regresar al menu principal" << endl << endl;
        cout << "opci�n: ";
        cin >> opcion;
        cout << endl;
        // SWITCH PARA SELECIONAR LAS DIFERENTES OPCIONES DEL MENU CARTA
        switch (opcion) {
            case 1:
            	agregarHuesped(n_huesp, huespedes);
                break;
            case 2:
            	listarclientes(huespedes, n_huesp);
            	cout << "Ingrese el �ndice del cliente que desea eliminar: ";
            	cin >> indice;
                eliminarCliente(n_huesp, huespedes, indice);
                break;
            case 3:
            	listarclientes(huespedes, n_huesp);
                break;
            case 4:
                cout << "Regresando al menu inicial" << endl;
                break;
            default:
                cout << "Valor ingresado incorrecto, vuelva a ingresar otro valor" << endl;
                break;
        }
        
    } while (opcion != 4); //EN CASO SELECCIONAR EL NUMERO 4 REGRESA AL MENU ANTERIOR
}
