#include <iostream>

using namespace std;


/*
una funcion recursiva es aquella que se llama asi misma cambiando ciertos aspectos de sus parametros al llamarla,
esta esta hecha de un caso base y una llamada recursiva al correr se crean subprogramas dentro del programa y llega a un resultado
*/
int factorial(int n) {
   if(n < 0) 
   		return 0;
   else 
   		if(n > 1) 
		   return n*factorial(n-1);
   return 1;
}
int main(void) {
   int numero;
   cout<<"ingresa un numero: ";
   cin>>numero;
   cout<<"Factorial de "<<numero<<" es "<<factorial(numero);
}
