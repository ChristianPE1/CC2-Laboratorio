#include<iostream>
#include<conio.h>
#include"cola.h"
#include"nodo.h"

using namespace std;


int main(){
	
	cout<<"Christian Pardave Espinoza:\n"<<endl;
	
	Cola* cola1=new Cola();
	cola1->insertar(15);
	cola1->insertar(8);
	cola1->insertar(26);
	cola1->insertar(77);
	cola1->imprimir();
	cout<<"Eliminamos "<<cola1->eliminar()<<" de la cola\n";
	cola1->imprimir();
	
	int a_buscar;
	
	cout<<"\nNumero a buscar: "; cin>>a_buscar;
	if(cola1->buscar(a_buscar)==NULL)
		cout<<"El numero no se encuentra en la cola."<<endl;
	else
		cout<<"El numero si se encuentra en la cola."<<endl;


	delete cola1;
	
	//PROGRAMA ADICIONAL
	
	cout<<"\nPrograma de Comparacion:"<<endl;
	Cola* cVarones = new Cola();
	Cola* cMujeres = new Cola();
	cVarones->insertar(20); cVarones->insertar(15);
	cMujeres->insertar(13); cMujeres->insertar(18); cMujeres->insertar(23);

	int n,may_V=0,may_M=0;
	cout<<"Cuantas iteraciones?: "; cin>>n;
	
	for(int i=0;i<n;i++){	
		if(cVarones->getPrimero() > cMujeres->getPrimero()){
			may_V++;
			int aux1=cVarones->getPrimero(),aux2=cMujeres->getPrimero();
			cVarones->eliminar(); cMujeres->eliminar();
			cVarones->insertar(aux1); cMujeres->insertar(aux2);
		}
		else{
			may_M++;
			int aux1=cVarones->getPrimero(),aux2=cMujeres->getPrimero();
			cVarones->eliminar(); cMujeres->eliminar();
			cVarones->insertar(aux1); cMujeres->insertar(aux2);
		}
	}
	
	cout<<"Las mujeres fueron mayores en "<<may_M<<" veces."<<endl;
	cout<<"Los varones fueron mayores en "<<may_V<<" veces."<<endl;
	
	getch();
	return 0;
}