#include"rectangulo.h"

rectangulo::rectangulo(){
	lado_men=0;
	lado_may=0;
	color="Sin_definir";
	nombre="Sin_definir";
}

rectangulo::rectangulo(float lado_menor,float lado_mayor,string _color,string _nombre){
	lado_men=lado_menor;
	lado_may=lado_mayor;
	color=_color;
	nombre=_nombre;
}

rectangulo::~rectangulo(){
}

int rectangulo::area(){
	return lado_men*lado_may;
}

int rectangulo::perimetro(){
	return 2*lado_men+2*lado_may;
}

void rectangulo::imprimir(){
	cout<<"Figura: "<<nombre<<endl;
	cout<<"Lados: "<<lado_men<<" - "<<lado_may<<endl;
	forma::imprimir();
}

void rectangulo::cambiar_tam(int escala){
	lado_men=lado_men*escala;
	lado_may=lado_may*escala;
}


