#include<iostream>
#include<conio.h>

using namespace std;

template<class T,class U>
T o_bas(T uno,U dos,U &suma,U &resta,U &div,U &mult);

int main(){

	cout<<"CHRISTIAN PARDAVE ESPINOZA:"<<endl;

	int a;
	float b,suma,resta,mult,div;
	
	cout<<"Ingrese dos numeros (entero,flotante): "<<endl;
	cin>>a;
	cin>>b;

	o_bas(a,b,suma,resta,div,mult);
	cout<<"Suma: "<<suma<<endl;
	cout<<"Resta: "<<resta<<endl;
	cout<<"Division: "<<div<<endl;
	cout<<"Multiplicacion: "<<mult<<endl;
	
	getch();
	return 0;
}

template<class T,class U>
T o_bas(T uno,U dos,U &suma,U &resta,U &div,U &mult){
	suma=uno+dos;
	resta=uno-dos;
	div=uno/dos;
	mult=uno*dos;
	
	return 0;
}