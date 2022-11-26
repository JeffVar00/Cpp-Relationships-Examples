#include "Carro.h"

Carro::Carro(){
	int i=0;
	litros_gasolina= 0;
	m= new Motor();
	puerta_iz= new Puerta();
	puerta_de= new Puerta();
	while (i <4)
	{
		v[i]= new Rueda();
		i++;
	}
	cout<<"Se ha creado un carro"<<endl;
}

Carro::Carro(int litros, Motor *m2, Puerta* pi, Puerta* pd, Rueda* r1, Rueda* r2, Rueda* r3, Rueda* r4){
	litros_gasolina=litros ;
	m= m2;
	puerta_iz= pi;
	puerta_de=pd ;
	v[0]= r1;
	v[1]= r2;
	v[2]= r3;
	v[3]=r4 ;
	cout<<"Se ha creado un carro"<<endl;
}


Motor* Carro::getMotor() { 
	return m;
}
void  Carro::setMotor(Motor* mm) {
	m=mm;
}
Rueda* Carro::getRueda(int i) {
	return v[i];
}
void Carro::setRueda(Rueda *p, int i ) {
	v[i]= p;
}
void Carro::setPuerta_iz (Puerta *p ) {
	puerta_iz = p;
}
void Carro::setPuerta_de (Puerta *p ) {
	puerta_de = p;
}
Puerta * Carro::getPuerta_iz() {
	return (puerta_iz);
}
Puerta * Carro::getPuerta_de ( ) {
	return (puerta_de);
}

Carro::~Carro() {
	delete m;
	delete puerta_iz;
	delete puerta_de;
	for (int i=0; i<4; i++){ delete v[i];}
	cout<<"Se ha destruido un carro"<<endl;
} 
