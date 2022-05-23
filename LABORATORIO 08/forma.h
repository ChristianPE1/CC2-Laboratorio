#include<iostream>
#include"punto.h"

using namespace std;

class forma:public punto{
	protected:
		string color,nombre;
	public:
		forma();
		forma(string,string,int,int);
		~forma();
		virtual void imprimir();
		string getColor();
		void setColor(string);
		void mover(int,int);
		virtual int area();
};