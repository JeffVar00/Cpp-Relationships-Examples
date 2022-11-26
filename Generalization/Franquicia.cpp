#include "Franquicia.h"

Franquicia::Franquicia(){ 
	this->nombre= "Sin definir";
	this->presi= NULL; 
	cout<<"Se ha creado una nueva Franquicia"<<endl; 
}
Franquicia::Franquicia (string n,  Presidente* presi) { 
	this->nombre= n;
	this->presi= presi;
	cout<<"Se ha creado una  Franquicia"<<endl; 
}

void Franquicia::setNombre (string nom) {
	this->nombre= nom; 
}
void Franquicia::setPresi (Presidente* presi ) {
	this->presi=presi; 
}
string  Franquicia::getNombre () {
	return (this->nombre); 
}
Presidente*  Franquicia::getPresi(){
	return (this->presi); 
}

Franquicia::~Franquicia () {
	cout<<"Se ha destruido una Franquicia"<<endl; 
}
