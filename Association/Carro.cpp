#include "Carro.h"

Carro::Carro(){
	this->placa="";
	this->usuario ="";
}

void Carro::setPlaca(string placa){
	this->placa = placa;
}
void Carro::setUsuario(string usuario){
	this->usuario = usuario;
}
string Carro::getPlaca(){
	return this->placa;
}
string Carro::getUsuario(){
	return this->usuario;
}
void Carro::imprimir(){
	cout<<"Placa: "<<this->placa<<endl;
	cout<<"Usuario: "<<this->usuario<<endl;
}

Carro::~Carro(){}
