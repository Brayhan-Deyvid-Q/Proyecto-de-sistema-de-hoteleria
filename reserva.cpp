#include<iostream>
#include "reserva.h"
using namespace std;

void validacionFecha(int dia, int mes, int anio){
	do{
		
		if (mes<1 || mes>12){
			cout << "El mes ingresado no es v�lida, por favor ingrese un dato real." << endl; 
		}else if(dia<1 || dia>31){
			cout << "El d�a ingresado no es valida, por favor ingrese un dato real." << endl;
		}else if((mes==4 || mes==6 || mes==9 || mes==11)&& dia>30){
			cout << "La fecha ingresada no es valida, por favor ingrese un dato real." << endl;
		}else if(mes==2){
			if ((anio % 4 == 0 && anio % 100 != 0) || anio % 400 == 0){
				if(dia >29){
					cout << "La fecha ingresada no es valida, por favor ingrese un dato real." << endl;
				}
			}
		}else if(dia>28){
			cout << "La fecha ingresada no es valdia, por favor ingrese un valor real." << endl; 
		}
	}while(mes<1 || mes>12 || dia<1 || dia>31 ||((mes==4 || mes==6 || mes==9 || mes==11)&& dia>30)||(mes==2 &&((anio%4==0 && anio%100!=0)||anio%400==0)?dia>29 : dia>28));
}

void reservaHotel(){

	int opcion, dia, mes, anio;
    do {
    	cout << "\n" << endl;
        cout << "1. Seleccionar cliente" << endl;
        cout << "2. Fecha de inicio de la reserva" << endl;
        cout << "3. Fecha de fin de la reserva" << endl;
        cout << "4. Cancelar reservas" << endl;
        cout << "5. Mostrar reservas activas" << endl;
        cout << "6. Volver al men� principal" << endl;
		
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



