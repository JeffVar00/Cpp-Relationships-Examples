#include "Motor.h"

Motor::Motor() {
	cout<<"Se ha creado un motor"<<endl;
	estado =0;
}
Motor::~Motor() { cout<<"Ha destruido un motor"<<endl;}

void Motor::arrancar ()  {  
	estado=1;
	cout<<"El motor se encuentra encendido"<<endl; 
}

void Motor::parar () { 
	estado=0;
	cout<<"El motor  se encuentra apagado"<<endl;
}

void Motor::setEstado (int e) {estado = e;}
int Motor::getEstado () {return (estado);}
