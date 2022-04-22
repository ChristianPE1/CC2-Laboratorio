#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
#include<vector>

//CHRISTIAN PARDAVE ESPINOZA

using namespace std;

int main(){
	
	cout<<"CHRISTIAN PARDAVE ESPINOZA."<<endl;
	int suma=0,aux;
	for(int i=0;i<10;i++){
		cout<<"Ingrese un numero: ";cin>>aux;
		if(aux<0)
			suma+=aux;
	}
	cout<<"Suma de numero negativos: "<<suma;
	
	
	getch();
	return 0;	
}