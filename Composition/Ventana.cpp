#include "Ventana.h"

Ventana::Ventana() { 
	estado=false;
	polarizada=false;
	electrica=false;
	cout<<"Se ha creado una Ventana"<<endl;
}
Ventana::~Ventana() { cout<<"Se ha destruido una Ventana"<<endl;} 
bool Ventana::getEstado() {  return estado;}
bool Ventana::getPolarizada() { return polarizada ; }
bool Ventana::getElectrica() { return electrica  ;  }
void Ventana::setEstado(bool e) {   estado=e; }
void Ventana::setPolarizada(bool p) {  polarizada= p; }
void Ventana::setElectrica(bool e) {  electrica= e ;  }
void Ventana::abrir()   { 
	estado=true;
	cout<<"La Ventana esta abierta"<<endl;
}
void Ventana::cerrar ()  { 
	estado=false;
	cout<<"La  Ventana esta cerrada"<<endl;
}
