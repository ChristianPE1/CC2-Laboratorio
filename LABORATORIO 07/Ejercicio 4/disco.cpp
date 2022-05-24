#include"disco.h"

disco::disco(){
	capacidad=0;
}

disco::disco(int _capacidad){
	capacidad=_capacidad;
}

disco::~disco(){
}

void disco::setCapacidad(int _capacidad){
	capacidad=_capacidad;
}

void disco::imprimir(){
	cout<<"El disco con capacidad de "<<capacidad<<"gb tiene contenido de "<<contenido<<" de genero "<<genero<<endl;
}