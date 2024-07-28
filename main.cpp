#include <iostream>
#include "clientes.h"
#include "habitaciones.h"
#include "reserva.h"
using namespace std; 

int main(){
	//Reserva reservahabitacion[30];//declaracion de variable para registro de clientes
	int opcion;
	
	cout<<"\n----BIENVENIDOS AL HOTEL EL 'TELO'----\n" << endl;
	
	while(opcion!=4){ //Impresion del menu en la pantalla
	
	    cout<<"Seleccione una opcion:"<<endl;
	    cout<<"1) Cliente"<<endl;
	    cout<<"2) Habitaciones" << endl;
	    cout<<"3) Reserva" << endl;
	    cout<<"4) Salir del programa" << endl;
	    cout<<"Opcion: ";
	    cin>>opcion;
	    cout<<endl;
	    
	    switch(opcion){
	    	case 1:
	    		huespedHotel();
	    		break;
	    	case 2:
	    		habitacionesHotel();
	    		break;
	    	case 3:
	    		reservaHotel();
	    		break;
	    	case 4:
	    		cout<<"Saliendo...";
	    		break;
	    	default:
	    			cout<<"ERROR: Alternativa no valida, intente de nuevo..."<<endl<<endl;
	    		break;
		}
    }
    return 0;
}
