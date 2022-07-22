#include<iostream>
#include<vector>

using namespace std;

class IBuilder{
	public:
		virtual ~IBuilder(){}
		virtual void ProducirParteA() const = 0;
		virtual void ProducirParteB() const = 0;
		virtual void ProducirParteC() const = 0;
		virtual void ProducirParteD() const = 0;
		virtual void ProducirParteE() const = 0;
		virtual void ProducirParteF() const = 0;
		virtual void ProducirParteG() const = 0;
};
class Automovil{
	public:
		vector<string>componentes;
		
		void ListaComp()const{
			
			string colores[]={"azul","rojo","verde","negro","blanco","amarillo"};
			int pos_color[sizeof(colores)/sizeof(colores[0])];
			cout<<"\nComponentes : ";
			for(int i=0;i<sizeof(colores)/sizeof(colores[0]);i++){
				cout<<i+1<<"."<<colores[i]<<" - ";
			}
			for(size_t i=0;i<componentes.size();i++){
				cout<<"\nDe que color desea el/las "<<componentes[i]<<" (n. del color): "; cin>>pos_color[i];
			}
			for(size_t i=0;i<componentes.size();i++){
				if(componentes[i] == componentes.back()){
					cout<<"\n"<<componentes[i]<<" color "<<colores[pos_color[i]-1];
				}
				else{
					cout<<"\n"<<componentes[i]<<" color "<<colores[pos_color[i]-1]<<", ";
				}
			}
			cout<<"\n\n";
		}
};

class BuilderEspecifico:public IBuilder{
	private:
		Automovil* product;
	public:
		BuilderEspecifico(){
			this->Reset();
		}
		~BuilderEspecifico(){
			delete product;
		}
		void Reset(){
			this->product = new Automovil();
		}
		void ProducirParteA()const override{
			this->product->componentes.push_back("Puertas");
		}
		void ProducirParteB()const override{
			this->product->componentes.push_back("Llantas");
		}
		void ProducirParteC()const override{
			this->product->componentes.push_back("Timon");
		}
		void ProducirParteD()const override{
			this->product->componentes.push_back("Asientos");
		}
		void ProducirParteE()const override{
			this->product->componentes.push_back("Motor");
		}
		void ProducirParteF()const override{
			this->product->componentes.push_back("Espejos");
		}
		void ProducirParteG()const override{
			this->product->componentes.push_back("Vidrios");
		}
		Automovil* GetProducto(){
			Automovil* resultado = this->product;
			this->Reset();
			return resultado;
		}
};


class Director{
	private:
		IBuilder* builder;
	public:
		void set_builder(IBuilder* builder){
			this->builder = builder;
		}
		void BuildProductoMin(){
			this->builder->ProducirParteB();
			this->builder->ProducirParteC();
			this->builder->ProducirParteE();
		}
		void BuildProductoCompleto() {
			this->builder->ProducirParteA();
			this->builder->ProducirParteB();
			this->builder->ProducirParteC();
			this->builder->ProducirParteD();
			this->builder->ProducirParteE();
			this->builder->ProducirParteF();
			this->builder->ProducirParteG();
		}
};



void ClienteCode(Director& director){
	int opc;	
	cout<<"Consecionario:"<<endl;
	cout<<"\n1. Auto Basico\n2. Auto Completo\n3. Auto Personalizado\n4. Salir"<<endl;
	cout<<"Opcion?: "; cin>>opc;
	
	if(opc==1){
		BuilderEspecifico* builder = new BuilderEspecifico();

		director.set_builder(builder);
		cout << "Auto Basico:\n";
		director.BuildProductoMin();

		Automovil* p = builder->GetProducto();
		p->ListaComp();
		delete p;
		delete builder;
	}
	else if(opc==2){
		BuilderEspecifico* builder = new BuilderEspecifico();
		director.set_builder(builder);

		cout << "Auto Completo:\n";
		director.BuildProductoCompleto();
		Automovil* p = builder->GetProducto();
		
		p->ListaComp();
		delete p;
		delete builder;
	}
	else if(opc==3){
		BuilderEspecifico* builder = new BuilderEspecifico();
		director.set_builder(builder);
		string opc_aux;
		cout << "Auto Personalizado:\n";
		cout<<"Que componentes desea? (si/no): "<<endl;
		cout<<"Puertas?: "; cin>>opc_aux;
		if(opc_aux=="si")
			builder->ProducirParteA();
		cout<<"Llantas?: "; cin>>opc_aux;
		if(opc_aux=="si")
			builder->ProducirParteB();
		cout<<"Timon?: "; cin>>opc_aux;
		if(opc_aux=="si")
			builder->ProducirParteC();
		cout<<"Asientos?: "; cin>>opc_aux;
		if(opc_aux=="si")
			builder->ProducirParteD();
		cout<<"Motor?: "; cin>>opc_aux;
		if(opc_aux=="si")
			builder->ProducirParteE();
		cout<<"Espejos?: "; cin>>opc_aux;
		if(opc_aux=="si")
			builder->ProducirParteF();
		cout<<"Vidrios?: "; cin>>opc_aux;
		if(opc_aux=="si")
			builder->ProducirParteG();
		
		Automovil* p = builder->GetProducto();
		p->ListaComp();
		delete p;
		delete builder;
	}
}

int main(){
	cout<<"Christian Pardave Espinoza"<<endl;
	Director* director = new Director();
	ClienteCode(*director);
	delete director;
	return 0;
}




