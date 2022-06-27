#include <iostream>

using namespace std;

//rellene elementos en una matriz, luego  digacual fue la temperatura mas alta, la ciudad y el dia

double funcion(int n,int m){

	
	double matriz[n][m];
	
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cout<<"ingrese el elemento de la matriz: "<<endl;
			cin>>matriz[i][j];
		}	
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cout<<matriz[i][j]<<" ";
		}	
		cout<<endl;
	}
	
	double suma=0;	
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			suma+=matriz[i][j];
		}	
	}	
	
	double promedio=suma/(n*m);
	
	
	int ciudad_mayor=0,dia_mayor=0,dia_menor=0,ciudad_menor=0,temperatura_menor=matriz[0][0],temperatura_mayor=matriz[0][0];
	
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			
			if(temperatura_mayor<matriz[i][j]){
				temperatura_mayor=matriz[i][j];
				ciudad_mayor=j;
				dia_mayor=i;
			}
			if(temperatura_menor>matriz[i][j]){
				temperatura_menor=matriz[i][j];
				ciudad_menor=j;
				dia_menor=i;
			}
			
		}	
	}	
	
	cout<<"la temperatura mas alta fue de: "<<temperatura_mayor<<" en la ciudad: "<<ciudad_mayor+1<<" el dia: "<<dia_mayor+1<<endl;
	cout<<"la temperatura mas baja fue de: "<<temperatura_menor<<" en la ciudad: "<<ciudad_menor+1<<" el dia: "<<dia_menor+1<<endl;
	
	
	
	cout<<"el promedio de las temperaturas es: "<<promedio<<endl;
	
	
	return promedio;
}
int main(){
	
	int n,m;
	cout<<"ingrese n dias: "<<endl;
	cin>>n;
	cout<<"ingrese m ciudades: "<<endl;
	cin>>m;	
	funcion(n,m);
		
}
