#include<iostream>
#include<conio.h>

using namespace std;

struct persona{
	char nombre[10];
	int edad;
	float estatura;
};

typedef persona Persona;
bool val_(Persona m[],int i);

int main(){
	
	cout<<"Christian Pardave Espinoza:\n"<<endl;
	
	Persona _personas[10];
	
	for(int i=0;i<10;i++){
		cout<<"Ingresar datos de la persona "<<i+1<<": "<<endl;
		cout<<"Nombre?: "; cin>>_personas[i].nombre;
		cout<<"Edad?: "; cin>>_personas[i].edad;
		cout<<"Estatura?: "; cin>>_personas[i].estatura;
	}
	
	cout<<"\nNombre\tEdad\tEstatura:"<<endl;
	for(int i=0;i<10;i++){
		if(val_(_personas,i)==true){
			cout<<_personas[i].nombre<<"\t";
			cout<<_personas[i].edad<<"\t";
			cout<<_personas[i].estatura<<"m\t";
			cout<<endl;
		}
	}
	
	getch();
	return 0;
}

bool val_(Persona m[],int i){
	if((m[i].edad<20) && (m[i].estatura<1.7))
		return true;
	else
		return false;
}
