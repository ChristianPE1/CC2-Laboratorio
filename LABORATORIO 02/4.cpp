#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	
	//CHRISTIAN PARDAVE ESPINOZA

	int x,y,i=2;
	
	cout<<"Ingrese dos numeros: "; cin>>x>>y;

	if(x%2==0){
			x+=1;
			do{
				cout<<x<<" ";
				x+=i;
			}while(x<y);
	}
	else if(x%2==1){
			do{
				x+=i;
				cout<<x<<" ";
			}while(x<y);
	}
	else
		if(y-x==1)
			cout<<x-1;
		else if(y-x==2)
			cout<<x-2;
	
	getch();
	return 0;	
}
