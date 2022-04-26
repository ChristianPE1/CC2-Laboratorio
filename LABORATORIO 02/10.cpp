#include<iostream>
#include<conio.h>
#include<cstring>

using namespace std;

int main(){
	
	//CHRISTIAN PARDAVE ESPINOZA
	string str;
	cout<<"Ingrese una palabra: "; cin>>str;

	for(int i=str.size();i>=0;i--){
		cout<<str[i]<<" ";
	}
	
	getch();
	return 0;
}