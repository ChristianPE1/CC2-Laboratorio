#include"cola.h"

Cola::Cola(){
	inicio=NULL;
	fondo=NULL;
}

Cola::~Cola(){
	nodo* aux=inicio;
	nodo* borrar;
	while (aux!=NULL){
		borrar=aux;
		aux=aux->getConx();
		delete borrar;
	}
}

void Cola::insertar(int x){
	nodo* nuevo;
	nuevo=new nodo();
	nuevo->setNum(x);
	nuevo->setConx(NULL);
	if(vacio()){
		inicio=nuevo;
		fondo=nuevo;
	}
	else{
		fondo->setConx(nuevo);
		fondo=nuevo;
	}
}

int Cola::eliminar(){
	if(!vacio()){
		int informacion=inicio->getNum();
		nodo* a_borrar=inicio;
		if(inicio==fondo){
			inicio=NULL;
			fondo=NULL;
		}
		else{
			inicio=inicio->getConx();
		}
		delete a_borrar;
		return informacion;
	}
	else
		return -1;
}

void Cola::imprimir(){
	nodo* aux=inicio;
	cout<<"ELEMENTOS DE LA COLA:\n";
	while(aux!=NULL){
		cout<<aux->getNum()<<"-";
		aux=aux->getConx();
	}
	cout<<"\n";
}

int Cola::getPrimero(){
	nodo* primero=inicio;
	int aux=primero->getNum();
	//cout<<aux<<endl;
	return aux;
}

bool Cola::vacio(){
	if(inicio==NULL)
		return true;
	else
		return false;
}

nodo* Cola::buscar(int _numBuscar){
	nodo *a_buscar=inicio;
	while((a_buscar!=NULL) && (a_buscar->getNum()!=_numBuscar))
		a_buscar=a_buscar->getConx();
	return a_buscar;
}

