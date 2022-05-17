#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	
	cout<<"CHRISTIAN PARDAVE ESPINOZA:"<<endl;
	
	int a,b;
	int *aux2,*aux,*aux3;
	
	a=10;
	b=5;
	
	cout<<"Primer valor de a: "<<a<<endl;
	cout<<"Primer valor de b: "<<b<<endl;
	
	*aux2=b;
	aux=&a;
	b=*aux;
	a=*aux2;
	
	cout<<"\nNuevo valor de a: "<<a<<endl;
	cout<<"Nuevo valor de b: "<<b<<endl;

	getch();
	return 0;	
}