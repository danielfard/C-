#include <iostream>
#include <conio.h>

using namespace std;

//simule una lista circular con informacion de tipo entero

typedef struct lista{
	
	int info;
	lista *sig;
	
};

lista *PTR = new lista;

void add_lista_circular_con_encab(int info){
	
	lista *p= new lista;
	
	p->info=info;
	
	if(PTR->sig==PTR){
		p->sig=PTR;		
		PTR->sig=p;
		
	}else{
		
		lista *j = PTR->sig;
		while(j->sig!=PTR){
			j=j->sig;
		}
		
		j->sig=p;
		p->sig=PTR;
	}
	
}


void mostrar_lista(){
	lista *j=PTR->sig;
	while(j!=PTR){
		cout<<" [ "<<j->info<<"] -->";
		j=j->sig;
	}
}

int main(){
	
	
	add_lista_circular_con_encab(123123);
	add_lista_circular_con_encab(44);
	add_lista_circular_con_encab(123);
	add_lista_circular_con_encab(22);
	add_lista_circular_con_encab(12);
	add_lista_circular_con_encab(4);
	
	mostrar_lista();
}
