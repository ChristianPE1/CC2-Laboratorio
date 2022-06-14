#ifndef LISTA_H
#define LISTA_H
#include<iostream>
#include"nodo.h"

using namespace std;

class lista{
	private:
		nodo *head;
	public:
		lista();
		void setHead(nodo*);
		void agregar(nodo*);
		nodo* getHead();
		nodo* getUltimo();
		nodo* getPrimero();
		nodo* buscar(int);
		void eliminar(int);
		void eliminar_pri();
		void eliminar_ult();
		
		
		virtual ~lista();
};

#endif
