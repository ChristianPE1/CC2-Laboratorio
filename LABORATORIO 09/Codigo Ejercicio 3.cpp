#include<iostream>
#include<conio.h>

using namespace std;

template<class T,class U>
U correo(T letra,U palabra);

int main(){
	
	cout<<"CHRISTIAN PARDAVE ESPINOZA:"<<endl;
	
	char a;
	string pal;
	
	cout<<"Ingrese un caracter (Inicial de su nombre): "; cin>>a;
	cout<<"Ingrese una palabra (Apellido): "; cin>>pal;
		
	cout<<correo(a,pal)<<endl;

	getch();
	return 0;
}

template<class T,class U>
U correo(T uno,U dos){
	string conc;
	conc+=uno;
	conc+=dos;
	conc+="@unsa.edu.pe";
	return conc;
}