#include <iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;

// ¿qué realiza el siguiente algoritmo?

int main(){
	srand(time(NULL));
	
	int vector[10];
	
	int cont=0;
	while(cont<10){
		
		int numero=13 + rand() % (25 +1 - 13) ;
		bool sw=false;
		
		for(int i=0;i<10;i++){
			if(vector[i]==numero){
				sw=true;
			}
		}
		
		if(!sw){
			vector[cont]=numero;
			cont++;
		}
	}
	for(int i=0;i<10;i++){
		cout<<vector[i]<<" ";
	}
}
