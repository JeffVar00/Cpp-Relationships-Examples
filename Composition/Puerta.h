#ifndef PUERTA_H
#define PUERTA_H
#include "Ventana.h"
#include <iostream>
using namespace std;

class Puerta
{  private:
	Ventana *v;
	bool estado;
	
public:
	Puerta();
	virtual ~Puerta();
	Puerta(Ventana *v2, bool e2);
	void abrir();
	void cerrar ();
	Ventana* getVentana();
	void  setVentana(Ventana* v);
	bool getEstado();
	bool setEstado(bool e);
};
#endif
