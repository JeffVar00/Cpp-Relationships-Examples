#include "Rueda.h"

Rueda::Rueda(){ 
	cout<<"Se ha creado una Rueda"<<endl;
	tamano= 0;
	presion= 0;
}

Rueda::Rueda(int t, float p)  { 
	cout<<"Se ha creado una Rueda"<<endl;
	tamano=t;
	presion= p;
}
Rueda::~Rueda()  { 
	cout<<"Se ha destruido una rueda"<<endl;
}
	
	int Rueda::getTamano(){
		return tamano;
	}
	float Rueda::getPresion(){
		return presion;
	}
	
	void Rueda::setTamano(int t){
		tamano=t;
	}
	
	void Rueda::setPresion(float p){
		presion=p;
	}
