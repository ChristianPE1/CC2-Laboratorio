#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
#include<vector>

//CHRISTIAN PARDAVE ESPINOZA

using namespace std;

int main(){
	
	cout<<"CHRISTIAN PARDAVE ESPINOZA."<<endl;
	float media=0,num,aux;
	
	cout<<"Cuantos numeros?: "; cin>>num;
	for(int i=0;i<num;i++){
		cout<<"Numero?: "; cin>>aux;
		media+=aux;
	}
	cout<<"Media: "<<media/num<<endl;
	
	
	
	getch();
	return 0;	
}