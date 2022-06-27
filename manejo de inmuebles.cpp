#include <iostream>

using namespace std;

//realizar una lista simple donde se guarden inmuebles, muestrelos, digame la informacion del inmueble que tiene estrato 5, elimine por direccion, mostrar inmueble superior a 100000, todo esto realicelo en un menu.

struct inmuebles{
	string direccion;
	int precio;
	int estrato;	
	inmuebles *sig;
};

inmuebles *PTR=NULL;

void agregar_inmueble(string direccion,int precio,int estrato){
	
	inmuebles *nuevo=new inmuebles;
	nuevo->direccion=direccion;
	nuevo->precio=precio;
	nuevo->estrato=estrato;
	
	if(PTR==NULL){
		PTR=nuevo;
		nuevo->sig=NULL;
	}else{
		inmuebles *i=PTR;
		
		while(i->sig!=NULL){
			i=i->sig;
		}
		
		i->sig=nuevo;
		nuevo->sig=NULL;
	}
 	cout<<"agregado con exito..."<<endl;
}

void listar_inmueble(){
	inmuebles *i=PTR;
	while(i->sig!=NULL){
		cout<<"la direccion: "<<i->direccion<<" el estrato: "<<i->estrato<<" el precio: "<<i->precio<<" -> ";	
		i=i->sig;
		
	}
	
	cout<<"la direccion: "<<i->direccion<<" el estrato: "<<i->estrato<<" el precio: "<<i->precio<<" -> ";	
	
}

void listar_inmueble_estrato_5(){
	inmuebles *i=PTR;
	while(i->sig!=NULL){
		if(i->estrato==5){
			cout<<"la direccion: "<<i->direccion<<" el estrato: "<<i->estrato<<" el precio: "<<i->precio<<" -> ";	
			
		}
		i=i->sig;
		
	}
	
	if(i->estrato==5){
			cout<<"la direccion: "<<i->direccion<<" el estrato: "<<i->estrato<<" el precio: "<<i->precio<<" -> ";	
			
		}
}


void listar_inmueble_superior_100(){
	inmuebles *i=PTR;
	while(i->sig!=NULL){
		if(i->precio==100000){
			cout<<"la direccion: "<<i->direccion<<" el estrato: "<<i->estrato<<" el precio: "<<i->precio<<" -> ";		
		}
		i=i->sig;
		
	}
	
	if(i->precio==100000){
			cout<<"la direccion: "<<i->direccion<<" el estrato: "<<i->estrato<<" el precio: "<<i->precio<<" -> ";	
	}
}


void eliminar_por_direccion(string direccion){
	inmuebles *i=PTR;
	while(i->sig!=NULL){
		if(i->direccion==direccion){
			if(i==PTR){
				PTR=PTR->sig;
				delete i;
				break;
			}else{
				inmuebles *k=PTR;
				while(k->sig!=i){
					k=k->sig;
				}	
				k->sig=i->sig;
				delete i;
			}	
		}
		i=i->sig;
		
	}
	if(i->direccion==direccion){
			if(i==PTR){
				PTR=PTR->sig;
				delete i;
			}else{
				inmuebles *k=PTR;
				while(k->sig!=i){
					k=k->sig;
				}	
				k->sig=i->sig;
				delete i;
			}	
	}
		
	
}

int main(){
	
	
	string direccion;
	int precio;
	int estrato;
	int opcion=0;
	while(opcion!=6){
		cout<<"digite la opcion q desea realizar 1 agregar inmueble 2 listar inmuebles 3  eliminar inmueble 4  mostrar inmuebles estrato 5 y 5 mostrar inmueble mayor a 100000 dolares o 6 salir: "<<endl;
		cin>>opcion;
		switch(opcion){
			case 1:{
			
				cout<<"digite la direccion del inmueble sin espacios use _"<<endl;
				cin>>direccion;
				cout<<"digite el precio del inmueble: "<<endl;
				cin>>precio;
				cout<<"digite el estrato del inmueble: "<<endl;
				cin>>estrato;
				agregar_inmueble(direccion,precio,estrato);	
				break;
			}
			case 2:
				listar_inmueble();
				break;
			case 3:
				cout<<"digite la direccion del inmueble sin espacios use _"<<endl;
				cin>>direccion;
				eliminar_por_direccion(direccion);
				break;
			case 4:
				cout<<"los inmuebles estrato 5 son: "<<endl;
				listar_inmueble_estrato_5();
				break;
			case 5:
				cout<<"los inmuebles superiores a 100000 dolares son: "<<endl;
				listar_inmueble_superior_100();
				break;
		}
		cout<<endl<<endl;
	}
	
	
	
	
	
	

	
	
	
	
	
	
	
	
}
