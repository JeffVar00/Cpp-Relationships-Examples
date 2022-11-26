#ifndef PRESIDENTE_H
#define PRESIDENTE_H
#include <iostream>
using namespace std;
class Presidente {
public:
	Presidente();
	Presidente (string n, string s);
	void setNombre (string nom);		
	void setCedula (string cel);	
	string getNombre ();		
	string getCedula();	
	virtual ~Presidente ();
private:
	string nombre;
	string cedula;
};
#endif

