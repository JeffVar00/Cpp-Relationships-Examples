#include "Puerta.h"

Puerta::Puerta() { 
	v= new Ventana();
	cout<<"Se ha creado una puerta"<<endl;
}
Puerta::Puerta(Ventana *v2, bool e2) { 
	v= v2;
	estado= e2;
	cout<<"Se ha creado una puerta"<<endl;
}
Puerta::~Puerta() { 
		cout<<"Se ha destruido una puerta"<<endl;
		delete v; 
} 
		

void Puerta::abrir()   { 
		cout<<"La puerta esta abierta"<<endl;
		estado = true;	
}
				
void Puerta::cerrar ()  { 
		cout<<"La  puerta esta cerrada"<<endl;
		estado =false;
}
					
Ventana* Puerta::getVentana(){
	return v;
}
void  Puerta::setVentana(Ventana* v){
	this-> v= v;
}
bool Puerta::getEstado(){
	return estado;
}
bool Puerta::setEstado(bool e){
	estado= e;
}
