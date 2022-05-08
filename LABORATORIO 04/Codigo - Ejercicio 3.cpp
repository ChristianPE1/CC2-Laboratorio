#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	
	cout<<"CHRISTIAN PARDAVE ESPINOZA: "<<endl;
	
	int arreglo[5][3];
	
	cout<<"Ingrese 15 numeros enteros: "<<endl;

	for(int i=0;i<5;i++){
		for(int j=0;j<3;j++){
			cout<<"Valor?: "; cin>>arreglo[i][j];
			}
		}
		
	for(int i=0;i<5;i++){
		for(int j=0;j<3;j++){
			cout<<arreglo[i][j]<<" ";
			}
		cout<<endl;
		}
			
	
	for(int i=1;i<5;i+=2){
		int suma=0;
		for(int j=0;j<3;j++)
			suma+=arreglo[i][j];
		cout<<"Suma de valores de fila "<<i+1<<": "<<suma<<endl;
	}

	getch();
	return 0;	
}