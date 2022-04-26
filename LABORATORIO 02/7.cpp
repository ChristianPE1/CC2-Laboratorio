#include<iostream>
#include<vector>
#include<conio.h>

using namespace std;

int main(){
	
float notas;

	//CHRISTIAN PARDAVE ESPINOZA

	int n;
	
	cout<<"Cuantos alumnos?: "; cin>>n;
	
	int nota1,nota2,nota3;
	for(int i=0;i<n;i++){
		cout<<"\nEstudiante "<<i+1<<": "<<endl;
		float media=0;
		cout<<"Ingrese sus 3 notas: "; cin>>nota1>>nota2>>nota3;
		media=nota1+nota2+nota3;
		cout<<"Promedio: "<<media/3<<endl;
	}
	
	getch();
	return 0;	
}