#include<iostream>
#include"rectangulo.h"

rectangulo::rectangulo(float _base,float _altura){
	base = _base;
	altura = _altura;
}

rectangulo::~rectangulo(){
}

void rectangulo::area() {
	cout<<"El area del rectangulo es: "<<base*altura<<endl;
}
void rectangulo::perimetro() {
	cout<<"El perimetro del rectangulo es: "<<(base*2)+(altura*2)<<endl;
}