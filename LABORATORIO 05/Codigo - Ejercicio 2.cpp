#include<iostream>
#include<conio.h>
#include<random>
#include<time.h>

using namespace std;

int main(){
	
	cout<<"CHRISTIAN PARDAVE ESPINOZA: "<<endl;
	
	srand(time(NULL));
	
	float *mivector,*mivector2;
	int iter=10;
	
	for(int i=0;i<iter;i++){
		float aux;	
		cout<<"Caso "<<i+1<<":"<<endl;
		
		mivector=new float[10];
		mivector2=new float[10];
		cout<<"Producto punto: ";
		for(int j=0;j<iter;j++){
	
			mivector[j]=1+rand()%(51-1);
			mivector2[j]=1+rand()%(51-1);
			
			aux=mivector[j] * mivector2[j];
			cout<<aux<<",";	
		}
		cout<<endl;
		delete []mivector;
		delete []mivector2;
	}

	getch();
	return 0;	
}