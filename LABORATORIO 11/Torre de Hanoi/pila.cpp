#include"pila.h"

Pila::Pila(int len){
    tamanio=len;
    t= new int[len];
    top=-1;
}
	
Pila::~Pila(){
    delete []t;
}

void Pila::push(int d){
     if(top<tamanio-1){
    top++;
    t[top]=d;
    }
}

int Pila::pop(){
    if(top>-1){
    	top--;
    	return t[top+1];
    }
}

void Pila::printstack(){
    int cur=top;
    while(cur>-1){
        cout<<t[cur]<<" - ";
        cur--;
    }
}
