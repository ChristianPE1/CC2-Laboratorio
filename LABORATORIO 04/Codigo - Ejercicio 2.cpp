#include<iostream>
#include<conio.h>

using namespace std;

bool esta(int a[],int n,int num){
	for(int i=0;i<n;i++){
		if(a[i]==num)
			return true;
	}
	return false;
}

int main(){
	
	cout<<"CHRISTIAN PARDAVE ESPINOZA: "<<endl;
	
	int busca,numeros[8];
	
	cout<<"Ingrese 8 numeros enteros: "<<endl;
	
	for(int i=0;i<8;i++){
		cout<<"Valor?: "; cin>>numeros[i];
		}
	
	cout<<"Numero a buscar?: "; cin>>busca;
	
	if(esta(numeros,8,busca)==true)
		cout<<"El numero si esta en el arreglo."<<endl;
	else
		cout<<"El numero no esta en el arreglo."<<endl;

	getch();
	return 0;	
}