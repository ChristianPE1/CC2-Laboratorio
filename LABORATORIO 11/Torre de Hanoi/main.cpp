#include<iostream>
#include<conio.h>
#include"pila.h"
#include<stdlib.h>

using namespace std;

void moverTorre(int, Pila*,Pila*,Pila*);

int main(){
	
	cout<<"Christian Pardave Espinoza:"<<endl;
	
    int discos;
    cout<<"Numero de discos: "; cin>>discos;
    Pila* source=new Pila(discos);
    for(int i=0; i<discos; i++){
        source->push(discos-i);
    }
    cout<<"Fuente: "<<endl;
    source->printstack();
    Pila* temp=new Pila(discos);
    Pila* destination=new Pila(discos);
    moverTorre(discos,source,temp,destination);
    cout<<"\nImpriendo lugar: "<<endl;
    destination->printstack();
    getch();
    return 0;
}

void moverTorre(int disk, Pila *source, Pila *destination, Pila *temp){
    if (disk==1){
        destination->push(source->pop());
    }
    else{
        moverTorre(disk-1,source,temp,destination);
        destination->push(source->pop());
        moverTorre(disk-1,temp,destination,source);
    }
}
