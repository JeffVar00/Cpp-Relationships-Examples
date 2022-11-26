#include<iostream>
#include "Persona.h"
using namespace std;

int main () {
	Persona *p = new Persona();
	p->setId("123");
	Carro *c =  new Carro();
	p-> setCarro(c);
	p->ingresarCarro("405689");
	p->imprimir();
	cin.get();
	return 0;
}
