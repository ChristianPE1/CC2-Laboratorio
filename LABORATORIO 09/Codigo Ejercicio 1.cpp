#include<iostream>
#include<conio.h>

using namespace std;

template<class T,class U,class S,class Y>
T mayor_menor(T uno, U dos, S tres,Y &max,Y &min);

int main(){
	
	cout<<"CHRISTIAN PARDAVE ESPINOZA:"<<endl;
	
	float a=14.6;
	int b=13;
	double c=15.02651045,max,min;
	
	mayor_menor(a,b,c,max,min);
	
	cout<<"Numeros:\n"<<a<<"\n"<<b<<"\n"<<c<<endl;
	
	cout<<"Mayor: "<<max<<endl;
	cout<<"Menor: "<<min<<endl;

	getch();
	return 0;
}

template<class T,class U,class S,class Y>
T mayor_menor(T uno, U dos, S tres,Y &max,Y &min){
	T arr[3];
	arr[0]=uno; arr[1]=dos; arr[2]=tres;
	max=arr[0],min=arr[0];
	for(int i=0;i<3;i++){
		if(arr[i]>max)
			max=arr[i];
		if(arr[i]<min)
			min=arr[i];
	}
	return 0;
}