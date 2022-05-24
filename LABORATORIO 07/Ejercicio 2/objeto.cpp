#include"objeto.h"

using namespace std;

objeto::objeto(){
	objeto_="Sin definir";
}

objeto::objeto(string _color_,string _material_,string __objeto){
	objeto_=__objeto;
	color1=_color_;
	material_=_material_;
}

objeto::~objeto(){
}

void objeto::describir(){
	cout<<objeto_<<" de color "<<color1<<" y material de "<<material_<<endl;
}