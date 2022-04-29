#include<iostream>
#include<conio.h>

using namespace std;

int conval(int);

bool par(int);

void print(int);

int main(){
	
	cout<<"CHRISTIAN PARDAVE ESPINOZA"<<endl;
	
	int num2=0;
	num2=conval(num2);
	cout<<num2<<endl;
	
	if(par(num2)==true)
		cout<<num2<<" si es par."<<endl;
	else
		cout<<num2<<" no es par."<<endl;
	
	print(num2);
	
	getch();
	return 0;	
}

int conval(int num2){
	cout<<"Ingrese su numero: "; cin>>num2;
	while(num2<0 || num2>100){
		cout<<"Ingrese otra vez: "; cin>>num2;
	}
	return num2;
}

bool par(int a){
	if(a%2==0)
		return true;
	else
		return false;		
}

void print(int a){
	int suma=0;
	for(int i=1;i<a;i+=2)
		suma+=i;
	cout<<"Suma de los impares desde 0 a "<<a<<": "<<suma<<endl;
}

