#ifndef CARRO_H
#define CARRO_H
#include <iostream>
#include "Rueda.h"
#include "Motor.h"
#include "Puerta.h"
using namespace std;
class Carro
{
private:
	int litros_gasolina;
	Rueda* v[4]; 
	Motor* m;
	Puerta* puerta_iz;
	Puerta* puerta_de;
public:
	Carro ();
	Carro (int litros, Motor *m2, Puerta* pi, Puerta* pd, Rueda* r1, Rueda* r2, Rueda* r3, Rueda* r4);
	Motor* getMotor();
	void  setMotor(Motor* mm);
	Rueda* getRueda(int i);
	void setRueda(Rueda *p, int i );
	void setPuerta_iz (Puerta *p );
	void setPuerta_de (Puerta *p );
	Puerta * getPuerta_iz();
	Puerta * getPuerta_de();
	virtual ~Carro();
	
};
#endif
