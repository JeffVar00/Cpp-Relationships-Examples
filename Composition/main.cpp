#include <iostream> 
#include "Carro.h"
using namespace std;



int main  ()
{
	cout<<"Vamos a crear un objeto de tipo carro, veamos que sucede: " <<endl;
	Carro * car= new Carro();



     cout<<"Observe que mediante el  objeto car podemos acceder a los miembros de las clases  que lo componen:"<<endl;
	 car->getPuerta_iz()->abrir();
	 car->getPuerta_de()->abrir();

	 car->getPuerta_de()->getVentana()->abrir();

cout<<"estado del motor "<<car->getMotor()->getEstado()<<endl;
	car->getMotor()->arrancar();

cout<<"estado del motor "<<car->getMotor()->getEstado()<<endl;



	cout<<endl<<endl<<"Se destruyen los objetos"<<endl;
	delete car;
	system ("pause");
}
