#include <iostream>
#include "clientes.h"
#include "habitaciones.h"
#include "reserva.h"
using namespace std; 



Huesped huespedes[30] = {{"Franco Avalos", "982827837", "73728372", {22, "individual"}},
					{"Daniela Alvarez", "992932892", "48548934", {3, "doble"}},
					{"Camila Roque", "938438231", "00565623", {1, "triple"}},
					{"David Mamani", "918229385", "67232718", {2, "doble"}},
					{"Mariela Herrera", "912718328", "15843498", {11, "doble"}},
					{"Diego Rivera", "928382891", "23923390", {6, "indivi"}},
					{"Martina Benitez", "986594342", "54894383",{9, "indivi"}},
					{"Alexander Chicaya", "992382831", "10120193", {8, "triple"}}
					
					};
					
int main(){
	//Reserva reservahabitacion[30];//declaracion de variable para registro de clientes
	int opcion;
	int n_huesp = 8;
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
	    		huespedHotel(n_huesp,huespedes);
	    		break;
	    	case 2:
	    		//habitacionesHotel(n_huesp, huespedes,habitaciones);
	    		break;
	    	case 3:
	    		//reservaHotel();
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
