#include <iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;

//realice un algoritmo que genere un numero aleatorio entre dos valores suministrados a la funcion.

int aleatorio(int a,int b){
	
	return a + rand() % (b +1 - a) ;
}
int main(){
	srand(time(NULL));
	int a,b;
	
	cout<<"ingrese el primer numero: "<<endl;
	cin>>a;
	cout<<"ingrese el segundo numero: "<<endl;
	cin>>b;
	
	cout<<aleatorio(a,b);
	
}
