#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	
	cout<<"CHRISTIAN PARDAVE ESPINOZA: "<<endl;
	
	string datos[3][4];
	
	for(int i=0;i<3;i++){
		cout<<"\nNombre?: "; cin>>datos[i][0];
		cout<<"Apellido?: "; cin>>datos[i][1];
		cout<<"Edad?: "; cin>>datos[i][2];
		cout<<"DNI?: "; cin>>datos[i][3];
		}
	
	cout<<"\n-----------\nDATOS\n-----------"<<endl;
	for(int i=0;i<3;i++){
		cout<<"\nNombre: "<<datos[i][0]<<endl;
		cout<<"Apellido: "<<datos[i][1]<<endl;
		cout<<"Edad: "<<datos[i][2]<<endl;
		cout<<"DNI: "<<datos[i][3]<<endl;
	}
	
	
	getch();
	return 0;	
}