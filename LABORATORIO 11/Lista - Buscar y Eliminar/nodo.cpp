#include"nodo.h"

nodo::nodo(){
	num=0;
	conx=NULL;
}
void nodo::setNum(int _numero){
	num=_numero;
}
void nodo::setConx(nodo *_conexion){
	conx=_conexion;
}

int nodo::getNum(){
	return num;
}
nodo* nodo::getConx(){
	return conx;
}
nodo::~nodo(){
}
