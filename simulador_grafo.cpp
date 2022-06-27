#include <iostream>
#include <stdlib.h>
#include <conio.h>
using namespace std;

// simule uin grafo con numeros enteros como vertices.

typedef struct vertice{
	int info;
	struct vertice *sig;
	struct adyacente *ady;
		
	
}vertice;

typedef struct adyacente{
	
	int peso;
	struct adyacente *sig_ady;
	struct vertice *sig_v;
	
	
}adyacente;

vertice *PTR = NULL;

vertice *buscar(char elem){
	vertice *r= new vertice;
	r=PTR;
	while(r!=NULL){
		if(r->info==elem){
			return r;
		}else{
			r=r->sig;
		}
		
	}
	return NULL;
}

void crear_vertice(char xinfo){
	vertice *p= new vertice;
	p->info=xinfo;
	p->ady=NULL;
	if(PTR==NULL){
		p->sig=NULL;
		PTR=p;	
	}else{
		vertice *j=new vertice;
		j=PTR;
		while(j->sig!=NULL){
			j=j->sig;
			
		}
		j->sig=p;
		p->sig=NULL;
	}
}

void crear_arcos(char v1,char v2, int xpeso){
	
	vertice *p=new vertice;
	p=buscar(v1);
	
	if(p==NULL){
		cout<<"no se pudo crear"<<endl;
		
	}else{
		vertice *r=new vertice;
		r=buscar(v2);
		
		adyacente *k=new adyacente;
		k->peso;
		if(p->ady==NULL){
			k->sig_v=r;
			k->sig_ady=NULL;
			p->ady=k;
		}else{
			k->sig_ady=p->ady;
			p->ady=k;
			k->sig_v=r;
		}
	}
	
	
}

void adyacentes(char v1){
	vertice *p=buscar(v1);
	
	if(p==NULL){
		cout<<"no encontro el vertice"<<endl;
		getch();
	}else{
		
		if(p->ady==NULL){
			cout<<"no tiene adyacente"<<endl;
			getch();
		}else{
			adyacente *j=p->ady;
			while(j!=NULL){
				cout<<j->sig_v->info<<endl;
				j->sig_ady;
			}
			
		}
	}
}

int grados_salida(char v1){
	vertice *q=buscar(v1);
	if(q==NULL){
		cout<<"no se puede crear"<<endl;
		getch();
	}else{
		adyacente *k=q->ady;
		int c=0;
		
		while(k!=NULL){
			c++;
			k=k->sig_ady;
		}
		return c;
	}
}

int main(){
	char v1,v2,xinfo;
	int xpeso,opcion;	
	do{
    	
        cout<< "\n   1. Ingresar Nodo A la Matriz. ";
        cout<< "\n   2. Ingresar Arcos. ";
        cout<< "\n   3. Grados salida. ";
        cout<< "\n   4. Salir. ";
        cout<< "\n\n   Introduzca opcion (1-4): ";

        cin>>opcion;
		cout<<endl;
		
        switch ( opcion ){
        	
            case 1: 
            		cout<<"ingrese la informacion del nodo"<<endl;
            		cin>>xinfo;
            		crear_vertice(xinfo);
            		system("CLS");
            		break;
            case 2: 
            		cout<<"ingrese nodo 1, nodo 2, y el peso"<<endl;
            		cin>>v1;
            		cin>>v2;
            		cin>>xpeso;
            		crear_arcos(v1,v2,xpeso);
            		system("CLS");
					break;
			case 3:
					cout<<"ingrese el nodo para saber los grados de salida"<<endl;
					cin>>v1;
					cout<<grados_salida(v1);
					break;
		
		}

    } while ( opcion != 4 );
	
  
}
