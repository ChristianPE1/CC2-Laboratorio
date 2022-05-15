using namespace std;

class edad{
	private:
		int dia,mes,anio,diaA,mesA,anioA;
	public:
		edad();
		edad(int,int,int,int,int,int);
		~edad();
		void setData();
		void calc_edad();
};