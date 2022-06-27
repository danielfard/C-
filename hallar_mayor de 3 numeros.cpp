#include <iostream>

using namespace std;

//leer 3 numeros y decir cual es mayor de los 3

int main(){
	
	int numero1,numero2,numero3;
	
	cout<<"digite el numero 1"<<endl;
	cin>>numero1;//variable de entrada
	cout<<"digite el numero 2"<<endl;
	cin>>numero2;//variable de entrada
	cout<<"digite el numero 3"<<endl;
	cin>>numero3;//variable de entrada
	
	if(numero1>numero2 && numero1>numero3){
		cout<<"el mayor es: "<<numero1<<endl;//salida
	}else{
		if(numero2>numero1 && numero2>numero3){
			cout<<"el mayor es: "<<numero2<<endl;//salida
		}else{
			if(numero3>numero2 && numero3>numero1){
				cout<<"el mayor es: "<<numero3<<endl;//salida
			}
		}
	}
}
