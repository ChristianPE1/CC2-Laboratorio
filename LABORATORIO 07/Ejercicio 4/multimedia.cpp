#include"multimedia.h"

multimedia::multimedia(){
	contenido="Sin definir";
	genero="Sin definir";
}

multimedia::multimedia(string _contenido,string _genero){
	contenido=_contenido;
	genero=_genero;
}

multimedia::~multimedia(){
}

void multimedia::setContenido(string _contenido){
	contenido=_contenido;
}

void multimedia::setGenero(string _genero){
	genero=_genero;
}