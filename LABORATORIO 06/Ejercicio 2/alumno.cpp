#include<iostream>
#include"alumno.h"

alumno::alumno(){
	nombre_comp="Sin definir.";
	CUI=0;
	nota1=0; nota2=0; nota3=0;
}

alumno::alumno(string nombre_completo, int _CUI,float nota_1,float nota_2,float nota_3){
	nombre_comp=nombre_completo;
	CUI=_CUI;
	nota1=nota_1; nota2=nota_2; nota3=nota_3;
}

alumno::~alumno(){
}

float alumno::promedio(float nota_1,float nota_2,float nota_3) {
	float suma=0;
	suma=nota_1+nota_2+nota_3;
	return suma/3;
}

string alumno::primer_Nombre(string Nombre_Completo){
	int i=0;
	string aux;
	aux=Nombre_Completo[0];
    while(aux!=" "){
		aux=Nombre_Completo[i];
		i++;
	}
	char resp[i];
	
	for(int j=0;j<i-2;j++)
		resp[j]=Nombre_Completo[j];
	
	return resp;
}

void alumno::imprimir(){
	cout<<"CUI: "<<CUI<<endl;
	cout<<"Nombre: "<<primer_Nombre(nombre_comp)<<endl;
	cout<<"Promedio: "<<promedio(nota1,nota2,nota3)<<endl;
	if(promedio(nota1,nota2,nota3)>=10.5)
		cout<<"El alumno aprobo el curso de Ciencias de la Computacion II."<<endl;
	else
		cout<<"El alumno no aprobo el curso de Ciencias de la Computacion II."<<endl;
}