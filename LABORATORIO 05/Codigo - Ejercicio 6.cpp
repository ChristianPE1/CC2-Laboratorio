#include<iostream>
#include<conio.h>

using namespace std;

int addition (int a, int b){
	return (a+b);
}

int subtraction (int a, int b){
	return (a-b);
}

int operation (int x, int y, int (*functocall)(int,int)){ 
	int g;
	g=(*functocall)(x,y);
	return (g);
}


int main(){
	
	cout<<"CHRISTIAN PARDAVE ESPINOZA: "<<endl;
	
	int m,n;
	int (*pf)(int,int)=subtraction;
	
	m=operation(7,5,addition);
	cout<<"Suma: "<<m<<endl;
	n=operation(20,m,pf); 
	cout<<"Resta: "<<n;
	
	getch();
	return 0;	
}