#include<iostream>
#include<conio.h>

using namespace std;

struct notas{
	int pri_n,seg_n,ter_n,proyecto;
};

struct estudiante{
	char nombre[10];
	char grupo;
	notas nota;
};

int main(){
	
	cout<<"Christian Pardave Espinoza:\n"<<endl;
	
	int n;
	
	cout<<"Cuantos alumnos?: "; cin>>n;
	struct estudiante estudiantes[n];
	for(int i=0;i<n;i++){
		cout<<"Ingresar datos del estudiante "<<i+1<<": "<<endl;
		cout<<"Nombre?: "; cin>>estudiantes[i].nombre;
		cout<<"Grupo?: "; cin>>estudiantes[i].grupo;
		cout<<"Notas:"<<endl;
		cout<<"1er fase: "; cin>>estudiantes[i].nota.pri_n;
		cout<<"2da fase: "; cin>>estudiantes[i].nota.seg_n;
		cout<<"3ra fase: "; cin>>estudiantes[i].nota.ter_n;
		cout<<"Proyecto final: "; cin>>estudiantes[i].nota.proyecto;
	}
	
	cout<<"\nNombre\tPromedio Final"<<endl;
	for(int i=0;i<n;i++){
		float promedio=0;
		cout<<estudiantes[i].nombre<<"\t";
		promedio=(estudiantes[i].nota.pri_n)*0.15;
		promedio+=(estudiantes[i].nota.seg_n)*0.2;
		promedio+=(estudiantes[i].nota.ter_n)*0.25;
		promedio+=(estudiantes[i].nota.proyecto)*0.4;
		cout<<promedio<<endl;
	}
	
	getch();
	return 0;
}
