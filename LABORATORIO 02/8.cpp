#include<iostream>
#include<conio.h>


using namespace std;

int main(){
	
	//CHRISTIAN PARDAVE ESPINOZA
	int num;
	cout<<"Ingrese un numero: "; cin>>num;

	for(int i=0;i<9;i++){
		cout<<num<<" x "<<i+1<<" = "<<num*(i+1)<<endl;
	}
	
	getch();
	return 0;
}