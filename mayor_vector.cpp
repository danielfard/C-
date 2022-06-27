#include <stdlib.h>
#include <stdio.h>

//hallar el mayor en un vector y la posicion

int main(){
	
	int vector[10];
	for(int indice=0;indice<10;indice++){
		printf("ingrese un valor: ");
		scanf("%d",&vector[indice]);
	}
	
	int mayor=vector[0];
	int pos_mayor=0;
	
	for(int indice=1;indice<10;indice++){
		if(vector[indice]>mayor){
			mayor=vector[indice];
			pos_mayor=indice;
		}
	}
	
	printf("el valor mayor %d esta en la posicion %d",mayor,pos_mayor );
	
}
