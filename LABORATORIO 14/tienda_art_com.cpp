#include<iostream>
#include<conio.h>
#include<vector>
#include<string>

using namespace std;

struct estado{
	int codigo;
	string estado_;
};

struct tienda{
	estado comp;
	string nombre;
	int precio;
	int cantidad;	
};


int main(){
	
	cout<<"Christian Pardave Espinoza:\n"<<endl;
	
	struct vector<tienda>articulos;
	
	//struct *ptrTienda=&articulos;
	//struct **ptr2=ptrTienda;
	
	string ropa[]={"camisa","pantalon","polera","medias","gorra","polo","buzo","zapatilla","short","chaleco"};
	int precios[]={50,70,60,20,30,40,50,100,60,60};
	int cantidad[]={13,15,14,26,51,42,32,12,62,42};
	int codigo=1111;
	
	for(int i=0;i<10;i++){
		estado aux1={codigo,"Disponible"};
		tienda aux2={aux1,ropa[i],precios[i],cantidad[i]};
		articulos.push_back(aux2);
		codigo++;
	}

	int x,opcion;
	/*
	string *ptr,**ptr2;
	
	ptr=&articulos.nombre;
	ptr2=&ptr;
	*/
	
	cout<<"TIENDA DE ROPA:"<<endl;
	while(opcion!=6){
	    cout<<"\n1. Alta de producto"<<endl;
	    cout<<"2. Dar de baja un producto"<<endl;
	    cout<<"3. Buscar por codigo"<<endl;
	    cout<<"4. Modificar nombre, stock y/o precio"<<endl;
	    cout<<"5. Imprimir todos los articulos"<<endl;
		cout<<"6. Salir"<<endl;
	    cout<<"Introduzca una opcion: "; cin>>opcion;
	
		if(opcion==1){
			string nombre_;
			int precio_,cantidad_;
			cout<<"El nombre del nuevo producto: "; cin>>nombre_;
			cout<<"Precio?: "; cin>>precio_;
			cout<<"Cantidad?: "; cin>>cantidad_;
			estado aux={codigo,"Disponible"};
			tienda aux2={aux,nombre_,precio_,cantidad_};
			articulos.push_back(aux2);
			codigo++;
		}
		if(opcion==2){
			int aux;
			cout<<"Ingrese el codigo del producto: "; cin>>aux;
			for(int i=0;i<articulos.size();i++){
				if(articulos[i].comp.codigo==aux){
					articulos[i].comp.estado_="Agotado";
					articulos[i].cantidad=0;
				}
			}
			cout<<"Ejecutado."<<endl;
		}
		if(opcion==3){
			int aux;
			cout<<"Codigo del producto a buscar: "; cin>>aux;
			for(int i=0;i<articulos.size();i++){
				if(articulos[i].comp.codigo==aux){
					cout<<"El articulo se encuentra en la lista y esta "<<articulos[i].comp.estado_<<endl;
				}
			}
		}
		if(opcion==4){
			int comp,code_,aux=0;
			while(aux==0){
				cout<<"\n1.Nombre\n2.Precio\n3.Stock\nIngrese una opcion: "; cin>>comp;
				cout<<"Cual es el codigo del articulo: "; cin>>code_;
				if(comp==1){
					for(int i=0;i<articulos.size();i++){
						if(articulos[i].comp.codigo==code_){	
							cout<<"Ingrese el nuevo nombre: "; cin>>articulos[i].nombre;
							aux=1;
						}
					}
				}
				if(comp==2){
					for(int i=0;i<articulos.size();i++){
						if(articulos[i].comp.codigo==code_){	
							cout<<"Ingrese el nuevo precio: "; cin>>articulos[i].precio;
							aux=1;
						}
					}
				}
				if(comp==3){
					for(int i=0;i<articulos.size();i++){
						if(articulos[i].comp.codigo==code_){	
							cout<<"Ingrese la nueva cantidad: "; cin>>articulos[i].cantidad;
							aux=1;
						}
					}
				}
				if(comp<1 || comp>3){
					cout<<"ERROR: Ingrese de nuevo"<<endl;
				}
			}
		}
		if(opcion==5){
			cout<<"\nCODIGO\tNOMBRE\t\tPRECIO\tCANTIDAD\tESTADO:\n"<<endl;
			for(int i=0;i<articulos.size();i++){
				if(articulos[i].nombre.length()>7)
					cout<<articulos[i].comp.codigo<<"\t"<<articulos[i].nombre<<"\t"<<articulos[i].precio<<
					"\t"<<articulos[i].cantidad<<"\t\t"<<articulos[i].comp.estado_<<endl;
				else{
					cout<<articulos[i].comp.codigo<<"\t"<<articulos[i].nombre<<"\t\t"<<articulos[i].precio<<
					"\t"<<articulos[i].cantidad<<"\t\t"<<articulos[i].comp.estado_<<endl;
				}
			}
		}
		if(opcion==6){
			cout<<"Gracias, vuelva mas tarde."<<endl;
		}
		if(opcion<1 || opcion>6){
			cout<<"\nERROR: Ingrese un numero otra vez."<<endl;
		}
	}
	
	getch();
	return 0;
}