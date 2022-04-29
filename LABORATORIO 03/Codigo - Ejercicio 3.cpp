#include<iostream>
#include<conio.h>

using namespace std;

void edad(int,int,int,int,int,int);

int main(){
	
	cout<<"CHRISTIAN PARDAVE ESPINOZA"<<endl;
	
	int dia,mes,anio,diaA,mesA,anioA;
	cout<<"Fecha actual:"<<endl;
	cout<<"Dia: "; cin>>diaA;
	cout<<"Mes: "; cin>>mesA;
	cout<<"Anio: "; cin>>anioA;
	cout<<"Fecha de nacimiento"<<endl;
	cout<<"Dia: "; cin>>dia;
	cout<<"Mes: "; cin>>mes;
	cout<<"Anio: "; cin>>anio;

	edad(dia,mes,anio,diaA,mesA,anioA);
	
	getch();
	return 0;	
}

void edad(int dia,int mes,int anio,int diaA,int mesA,int anioA){
	int aux1,aux2,aux3;
	if(diaA>dia)
		aux1=diaA-dia;
	else if(diaA<dia)
		aux1=diaA;
	if(mesA>mes)
		aux2=mesA-mes;
	else if(mesA<mes){
		aux2=mesA;
		cout<<"Tienes "<<(anioA-anio)-1<<" anios, "<<aux2<<" meses y "<<aux1<<" dias."<<endl;
	}

		

}

