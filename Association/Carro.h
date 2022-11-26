#ifndef CARRO_H
#define CARRO_H
#include <iostream>


using namespace std;
class Carro {
public:
	Carro();
	virtual ~Carro();
	void setPlaca(string placa);
	void setUsuario(string usuario);
	string getPlaca();
	string getUsuario();
	void imprimir();
private:
	string  placa;
	string usuario;
};

#endif

