#include <iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;

//realice un algoritmo que me sume los digitos de un numero

int sumar_digitos(int numero){
	int suma=0;
	while(numero>0){
		suma=suma+numero%10;
		numero=numero/10;
	}
	return suma;
}

int main(){
	srand(time(NULL));
	int numero = 0 + rand() % (20000 +1 - 0) ;
	cout<<"el numero es: "<<numero<<endl;
	cout<<"la suma de los digitos del numero es: "<<sumar_digitos(numero)<<endl;
	
	
}
