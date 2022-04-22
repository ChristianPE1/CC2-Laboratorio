#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
#include<vector>

//CHRISTIAN PARDAVE ESPINOZA


using namespace std;

int main(){
	
	cout<<"CHRISTIAN PARDAVE ESPINOZA."<<endl;	
	string nombre,apellidoP,apellidoM;
	
	cout<<"Ingrese su nombre: ";cin>>nombre;
	cout<<"Ingrese sus apellidos: ";cin>>apellidoP>>apellidoM;
	
	cout<<"Correo UNSA generado: "<<nombre[0]<<apellidoP<<apellidoM[0]<<"@unsa.edu.pe"<<endl;
	
	
	getch();
	return 0;	
}