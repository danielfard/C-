#include <iostream>

using namespace std;

/*Realizar un programa que me permita leer 10 números por teclado, 5 para un vector A
y 5 para otro vector B. Mostrar los resultados de suma, resta, multiplicación y división
de los vectores en pantalla en diferentes vectores teniendo en cuenta que solo se
pueden operar los números que en la misma posición tengan diferente valor en los
vectores A y B. */

int main(){
	int A[5],B[5];
	for(int i=0;i<5;i++){
		cout<<"digite el elemento: "<<i+1<<" del vector A: ";
		cin>>A[i];
	}
	for(int i=0;i<5;i++){
		cout<<"digite el elemento: "<<i+1<<" del vector B: ";
		cin>>B[i];
	}
	cout<<endl;
	int suma[5],resta[5],mult[5];
	float div[5];
	
	int guia=0;
	for(int i=0;i<5;i++){
		if(A[i]!=B[i]){
			suma[guia]=A[i]+B[i];
			guia++;
		}else{
				cout<<"el elemento del vector A y el vector B son iguales"<<"["<<B[i]<<"]"<<endl;
		}
	}
	cout<<"la suma de ellos es: "<<endl;
	for(int i=0;i<guia;i++){
		cout<<suma[i]<<" ";
	}
	cout<<endl;
	guia=0;
	for(int i=0;i<5;i++){
		if(A[i]!=B[i]){
			resta[guia]=A[i]-B[i];
			guia++;
		}else{
				cout<<"el elemento del vector A y el vector B son iguales"<<"["<<B[i]<<"]"<<endl;
		}
	}
	cout<<"la resta de ellos es: "<<endl;
	for(int i=0;i<guia;i++){
		cout<<resta[i]<<" ";
	}
	cout<<endl;
	guia=0;
	for(int i=0;i<5;i++){
		if(A[i]!=B[i]){
			mult[guia]=A[i]*B[i];
			guia++;
		}else{
				cout<<"el elemento del vector A y el vector B son iguales"<<"["<<B[i]<<"]"<<endl;
		}
	}
	cout<<"la multiplicacion de ellos es: "<<endl;
	for(int i=0;i<guia;i++){
		cout<<mult[i]<<" ";
	}
	cout<<endl;
	guia=0;
	for(int i=0;i<5;i++){
		if(A[i]!=B[i] && B[i]!=0){
			resta[guia]=A[i]/B[i];
			guia++;
		}else{
			cout<<"El valor del vector B es [0] o el elemento del vecto A y el vector B son iguales"<<endl;
		}
	}
	cout<<"la division de ellos es: "<<endl;
	for(int i=0;i<guia;i++){
		cout<<div[i]<<"  ";
	}
	
}
