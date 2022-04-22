#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
#include<vector>

//CHRISTIAN PARDAVE ESPINOZA

using namespace std;

int main(){
	
	cout<<"CHRISTIAN PARDAVE ESPINOZA."<<endl;
	
	int num,residuo,aux;
	vector<int>binario;
	
	cout<<"Ingrese un numero: "; cin>>num;
	int i=0;
	do{
		binario.push_back(num%2);
		aux=num/2;
		num/=2;
		i++;
	}while(aux!=1);
	for(auto i=binario.begin(); i!=binario.end();i++){
		cout<<*i;
	}

	

	getch();
	return 0;	
}