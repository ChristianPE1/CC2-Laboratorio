#include<iostream>
#include<conio.h>

using namespace std;

template<class T,class U>
T mayor(T arreglo,U &max);


int main(){
	
	cout<<"CHRISTIAN PARDAVE ESPINOZA:"<<endl;
	
	int arrayInt[]={3,1,6,8,1,6,9,5},max;
	max=arrayInt[0];
	
	mayor(arrayInt,max);
	cout<<"Mayor: "<<max;
	
	getch();
	return 0;	
}

template<class T,class U>
T mayor(T arreglo,U &max){
	int size=sizeof(arreglo)/sizeof(arreglo[0]);
	for(int i=0;i<size;i++){
		if(arreglo[i]>=max)
			max=arreglo[i];
	}
	return 0;

}
