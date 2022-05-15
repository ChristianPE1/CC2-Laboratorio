#include<iostream>
#include<conio.h>
#include"alumno.h"

using namespace std;

int main(){
	
	cout<<"Christian Pardave Espinoza."<<endl;
	
	alumno chris("Christian Pardave Espinoza",20213143,16.2,15.3,14.1);
	chris.imprimir();
	
	getch();
	return 0;	
}