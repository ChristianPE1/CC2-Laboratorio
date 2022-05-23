#include<iostream>
#include"forma.h"

class rectangulo:public forma{
	protected:
		float lado_men,lado_may;
	public:
		rectangulo();
		rectangulo(float,float,string,string);
		~rectangulo();
		void imprimir();
		int area();
		int perimetro();
		void cambiar_tam(int);
};