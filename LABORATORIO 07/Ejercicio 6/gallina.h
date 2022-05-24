#pragma once
#include"ave.h"
#include<iostream>

using namespace std;

class gallina:public ave{
	private:
		string especie;
	public:
		gallina();
		gallina(string,bool,bool,string);
		~gallina();
		void imprimir();
};
