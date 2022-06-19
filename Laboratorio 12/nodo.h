#ifndef NODO_H
#define NODO_H
#include<iostream>

using namespace std;

class nodo{
	private:
		int num;
		nodo *conx;
	public:
		nodo();
		void setNum(int);
		void setConx(nodo*);
		int getNum();
		nodo* getConx();
		virtual ~nodo();
	
};

#endif