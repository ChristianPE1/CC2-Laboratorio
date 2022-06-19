#ifndef COLA_H
#define COLA_H
#include"nodo.h"
#include<iostream>

using namespace std;

class Cola{
	private:
	    nodo *inicio;
	    nodo *fondo;
	public:
	    Cola();
	    ~Cola();
	    void insertar(int x);
	    int eliminar();
	    void imprimir();
	    bool vacio();
	    nodo* buscar(int);
	    int getPrimero();
};

#endif