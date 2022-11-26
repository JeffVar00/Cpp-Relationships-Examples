#include "Persona.h"

Persona::Persona(){
	this->id= "";
	this->c=new Carro();
}

void Persona::setId(string id){
	this->id = id;
}

string Persona::getId(){
	return this->id;
}

void Persona::setCarro (Carro *cc)
{
	c=cc;
}

Carro* Persona::getCarro()
{
	return c;
}

void Persona::ingresarCarro(string placa){
	this->c->setUsuario(this->id);
	this->c->setPlaca(placa);
}
void Persona::imprimir(){
	cout<<"Datos"<<endl;
	cout<<"Id: "<<this->id<<endl;
	this->c->imprimir();
}
Persona::~Persona(){
}
