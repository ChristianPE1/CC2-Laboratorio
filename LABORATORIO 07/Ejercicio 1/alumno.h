#include"persona.h"

class alumno: public persona{
	public:
		alumno();
		alumno(int,string);
		~alumno();
		void setData();
		void imprimir();
};
