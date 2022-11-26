#ifndef PERSONA_H
#define PERSONA_H
#include "Carro.h"
#include <iostream>
using namespace std;

class Persona {
public:
	Persona();
	void setId(string id);
	string getId();
	void setCarro (Carro *c);
	Carro* getCarro();
	void ingresarCarro(string placa);
	void imprimir();
	virtual ~Persona();
	
private:
	string id;
	Carro *c;
};

#endif

