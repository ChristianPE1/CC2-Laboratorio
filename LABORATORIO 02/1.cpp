#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	
	//CHRISTIAN PARDAVE ESPINOZA
	
	int suma=0;
	
	for(int i=2;i<=100;i+=2){
		suma+=i;
	}
	cout<<"Numeros pares sumados de 2-100: "<<suma<<endl;
	
	getch();
	return 0;	
}