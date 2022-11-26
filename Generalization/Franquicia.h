#ifndef FRANQUICIA_H
#define FRANQUICIA_H
#include <iostream>
#include "Presidente.h"
using namespace std;

class Franquicia {
public:
	Franquicia ();
	Franquicia (string n,  Presidente* presi);
	void setNombre (string nom);
	void setPresi (Presidente* presi );
	string  getNombre();
	Presidente*  getPresi();
	virtual ~Franquicia ();
private:
	string nombre;
	Presidente* presi;
};

#endif

