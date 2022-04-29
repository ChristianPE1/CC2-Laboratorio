#include<iostream>
#include<conio.h>

using namespace std;

bool bisiesto(int);

int main(){
	
	cout<<"CHRISTIAN PARDAVE ESPINOZA"<<endl;
	
	int year;
	cout<<"Ingrese su anio: "; cin>>year;
	if(bisiesto(year)==true)
		cout<<"Su anio es bisiesto.";
	else
		cout<<"Su anio no es bisiesto.";
	
	
	getch();
	return 0;	
}

bool bisiesto(int a){
	if(a>2000){
		for(int i=2000;i<=a+4;i+=4)
			if(i==a)
				return true;
	}
	else if(a<2000)
		for(int i=a;a<=2000+4;i+=4)
			if(i==2000)
				return true;
	else
		return true;
}

