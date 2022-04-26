#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	
	//CHRISTIAN PARDAVE ESPINOZA
	int n;
	cout<<"Altura del triangulo rectangulo: "; cin>>n;

	for(int i=1;i<=n;i++){
		for(int j=0;j<i;j++)
			cout<<"*";
		cout<<endl;
	}
	
	
	getch();
	return 0;	
}