#include <iostream>

using namespace std;

//crear una funcion que saque el factorial de un numero.

int factorial(int numero){
	if(numero==0){
		return 1;
	}else{
		int factorial_=1;
		for(int i=1;i<=numero;i++){//5 x 4 x 3 x 2 x 1 == 1 x 2 x 3 x 4 x 5
			factorial_*=i; //factorial=factorial*i
		}
		return factorial_;
	}
}

int main(){

	cout<<factorial(3);
}
