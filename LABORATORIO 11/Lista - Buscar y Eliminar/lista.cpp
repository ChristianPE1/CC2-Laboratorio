#include"lista.h"

lista::lista(){
	head=NULL;
}

void lista::setHead(nodo *_sup){
	head=_sup;
}

nodo* lista::getHead(){
	return head;
}

nodo* lista::getUltimo(){
	nodo *ultimo=getHead();
	while(ultimo->getConx()!=NULL){
		ultimo=ultimo->getConx();
	}
	return ultimo;
}

nodo* lista::getPrimero(){
	nodo *primero=getHead();
	return primero;
}

void lista::agregar(nodo *n_nodo){
	if(getHead()==NULL)
		setHead(n_nodo);
	else
		getUltimo()->setConx(n_nodo);
}

nodo* lista::buscar(int _numero){
	nodo *a_buscar=getHead();
	while((a_buscar!=NULL) && (a_buscar->getNum()!=_numero))
		a_buscar=a_buscar->getConx();
	return a_buscar;
}

void lista::eliminar(int n_eliminar){
	nodo* busca=getHead();
	nodo* ante=NULL;
	if(busca->getNum()==n_eliminar)
		setHead(getHead()->getConx());
	else{
		while((busca!=NULL) && (busca->getNum()!=n_eliminar)){
			ante=busca;
			busca=busca->getConx();
		}
		if(busca!=NULL){
			ante->setConx(busca->getConx());
		}
	}
	delete busca;
}

void lista::eliminar_pri(){
	nodo* busca=getHead();
	setHead(getHead()->getConx());
	
	delete busca;
}


lista::~lista(){
}
