#include"persona.h"
#include<iostream>

using namespace std;

persona::persona(){
	edad = 0;
	nombre = "Sin_Definir";
}

persona::persona(int _edad,string _nombre){
	edad=_edad;
	nombre=_nombre;
}

persona::~persona(){
}
