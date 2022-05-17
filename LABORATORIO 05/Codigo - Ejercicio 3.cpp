#include<iostream>
#include<conio.h>

using namespace std;

struct nodo{
	int dato;
	nodo *siguiente;
};

void insertar(nodo *&,int);
void mostrar(nodo *);
void eliminar(nodo *&,int);

int main(){
	
	cout<<"CHRISTIAN PARDAVE ESPINOZA:"<<endl;
	
	nodo *lista=NULL;
	
	int n;
	
	cout<<"Cuantos numeros desea ingresar?: "; cin>>n;
	
	for(int i=0;i<n;i++){
		int num;
		cout<<"Valor?: "; cin>>num;
		insertar(lista,num);
	}
	
	mostrar(lista);
	
	int elim;
	cout<<"\nElemento a eliminar?: "; cin>>elim;
	eliminar(lista,elim);
	
	mostrar(lista);
	
	getch();
	return 0;
}

void insertar(nodo *&lista,int n){
	nodo *n_nodo=new nodo();
	n_nodo->dato=n;
	
	nodo *aux1=lista;
	nodo *aux2;
	
	while((aux1 != NULL) && (aux1->dato < n)){
		aux2=aux1;
		aux1=aux1->siguiente;
	}
	if(lista==aux1){
		lista=n_nodo;
	}
	else{
		aux2->siguiente=n_nodo;
	}
	n_nodo->siguiente=aux1;
}

void mostrar(nodo *lista){
	nodo *act= new nodo();
	act=lista;
	cout<<"\nLISTA: "<<endl;
	while(act!=NULL){
		cout<<act->dato<<"->";
		act=act->siguiente;
	}
}

void eliminar(nodo *&lista,int n){
	if(lista!=NULL){
		nodo *aux_borrar;
		nodo *anterior=NULL;
		aux_borrar=lista;
		
		while((aux_borrar!=NULL) && (aux_borrar->dato!=n)){
			anterior=aux_borrar;
			aux_borrar=aux_borrar->siguiente;
		}
		if(aux_borrar==NULL)
			cout<<"Elemento no encontrado.";
		else if(anterior==NULL){
			lista=lista->siguiente;
			delete aux_borrar;
		}
		else{
			anterior->siguiente=aux_borrar->siguiente;
			delete aux_borrar;
		}
	}
}


