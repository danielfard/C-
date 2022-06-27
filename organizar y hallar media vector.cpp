#include <iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;

//realizar un algoritmo que cree un vector aleatorio y luego lo organice de mayor  a menor y luego halle la mediana de la poblacion.


int main(){
	srand(time(NULL));
	
	int tam;
	cout<<"ingrese el tamaño: "<<endl;
	cin>>tam;
	
	int vector[tam];
	for(int i=0;i<tam;i++){
		vector[i]=0 + rand() % (100 +1 - 0) ;
	}
	int suma=0;
	
	float aux;
	
	for (int i = 0;i < tam; i++){
		for (int j = 0; j < tam-1; j++){
			if (vector[j] > vector[j+1]){ // Ordena el array de mayor a menor, cambiar el "<" a ">" para ordenar de menor a mayor
				aux = vector[j]; 
				vector[j] = vector[j+1]; 
				vector[j+1] = aux;
			}
		}
	}
	
	for(int i=0;i<tam;i++){
		cout<<vector[i]<<" ";		
	}
	cout<<endl;
	double mediana;
	int mitad=tam/2-1;
	if(tam%2==0){
		mediana=(vector[mitad]+vector[mitad+1])/2;
	}else{
		mediana=vector[mitad];
	}
	cout<<"la mediana de la poblacion es: "<<mediana<<endl;
}
