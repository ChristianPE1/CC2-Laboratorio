#include<iostream>
#include"edad.h"

edad::edad(){
	dia=0; mes=0; anio=0; diaA=0; mesA=0; anioA=0;
}

edad::edad(int dia_Cumple,int mes_Cumple,int anio_Cumple,int dia_Actual,int mes_Actual,int anio_Actual){
	dia=dia_Cumple; mes=mes_Cumple; anio=anio_Cumple; diaA=dia_Actual; mesA=mes_Actual; anioA=anio_Actual;
}

edad::~edad(){
}

void edad::setData(){
	cout<<"Fecha actual:"<<endl;
	cout<<"Dia: "; cin>>diaA;
	cout<<"Mes: "; cin>>mesA;
	cout<<"Anio: "; cin>>anioA;
	cout<<"Fecha de nacimiento"<<endl;
	cout<<"Dia: "; cin>>dia;
	cout<<"Mes: "; cin>>mes;
	cout<<"Anio: "; cin>>anio;
}


void edad::calc_edad(){
	int aux1,aux2,aux3;
	if(diaA>dia)
		aux1=diaA-dia;
	else if(diaA<dia)
		aux1=diaA+(30-dia);
	if(mesA<=mes){
		aux2=mesA+(12-mes);
		aux3=(anioA-anio)-1;
	}
	else if(mesA>=mes){
		aux2=12-mes;
		aux3=anioA-anio;
	}
	if(mesA==mes){
		aux2=0;
		aux3=anioA-anio;
	}
		cout<<"Tienes "<<aux3<<" anios, "<<aux2<<" meses y "<<aux1<<" dias."<<endl;
	
}

