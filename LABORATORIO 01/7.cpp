#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
#include<vector>

//CHRISTIAN PARDAVE ESPINOZA

using namespace std;

int main(){
	
	cout<<"CHRISTIAN PARDAVE ESPINOZA."<<endl;
	int uno,dos;
	
	cout<<"Ingrese dos numeros: "; cin>>uno>>dos;
	if(uno%dos!=0)
		cout<<dos<<" no es divisor de "<<uno<<"."<<endl;
	else
		cout<<dos<<" es divisor de "<<uno<<"."<<endl;
	if(dos%uno!=0)
		cout<<"\n"<<uno<<" no es divisor de "<<dos<<"."<<endl;
	else
		cout<<uno<<" es divisor de "<<dos<<"."<<endl;
	
	
	getch();
	return 0;	
}