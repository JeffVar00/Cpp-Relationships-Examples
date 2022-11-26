#ifndef MOTOR_H
#define MOTOR_H
#include <iostream>
using namespace std;
class Motor
{
private:
	int estado;
public:
	Motor();
	virtual ~Motor();
	
	void arrancar ();
	
	void parar ();
	
	void setEstado (int e);
	int getEstado ();
};
#endif
