#include<iostream>
#include<conio.h>

using namespace std;

void primos(int);

int main(){
	
	cout<<"CHRISTIAN PARDAVE ESPINOZA"<<endl;
	
	int primo;
	cout<<"Hasta donde los numeros primos: "; cin>>primo;
	primos(primo);
	
	getch();
	return 0;	
}

void primos(int a){
	int aux=0;
	for(int i=2;i<=a;i++){
		for(int j=1;j<10;j++){
			if(i%j==0)
				aux++;
			}
		if(aux==2)
			cout<<i<<" ";
		aux=0;
	}
}

