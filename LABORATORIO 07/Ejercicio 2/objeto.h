#include"material.h"
#include<iostream>

class objeto:public material{
	private:
		string objeto_;
	public:
		objeto();
		objeto(string,string,string);
		~objeto();
		void describir();
	
};