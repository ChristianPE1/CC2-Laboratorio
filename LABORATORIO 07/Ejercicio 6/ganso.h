#pragma once
#include<iostream>
#include"ave.h"

using namespace std;

class ganso:public ave{
	private:
		string especie;
	public:
		ganso();
		ganso(string,bool,bool,string);
		~ganso();
		void imprimir();
};
