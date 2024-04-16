#include <iostream>

using namespace std;

int main() {
	int opcion;
	int mes, dia, ano;
	
	cout<<"Por favor introduzca una fecha (mes, dia, año): ";
	cin>>mes>>dia>>ano;
	
	cout<<endl<<"Como le gustaria mostrar la fecha?"<<endl;
	cout<<endl<<"Mes completo, dia, año (Enero 01, 2000): Introduzca 1."<<endl;
	cout<<"Mes abreviado, dia, año (Ene. 01, 2000): Introduzca 2."<<endl;
	cout<<"Mes en cifra/dia/año (01/01/2000): Introduzca 3."<<endl;
	cout<<"Opcion: "<<endl;
	cin>>opcion;
	
	
	switch (mes){
		case 1:
			 switch (opcion) {
	 			case 1:
	 				cout<<"La fecha traducida es: Enero"<<" "<<dia<<" "<<ano;
	 			break;
		 	 }
		 	 switch (opcion) {
	 			case 2:
	 				cout<<"La fecha traducida es: Ene."<<" "<<dia<<" "<<ano;
	 			break;
		 	 }
		 	 switch (opcion) {
	 			case 1:
	 				cout<<"La fecha traducida es: 01"<<"/"<<dia<<"/"<<ano;
		 	 break; 
			}
		break;
		case 2:
			 switch (opcion) {
	 			case 1:
	 				cout<<"La fecha traducida es: Febrero"<<" "<<dia<<" "<<ano;
	 			break;
		 	 }
		 	 switch (opcion) {
	 			case 2:
	 				cout<<"La fecha traducida es: Feb."<<" "<<dia<<" "<<ano;
	 			break;
		 	 }
		 	 switch (opcion) {
	 			case 1:
	 				cout<<"La fecha traducida es: 02"<<"/"<<dia<<"/"<<ano;
		 	 break; 
			}
		break;
		case 3:
			 switch (opcion) {
	 			case 1:
	 				cout<<"La fecha traducida es: Marzo"<<" "<<dia<<" "<<ano;
	 			break;
		 	 }
		 	 switch (opcion) {
	 			case 2:
	 				cout<<"La fecha traducida es: Mar."<<" "<<dia<<" "<<ano;
	 			break;
		 	 }
		 	 switch (opcion) {
	 			case 1:
	 				cout<<"La fecha traducida es: 03"<<"/"<<dia<<"/"<<ano;
		 	 break; 
			}
		break;
		case 4:
			 switch (opcion) {
	 			case 1:
	 				cout<<"La fecha traducida es: Abril"<<" "<<dia<<" "<<ano;
	 			break;
		 	 }
		 	 switch (opcion) {
	 			case 2:
	 				cout<<"La fecha traducida es: Abr."<<" "<<dia<<" "<<ano;
	 			break;
		 	 }
		 	 switch (opcion) {
	 			case 1:
	 				cout<<"La fecha traducida es: 04"<<"/"<<dia<<"/"<<ano;
		 	 break; 
			}
		break;
		case 5:
			 switch (opcion) {
	 			case 1:
	 				cout<<"La fecha traducida es: Mayo"<<" "<<dia<<" "<<ano;
	 			break;
		 	 }
		 	 switch (opcion) {
	 			case 2:
	 				cout<<"La fecha traducida es: May."<<" "<<dia<<" "<<ano;
	 			break;
		 	 }
		 	 switch (opcion) {
	 			case 1:
	 				cout<<"La fecha traducida es: 05"<<"/"<<dia<<"/"<<ano;
		 	 break; 
			}
		break;
		case 6:
			 switch (opcion) {
	 			case 1:
	 				cout<<"La fecha traducida es: Junio"<<" "<<dia<<" "<<ano;
	 			break;
		 	 }
		 	 switch (opcion) {
	 			case 2:
	 				cout<<"La fecha traducida es: Jun."<<" "<<dia<<" "<<ano;
	 			break;
		 	 }
		 	 switch (opcion) {
	 			case 1:
	 				cout<<"La fecha traducida es: 06"<<"/"<<dia<<"/"<<ano;
		 	 break; 
			}
		break;
		case 7:
			 switch (opcion) {
	 			case 1:
	 				cout<<"La fecha traducida es: Julio"<<" "<<dia<<" "<<ano;
	 			break;
		 	 }
		 	 switch (opcion) {
	 			case 2:
	 				cout<<"La fecha traducida es: Jul."<<" "<<dia<<" "<<ano;
	 			break;
		 	 }
		 	 switch (opcion) {
	 			case 1:
	 				cout<<"La fecha traducida es: 07"<<"/"<<dia<<"/"<<ano;
		 	 break; 
			}
		break;
		case 8:
			 switch (opcion) {
	 			case 1:
	 				cout<<"La fecha traducida es: Agosto"<<" "<<dia<<" "<<ano;
	 			break;
		 	 }
		 	 switch (opcion) {
	 			case 2:
	 				cout<<"La fecha traducida es: Ago."<<" "<<dia<<" "<<ano;
	 			break;
		 	 }
		 	 switch (opcion) {
	 			case 1:
	 				cout<<"La fecha traducida es: 08"<<"/"<<dia<<"/"<<ano;
		 	 break; 
			}
		break;
		case 9:
			 switch (opcion) {
	 			case 1:
	 				cout<<"La fecha traducida es: Septiembre"<<" "<<dia<<" "<<ano;
	 			break;
		 	 }
		 	 switch (opcion) {
	 			case 2:
	 				cout<<"La fecha traducida es: Sep."<<" "<<dia<<" "<<ano;
	 			break;
		 	 }
		 	 switch (opcion) {
	 			case 1:
	 				cout<<"La fecha traducida es: 09"<<"/"<<dia<<"/"<<ano;
		 	 break; 
			}
		break;
		case 10:
			 switch (opcion) {
	 			case 1:
	 				cout<<"La fecha traducida es: Octubre"<<" "<<dia<<" "<<ano;
	 			break;
		 	 }
		 	 switch (opcion) {
	 			case 2:
	 				cout<<"La fecha traducida es: Oct."<<" "<<dia<<" "<<ano;
	 			break;
		 	 }
		 	 switch (opcion) {
	 			case 1:
	 				cout<<"La fecha traducida es: 10"<<"/"<<dia<<"/"<<ano;
		 	 break; 
			}
		break;
		case 11:
			 switch (opcion) {
	 			case 1:
	 				cout<<"La fecha traducida es: Noviembre"<<" "<<dia<<" "<<ano;
	 			break;
		 	 }
		 	 switch (opcion) {
	 			case 2:
	 				cout<<"La fecha traducida es: Nov."<<" "<<dia<<" "<<ano;
	 			break;
		 	 }
		 	 switch (opcion) {
	 			case 1:
	 				cout<<"La fecha traducida es: 11"<<"/"<<dia<<"/"<<ano;
		 	 break; 
			}
		break;
		case 12:
			 switch (opcion) {
	 			case 1:
	 				cout<<"La fecha traducida es: Diciembre"<<" "<<dia<<" "<<ano;
	 			break;
		 	 }
		 	 switch (opcion) {
	 			case 2:
	 				cout<<"La fecha traducida es: Dic."<<" "<<dia<<" "<<ano;
	 			break;
		 	 }
		 	 switch (opcion) {
	 			case 1:
	 				cout<<"La fecha traducida es: 12"<<"/"<<dia<<"/"<<ano;
		 	 break; 
			}
		break;
	}
	
	return 0;
}
