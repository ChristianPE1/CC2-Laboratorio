#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	
	//CHRISTIAN PARDAVE ESPINOZA
	
	int n,mayor,menor;
	float media=0.0;
	
	cout<<"Cuantos numeros?: "; cin>>n;
	int numeros[n];
	for(int i=0;i<n;i++){
		cout<<"Valor?: "; cin>>numeros[i];
	}
	menor=numeros[0];
	mayor=numeros[0];
	media+=numeros[0];
	for(int i=1;i<n;i++){
		if(numeros[i]<menor)
			menor=numeros[i];
		if(numeros[i]>mayor)
			mayor=numeros[i];
		media+=numeros[i];
	}
	
	cout<<"\nMayor: "<<mayor<<"\nMenor: "<<menor<<"\nMedia: "<<media/n;
	
	
	getch();
	return 0;	
}

