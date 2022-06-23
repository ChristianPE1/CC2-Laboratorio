#include<iostream>
#include<conio.h>

using namespace std;

struct fecha_cumple{
	int dia;
	int mes;
	int anio;
};

struct compa{
	char nombre[10];
	fecha_cumple cumpleanio;
};

int main(){
	
	cout<<"Christian Pardave Espinoza:\n"<<endl;
	
	int n;
	
	cout<<"Cuantos estudiantes?: "; cin>>n;
	struct compa companieros[n];
	for(int i=0;i<n;i++){
		cout<<"Ingresar datos del estudiante "<<i+1<<": "<<endl;
		cout<<"Nombre?: "; cin>>companieros[i].nombre;
		cout<<"Fecha de cumpleanio:"<<endl;
		cout<<"Dia: "; cin>>companieros[i].cumpleanio.dia;
		cout<<"Mes: "; cin>>companieros[i].cumpleanio.mes;
		cout<<"Anio: "; cin>>companieros[i].cumpleanio.anio;
	}
	
	cout<<"\nNombre\tFecha de Cumpleanio"<<endl;
	for(int i=0;i<n;i++){
		cout<<companieros[i].nombre<<"\t";
		cout<<companieros[i].cumpleanio.dia<<"/"<<companieros[i].cumpleanio.mes<<"/";
		cout<<companieros[i].cumpleanio.anio<<endl;
	}
	
	getch();
	return 0;
}




