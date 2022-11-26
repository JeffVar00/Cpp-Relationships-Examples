#include "Opcion.h"

Opcion::Opcion(){}
Opcion::~Opcion(){}

void  Opcion::mostrarOpcion(){
	double x;
	double y;
	double z;
	Operacion op;
	int opc;
	system("cls");
	cout<<"Digite 1 si desea sumar  2 si desea restar  y 3 si desea terminar ";
	cin >> opc;
	switch  (opc){
	case 1:  
		cout <<"Digite los valores que desea sumar:  "<<endl;
		cout<<"valor 1:  ";
		cin>>x;
		cout<<"valor 2:  ";
		cin>>y;
		cout<<endl;	
		cout<<"el resultado de la suma es:   ";
		cout<< op.suma(x,y);	
		cout<<endl;
		system("pause");
		this->mostrarOpcion();	
		break;
	case 2: 
		cout <<"Digite los valores que desea restar  "<<endl;
		cout<<"valor 1:  ";
		cin>>x;
		cout<<"valor 2:  ";
		cin>>y;
		cout<<endl;
		cout<<"el resultado de la resta es:   ";
		cout<< op.resta(x,y);
		cout<<endl;
		system("pause");
		this->mostrarOpcion();
		break;
	case 3: break;
	default:  
		cout<< "valor invalido. Presione una tecla para continuar";
		cin.get();
		cin.get();
		system("cls");
		this->mostrarOpcion();
		break;
	}
}
