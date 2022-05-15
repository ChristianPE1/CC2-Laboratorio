#include<iostream>
#include"busqueda.h"
#include<time.h>
#include<stdlib.h>

busqueda::busqueda(){
	srand(time(NULL));
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			matriz[i][j]=1+rand()%(10-1);
		}
	}
}

busqueda::~busqueda(){
}

void busqueda::imprimir(){
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<matriz[i][j]<<" ";
		}
		cout<<endl;
	}
}

void busqueda::buscar(int num_a_buscar){
	int fila=0,col=0,aux=0;
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			if(matriz[i][j]==num_a_buscar){
				fila=i;
				col=j;
				cout<<num_a_buscar<<" se encuentra en la fila "<<fila<<" y columna "<<col<<" ["<<fila<<":"<<col<<"]."<<endl;
				aux=1;
			}
		}
	}
	if(aux==0)
		cout<<num_a_buscar<<" no se encuentra en la matriz."<<endl;
}