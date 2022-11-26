#include<iostream>
#include "Presidente.h"
#include "Franquicia.h"

using namespace std;

int main () {
	string x;
	Franquicia* f1= new Franquicia (); 
	Presidente* presi1= new Presidente (); 
	cout<<endl<<"Digite el nombre de la Franquicia"<<endl;
	cin>>x;
	f1->setNombre(x);
	cout<<"Digite el nombre del presidente"<<endl;
	cin>>x;
	presi1->setNombre(x);
	cout<<"Digite la cedula  del presidente"<<endl;
	cin>>x;
	presi1->setCedula(x);
	f1->setPresi(presi1);
	cout<<endl<<"Ha continuacion se muestran los datos ingresados:"<<endl;
	cout<<"Nombre de Franquicia f1: "<<f1->getNombre()<<endl;
	cout<<"Nombre del presidente: "<<f1->getPresi()->getNombre()<<endl;
	cout<<"Cedula del presidente: "<<f1->getPresi()->getCedula()<<endl;
	cout<<endl<<"Borremos la Franquicia f1:"<<endl;
	delete (f1);  //Nota: dentro del todo no debe eliminarse la parte. 
	//supongamos que el presidente no se elemina pues puede pasar a ser presidente  de otra franquicia de la misma organizacion
	
	cout<<endl<<"Aunque se ha eliminado la Franquicia f1 el presidente aun sigue existiendo:"<<endl;
	cout<<"Nombre del presidente: "<<presi1->getNombre()<<endl;
	cout<<"Cedula del presidente: "<<presi1->getCedula()<<endl;
	
	cout<<endl<<"Borremos el presidente:"<<endl;
	delete (presi1);
	cout <<endl<<"------------------------------------------------------------"<<endl;
	cout <<"Hagamos otra prueba llamando esta vez a otro constructor diferente."<<endl;
	Presidente *presi2= new Presidente ("Marco", "1-569-855"); 
	Franquicia *f2= new Franquicia ("OSA", presi2);
	
	cout<<endl<<"Ha continuacion se muestran los datos:"<<endl;
	cout<<"Nombre de Franquicia f2: "<<f2->getNombre()<<endl;
	cout<<"Nombre del presidente presi2: "<<f2->getPresi()->getNombre()<<endl;
	cout<<"Cedula del presidente presi2: "<<f2->getPresi()->getCedula()<<endl;
	
	cout<<endl<<"Borremos la Franquicia f2:"<<endl;
	delete (f2);
	cout<<endl<<"Aunque se ha eliminado la Franquicia f2 el presidente presi2 aun sigue existiendo"<<endl;
	cout<<"Nombre del presidente: "<<presi2->getNombre()<<endl;
	cout<<"Cedula del presidente: "<<presi2->getCedula()<<endl;
	delete (presi2);
	cin.get();
	return 0;
}

