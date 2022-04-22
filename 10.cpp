#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
#include<vector>

//CHRISTIAN PARDAVE ESPINOZA


using namespace std;

int main(){
	
	cout<<"CHRISTIAN PARDAVE ESPINOZA."<<endl;
	
	string contra,aux;
	
	cout<<"Establezca su contrasenia: "; cin>>contra;
	
	cout<<"Introduzca su contrasenia: "; cin>>aux;
	while(aux!=contra){
		cout<<"Error: Ingrese de nuevo: "; cin>>aux;
	}
	cout<<"Muy bien, contrasenia correcta."<<endl;

	
	
	getch();
	return 0;	
}