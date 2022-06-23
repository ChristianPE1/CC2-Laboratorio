#include<iostream>
#include<conio.h>

using namespace std;

struct persona{
	char nombre[10];
	char sexo[9];
	float sueldo;
};

typedef persona Persona;

int main(){
	
	cout<<"Christian Pardave Espinoza:\n"<<endl;
	
	int n;
	cout<<"Cuantas personas?: "; cin>>n;
	
	Persona _personas[10];
	
	for(int i=0;i<n;i++){
		cout<<"Ingresar datos de la persona "<<i+1<<": "<<endl;
		cout<<"Nombre?: "; cin>>_personas[i].nombre;
		cout<<"Sexo?: "; cin>>_personas[i].sexo;
		cout<<"Sueldo: "; cin>>_personas[i].sueldo;
	}
	
	cout<<"\nNombre\tSexo\t\tSueldo:"<<endl;
	float max=0,min=_personas[0].sueldo;
	for(int i=0;i<n;i++){
		cout<<_personas[i].nombre<<"\t";
		cout<<_personas[i].sexo<<"\t";
		cout<<"S/"<<_personas[i].sueldo<<"\t";
		if(_personas[i].sueldo>max)
			max=_personas[i].sueldo;
		else if(_personas[i].sueldo<min)
			min=_personas[i].sueldo;
		cout<<endl;
	}
	cout<<"\nSueldo Maxmimo: "<<max<<endl;
	cout<<"Sueldo Minimo: "<<min<<endl;
	getch();
	return 0;
}
