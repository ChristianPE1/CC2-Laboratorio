#include<iostream>
#include"ganso.h"
#include"pato.h"
#include"gallina.h"


int main(){
	
	cout<<"CHRISTIAN PARDAVE ESPINOZA"<<endl;
	
	ganso uno("Ganso",true,true,"blanco");
	uno.imprimir();
	pato dos("Pato",true,false,"blanco");
	dos.imprimir();
	gallina tres("Gallina",false,false,"blanco");
	tres.imprimir();
	
	return 0;
}