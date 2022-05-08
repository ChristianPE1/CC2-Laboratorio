#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	
	cout<<"CHRISTIAN PARDAVE ESPINOZA: "<<endl;
	
	string tienda[10][3],buscar;
	
	cout<<"Ingrese 10 productos: "<<endl;

	for(int i=0;i<10;i++){
		cout<<"\nNombre?: "; cin>>tienda[i][0];
		cout<<"Precio?: "; cin>>tienda[i][1];
		cout<<"Stock?: "; cin>>tienda[i][2];		
	}

	cout<<"\nQue producto quiere buscar?: "; cin>>buscar;
	
	for(int i=0;i<10;i++){
		if(buscar==tienda[i][0]){
			if(tienda[i][2]!="0")
				cout<<"El producto si se encuentra, y si hay stock."<<endl;
			else
				cout<<"El producto si se encuentra, pero no hay stock."<<endl;
		}
	}

	string resp,mod,n_precio;
	cout<<"\nDesea modificar el precio de un producto?: "; cin>>resp;
	if((resp=="si") || (resp=="Si")){
		cout<<"Producto?: "; cin>>mod;
		for(int i=0;i<10;i++){
			if(mod==tienda[i][0]){
				cout<<"Nuevo precio del producto?: "; cin>>n_precio;
				tienda[i][1]=n_precio;
				cout<<"Producto?: "<<tienda[i][0]<<endl;
				cout<<"Precio?: "<<tienda[i][1]<<endl;
				cout<<"Stock?: "<<tienda[i][2]<<endl;
			}
		}
	}
	else
		cout<<"Ok."<<endl;
	
	string resp_2,mod_2,n_stock;
	cout<<"\nDesea modificar el stock de un producto?: "; cin>>resp_2;
	if((resp=="si") || (resp=="Si")){
		cout<<"Producto?: "; cin>>mod_2;
		for(int i=0;i<10;i++){
			if(mod_2==tienda[i][0]){
				cout<<"Nuevo stock del producto?: "; cin>>n_stock;
				tienda[i][2]=n_stock;
				cout<<"Producto?: "<<tienda[i][0]<<endl;
				cout<<"Precio?: "<<tienda[i][1]<<endl;
				cout<<"Stock?: "<<tienda[i][2]<<endl;
			}
		}
	}
	else
		cout<<"Ok."<<endl;
	
	
	getch();
	return 0;	
}