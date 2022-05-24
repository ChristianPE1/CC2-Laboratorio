#include"alumno.h"
#include<iostream>

using namespace std;

alumno::alumno(){
	edad=0;
	nombre="Sin_definir";
}

alumno::alumno(int _edad,string _nombre){
	edad=_edad;
	nombre=_nombre;
}

alumno::~alumno(){
}

void alumno::setData(){
	cout<<"Ingrese su edad: "; cin>>edad;
	cout<<"Ingrese su nombre: "; cin>>nombre;
}

void alumno::imprimir(){
	cout<<"Edad: "<<edad<<" anios."<<endl;
	cout<<"Nombre: "<<nombre<<"."<<endl;	
}
