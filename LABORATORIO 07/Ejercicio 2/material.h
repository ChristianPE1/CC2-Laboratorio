#include"color.h"
#include<iostream>

class material:public color{
	protected:
		string material_;
	public:
		material();
		material(string);
		~material();
};