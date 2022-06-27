#include <iostream>

using namespace std;

/*Crea una funcion que tome como parametro un numero en decimal y retorne el numero en binario*/

void Decimal_To_Binario(int numero){
	int tam=0;
	int numero_copy=numero;
	while(numero_copy>0){
		
		numero_copy=numero_copy/2;
		tam++;
		
	}
	
	int vector_binarios[tam];
	
	numero_copy=numero;
	int i=0;
	while(numero_copy>0){
		
		vector_binarios[i]=numero_copy%2;
		numero_copy=numero_copy/2;
		i++;
	}
	for(int j=tam-1;j>=0;j--){
		cout<<vector_binarios[j]<<" ";
	}

}


int main(){
				
		int numero;
		cout<<"digite el numero: ";
		cin>>numero;
		Decimal_To_Binario(numero);
		
}
