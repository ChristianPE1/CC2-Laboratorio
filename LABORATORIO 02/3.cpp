#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	
	//CHRISTIAN PARDAVE ESPINOZA
	
	cout<<"Multiplos de 5 entre 1-100: "<<endl;
	
	int mult=5;
	
	for(int i=1;i<=100;i++){
		if(mult*i<=100)
			cout<<mult*i<<" ";
	}
	
	
	getch();
	return 0;	
}