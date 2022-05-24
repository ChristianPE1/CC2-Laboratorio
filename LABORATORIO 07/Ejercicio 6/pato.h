#pragma once
#include"ave.h"
#include<iostream>

using namespace std;

class pato:public ave{
	private:
		string especie;
	public:
		pato();
		pato(string,bool,bool,string);
		~pato();
		void imprimir();
};
