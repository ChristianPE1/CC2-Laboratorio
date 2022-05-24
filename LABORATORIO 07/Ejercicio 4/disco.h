#include"multimedia.h"
#include<iostream>

using namespace std;

class disco:public multimedia{
	private:
		int capacidad;
	public:
		disco();
		disco(int);
		~disco();
		void setCapacidad(int);
		void imprimir();
};