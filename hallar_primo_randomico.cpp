#include <iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;

// realizar un algoritmo que genere un numero randomico luego hallar si ese numero es primo.

int main(){
	srand(time(NULL));
	int cont=0;
	while(cont<5){
		
		int numero=13 + rand() % (142 +1 - 13) ;
		int divisores=1;
		
		bool sw=true;
		for(int i=2;i<=numero;i++){
			
			if(numero%i==0){
				divisores++;
			}
			if(divisores>2){
				sw=false;
				break;
			}
		}
		if(sw){
			cout<<numero<<endl;
			cont++;
		}
		
	}
	
}
