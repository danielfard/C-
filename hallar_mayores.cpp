#include <stdlib.h>
#include <stdio.h>

//halle el mayor 1 y el mayor 2

int main(){
	
	int n;
	printf("ingrese la cantidad de numeros que desea ingresar: ");
	scanf("%d",&n);
	int vector[n];
	
	for(int i=0;i<n;i++){
		printf("ingrese el numero: ");
		scanf("%d",&vector[i]); 
	}
	
	int mayor_1=vector[0];
	
	for(int i=1;i<n;i++){
		if(vector[i]>mayor_1){
			mayor_1=vector[i];
		} 
	}
	
	int mayor_2;
	
	if(mayor_1==vector[0]){
		mayor_2=vector[1];	
	}else{
		mayor_2=vector[0];
	}
	
	for(int i=1;i<n;i++){
		if(vector[i]>mayor_2 && mayor_1!=vector[i]){
			mayor_2=vector[i];
		} 
	}
	printf("el mayor 1 es: %d el mayor 2 es: %d",mayor_1,mayor_2);
	
}
