#include<iostream>
#include"nodo.h"
#include"lista.h"

int main(){
	
	cout<<"Christian Pardave Espinoza:\n"<<endl;
	
	nodo *prueba=NULL,*temp=NULL;
	lista *_lista=new lista();
	
	//agregar
	
	int n,num;
	cout<<"Cuantos numeros desea agregar?: "; cin>>n;
	for(int i=0;i<n;i++){
		prueba=new nodo();
		cout<<"Numero?: "; cin>>num;
		prueba->setNum(num);
		_lista->agregar(prueba);
	}
	
	//mostrar
	
	cout<<"\nLista: "<<endl;
	temp=_lista->getHead();
	while(temp!=NULL){
		cout<<temp->getNum()<<"->";
		temp=temp->getConx();
	}
	
	//buscar
	
	int a_buscar;
	
	cout<<"\n\nNumero a buscar: "; cin>>a_buscar;
	if(_lista->buscar(a_buscar)==NULL)
		cout<<"El numero no se encuentra en la lista."<<endl;
	else
		cout<<"El numero si se encuentra en la lista."<<endl;
	
	//eliminar

	int a_eliminar;
	cout<<"\nNumero a eliminar: "; cin>>a_eliminar;
	
	if(_lista->buscar(a_buscar)!=NULL){
		_lista->eliminar(a_eliminar);
		cout<<"Numero eliminado."<<endl;
	}
	else
		cout<<"El numero no se encontro en la lista."<<endl;
		
	string comp;
	cout<<"\nDesea eliminar el primer elemento? (Si/No): "; cin>>comp;
	if(comp=="Si" || comp=="si"){
		cout<<"\nEliminando el primer elemento."<<endl;
		_lista->eliminar_pri();
	}
	else
		cout<<"Ok, gracias."<<endl;
	
	//lista final
	cout<<"\nLista final resultante: "<<endl;
	temp=_lista->getHead();
	while(temp!=NULL){
		cout<<temp->getNum()<<"->";
		temp=temp->getConx();
	}

	return 0;
}