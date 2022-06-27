#include <iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;

//realizar una matriz y realizar las siguientes operaciones
// la suma de la cada fila columna 5
// el mayor de cada fila

int main(){
	
	srand(time(NULL));
	int matriz[5][5];
	for (int i = 0; i < 5; i++) {
      	for (int j = 0; j < 5; j++) {
      		matriz[i][j]=1 + rand() % (100 +1 - 1);
      	}
   	}
   	
   	for (int i = 0; i < 5; i++) {
      for (int j = 0; j < 5; j++) {
         cout<< matriz[i][j]<<" ";
      }
      cout << "\n";
   }
   	
	int suma;
	for (int i = 0; i < 5; i++) {
		suma=0;
      	for (int j = 0; j < 5; j++) {
      		suma=suma+matriz[i][j];
      	}
    	cout<<"la suma de la cada fila columna 5 es: "<<suma<<endl;  	
   	}
   	
	int mayor;
	for (int i = 0; i < 5; i++) {
		mayor=matriz[0][i];
      	for (int j = 0; j < 5; j++) {
      		if(matriz[j][i]>mayor){
      			mayor=matriz[j][i];
			}
      	}
    	cout<<"el mayor de la fila: "<<i<<" es: "<<mayor<<endl;  	
   	}
   	
   	matriz[4][4]=0;
   	
   	for (int i = 0; i < 5; i++) {
      for (int j = 0; j < 5; j++) {
         cout<< matriz[i][j]<<" ";
      }
      cout << "\n";
   }
	
}
