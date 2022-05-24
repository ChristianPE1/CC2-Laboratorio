#include"ganso.h"

ganso::ganso(){
	especie="Sin_definir";
}

ganso::ganso(string _especie,bool _vuela,bool _nada,string _color){
	especie=_especie;
	vuela=_vuela;
	nada=_nada;
	color=_color;
}

ganso::~ganso(){
}

void ganso::imprimir(){
	if(vuela==true){
		if(nada==true)
			cout<<"Este "<<especie<<" de color "<<color<<" puede volar y nadar."<<endl;
		else
			cout<<"Este "<<especie<<" de color "<<color<<" puede volar pero no nadar."<<endl;
		}
	else{
		if(nada==true)
			cout<<"Este "<<especie<<" de color "<<color<<" puede nadar pero no volar."<<endl;
		else
			cout<<"Este "<<especie<<" de color "<<color<<" no puede volar ni nadar."<<endl;
		}
}