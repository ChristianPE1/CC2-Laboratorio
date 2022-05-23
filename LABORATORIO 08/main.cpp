#include<iostream>
#include"rectangulo.h"
#include<conio.h>

using namespace std;

int main(){
	
	cout<<"CHRISTIAN PARDAVE ESPINOZA."<<endl;
	
	forma *aux[1];
	aux[0]=new rectangulo(10.5,20.1,"verde","Rectangulo");
	aux[0]->imprimir();
	
	for(int i=0;i<1;i++)
		delete aux[i];
	
	
	getch();
	return 0;
}