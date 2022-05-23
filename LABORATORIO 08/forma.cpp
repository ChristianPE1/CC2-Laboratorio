#include"forma.h"

forma::forma(){
	color="Sin definir";
	nombre="Sin_Definir";
}

forma::forma(string _color,string _nombre,int _x,int _y){
	color=_color;
	nombre=_nombre;
	x=_x;
	y=_y;
}

forma::~forma(){
}

void forma::imprimir(){
	cout<<"Color: "<<color<<endl;
	cout<<"Centro (x,y): ["<<x<<":"<<y<<"]"<<endl;
}

string forma::getColor(){
	return color;
}

void forma::setColor(string _color){
	color=_color;
}

void forma::mover(int _x,int _y){
	x=_x;
	y=_y;
}

int forma::area(){
	return 0;
}

