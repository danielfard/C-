//Algoritmo para calcular área de una figura

#include <iostream>

using namespace std;

int hallar_cuadrado(int numero){
	return numero*numero;
}
int hallar_area_triangulo(int base, int altura){
	return (base*altura)/2;
}
int hallar_area_rectangulo(int base, int altura){
	return (base*altura);
}
int main(){
	int opcion;
	cout<<"ingrese la opcion 1 cuadrado 2 triangulo 3 rectangulo: "<<endl;
	cin>>opcion;
	switch(opcion){
		case 1:
			int lado;
			cout<<"digite el lado del cuadrado: "<<endl;
			cin>>lado;
			cout<<"el area del cuadrado es: "<<hallar_cuadrado(lado)<<endl;
			//area del cuadrado
			break;
		case 2:
			
			int altura,base;
			cout<<"ingrese la base: "<<endl;
			cin>>base;
			cout<<"ingrese la altura"<<endl;
			cin>>altura;
			cout<<"el area del triangulo es: "<<hallar_area_triangulo(base,altura);
			//area del triangulo
			break;
		case 3:
			altura,base;
			cout<<"ingrese la base: "<<endl;
			cin>>base;
			cout<<"ingrese la altura"<<endl;
			cin>>altura;
			cout<<"el area del rectangulo es: "<<hallar_area_rectangulo(base,altura);
			//area del rectangulo
			break;
	}
}
