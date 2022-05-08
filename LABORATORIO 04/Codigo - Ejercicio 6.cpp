#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	
	cout<<"CHRISTIAN PARDAVE ESPINOZA: "<<endl;
	
	int vector[3][3];
	
	cout<<"Ingrese 9 numeros enteros: "<<endl;

	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<"Valor?: "; cin>>vector[i][j];
			}
		}
		
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<vector[i][j]<<" ";
			}
		cout<<endl;
		}
		
		
	int aux=0,num_fila;
	for(int i=0;i<3;i++){
		int suma=0;
		for(int j=0;j<3;j++)
			suma+=vector[i][j];
		cout<<"Suma de valores de cada fila "<<i+1<<": "<<suma<<endl;
		if(suma>=aux)
			aux=suma;
			num_fila=i+1;
	}
	
	cout<<"La fila "<<num_fila<<" tiene la mayor suma: "<<aux<<endl;

	getch();
	return 0;	
}