using namespace std;

class alumno{
	private:
		string nombre_comp;
		int CUI;
		float nota1,nota2,nota3;
	public:
		alumno();
		alumno(string,int,float,float,float);
		~alumno();
		float promedio(float,float,float);
		string primer_Nombre(string);
		void imprimir();
};