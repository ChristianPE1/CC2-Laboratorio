#include<iostream>
#include<conio.h>

using namespace std;

void concat(char *, char *);

int main (){
	
	cout<<"CHRISTIAN PARDAVE ESPINOZA:"<<endl;
	
   	char str1[1000],str2[250];

	cout<<"Ingrese una cadena de caracteres: "; cin>>str1;
	cout<<"Ingrese otra: "; cin>>str2;
	concat(str1,str2);
	cout<<str1<<endl;
	   
	getch();
	return 0;
}

void concat(char *a, char *b){
    while(*a){
       a++;
    }
    while(*b){
    	*a=*b;
    	a++;
    	b++;
    }
    *a='\0';
} 