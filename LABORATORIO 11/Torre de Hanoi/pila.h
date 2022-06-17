#include<iostream>

using namespace std;

class Pila{
	private:
	    int *t;
	    int tamanio,top;
	public:
	    Pila(int);
	    ~Pila();
		void push(int d);
		int pop();
	    void printstack();
};