#include<iostream>
#include<conio.h>

using namespace std;

int potencia(int,int);

int main(){
	
	cout<<"CHRISTIAN PARDAVE ESPINOZA"<<endl;
	
	int num,pot;
	cout<<"Ingrese su numero: "; cin>>num;
	cout<<"Potencia: "; cin>>pot;
	cout<<"Resultado: "<<potencia(num,pot);
	
	getch();
	return 0;	
}

int potencia(int a,int b){
	int res=1;
	for(int i=0;i<b;i++)
		res*=a;
	return res;
}

