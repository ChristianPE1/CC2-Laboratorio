#include<iostream>

using namespace std;

class multimedia{
	protected:
		string contenido,genero;
	public:
		multimedia();
		multimedia(string,string);
		~multimedia();
		void setContenido(string);
		void setGenero(string);
};