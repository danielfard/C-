#include <iostream>

using namespace std;

//a partir del manejo de vectores o arreglos unidimensionales realice el manejo de notas de estudiantes y: 
//muestre la lista de los estudiantes que obtuvieron mas del 80% de nota
//halle el promedio de los elementos en las posiciones impares
//el elemento buscado está en la posicion

double promedio_pos_impares(int vector[],int tam){
	double suma=0;
	for(int i=0;i<tam;i++){
		if(i%2!=0){
			suma=suma+vector[i];
		}
	}
	double promedio=suma/tam;
	return promedio;
}

int buscar_posicion_vector(int vector[],int tam,int elemento){

	for(int i=0;i<tam;i++){
		if(vector[i]==elemento){
			return i;
		}
	}
	return -1;
}

void almacenar_respuestas(char vector_respuestas[],int N){
	for(int i=0;i<N;i++){
		cout<<"agrege la respuesta "<<i+1<<" en el vector: "<<endl;
		cin>>vector_respuestas[i];
	}
}

void almacenar_respuestas_estudiantes(char matriz_preguntas_respuestas[][100],int M,int N){
	for(int i=0;i<M;i++){
		for(int j=0;j<N;j++){
			cout<<"agrege la respuesta de al pregunta "<<j+1<<" en el vector respuestas del estudiante: "<<i+1<<endl;
			cin>>matriz_preguntas_respuestas[i][j];
		}
	}
}

void almacenar_respuestas(){
	
	int M, N;
	double cont=0;
	double porcentaje;
	cout<<"digite la cantidad de estudiantes: "<<endl;
	cin>>M;
	cout<<"digite la cantidad de preguntas"<<endl;
	cin>>N;
	char matriz_preguntas_respuestas[M][100], vector_respuestas[N];
	almacenar_respuestas(vector_respuestas,N);
	almacenar_respuestas_estudiantes(matriz_preguntas_respuestas,M,N);
	
	cout<<"la lista de los estudiantes que obtuvieron mas del 80% de nota fueron los estudiantes: "<<endl;
	for(int i=0;i<M;i++){
		for(int j=0;j<N;j++){
			if(matriz_preguntas_respuestas[i][j]==vector_respuestas[j]){
					cont++;
			}
		}
		porcentaje=cont*100/N;
		if(porcentaje>80){
			cout<<i+1<<" -- ";
		}
	}
}


int main(){
	
	int opcion=0,tam,elemento;
	while(opcion!=4){
		cout<<"digite una opcion para realizar o 4 para salir: "<<endl;
		cin>>opcion;
		switch(opcion){
			case 1:{
				cout<<"digite el tamaño del vector: "<<endl;
				cin>>tam;
				int vector[tam];
				for(int i=0;i<tam;i++){
					cout<<"digite el elemento del vector: "<<endl;
					cin>>vector[i];
				}
				
				cout<<"el promedio de los elementos en las posiciones impares es: "<<promedio_pos_impares(vector,tam)<<endl;
				
				break;
			}
			case 2:{
				int elemento;
				cout<<"digite el tamaño del vector: "<<endl;
				cin>>tam;
				int vector[tam];
				
				for(int i=0;i<tam;i++){
					cout<<"digite os elementos del vector: "<<endl;
					cin>>vector[i];
				}
				cout<<"que elemento desea buscar: "<<endl;
				cin>>elemento;
				cout<<"el elemento buscado está en la posicion: "<<buscar_posicion_vector(vector,tam,elemento)<<endl;
				break;
			}
			case 3:
				almacenar_respuestas();
				break;
		}
	}
}








