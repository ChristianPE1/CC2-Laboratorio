#include<iostream>
#include<conio.h>
#include<vector>

using namespace std;

int main(){
	
	cout<<"CHRISTIAN PARDAVE ESPINOZA: "<<endl;
	
	int aux=0,num_=0;
	vector<int>primos;
	
	for(int i=2;i<=100;i++){
		for(int j=1;j<10;j++){
			if(i%j==0)
				aux++;
			}
		if(aux==2){
			primos.insert(primos.begin(),i);
			num_++;
		}
		aux=0;
	}
	
	for(int i=0;i<num_;i++){
		cout<<primos[i]<<" ";
	}
	
	
	getch();
	return 0;	
}