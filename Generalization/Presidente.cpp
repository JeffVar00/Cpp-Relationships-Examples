#include "Presidente.h"

Presidente::Presidente(){
	this->nombre= "Sin definir";
	this->cedula= "Sin definir";
	cout<<"Se ha construido un funcionario"<<endl;
	
}
Presidente::Presidente (string n, string s){
	
	this->nombre= n;
	this->cedula= s;
	cout<<"Se ha construido un presidente"<<endl;
}
void Presidente::setNombre (string nom) { 
	this->nombre= nom;
}		
void Presidente::setCedula (string cel) {
	this->cedula= cel;
}	
string Presidente::getNombre () {
	return (this->nombre); 
}		
string Presidente::getCedula() {
	return (this->cedula); 
}	

Presidente::~Presidente (){
	cout<<"Se ha destruido un presidente"<<endl;
	
}
