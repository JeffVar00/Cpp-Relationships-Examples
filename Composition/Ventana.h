#ifndef VENTANA_H
#define VENTANA_H
#include <iostream>
using namespace std;
class Ventana
{
private:
	bool estado;
	bool polarizada;
	bool electrica;
	
public:
	Ventana();
	~Ventana();
	bool getEstado();
	bool getPolarizada();
	bool getElectrica();
	void setEstado(bool e);
	void setPolarizada(bool p);
	void setElectrica(bool e);
	void abrir();
	void cerrar ();
};

#endif
