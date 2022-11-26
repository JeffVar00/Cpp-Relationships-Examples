#ifndef RUEDA_H
#define RUEDA_H
#include <iostream>
using namespace std;
class Rueda
{  private:
	int tamano;
	float presion;
	
public:
	Rueda  ();
	Rueda  (int t, float p);
		virtual ~Rueda  ();
		int getTamano();
		float getPresion();
		void setTamano(int t);
		void setPresion(float p);
};
#endif
