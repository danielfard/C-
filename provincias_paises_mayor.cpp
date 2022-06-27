#include <iostream>

using namespace std;

// realizar la estructura de provincia pais y halle el mayor a partir de manejo de arreglos.

struct Provincia{
	string nombre_provincia;
	int poblacion_provincia;
	double porcentaje_provincia;
};

struct Pais{
	string nombre_pais;
	int cant_provincias;
	int poblacion;
};

struct mayor_p{
	string nombre_pais;
	string nombre_provincia;
	double procentaje;
};

mayor_p poblacion(Pais vector_paises[],Provincia matriz_provincias[][3],int tam){
	
	long int suma=0;
	for(int i =0;i<tam;i++){
		for(int j =0;j<tam;j++){
		
				suma+=matriz_provincias[i][j].poblacion_provincia;	
			
			
		}
		
			vector_paises[i].poblacion=suma;
			suma=0;	
			
	}
	for(int i =0;i<tam;i++){
		for(int j =0;j<tam;j++){
			
				matriz_provincias[i][j].porcentaje_provincia=matriz_provincias[i][j].poblacion_provincia*100/vector_paises[i].poblacion;
			
			
		}
	}
	
	double mayor=matriz_provincias[0][0].porcentaje_provincia;
	string nombre=matriz_provincias[0][0].nombre_provincia;
	int indice_mayor=0;
	
	for(int i =0;i<tam;i++){
		for(int j =0;j<tam;j++){
			
			if(mayor<matriz_provincias[i][j].porcentaje_provincia){
				mayor=matriz_provincias[i][j].porcentaje_provincia;
				nombre=matriz_provincias[i][j].nombre_provincia;
				indice_mayor=i;
			}
		}
	}
	
	
	mayor_p p;
	p.nombre_pais=vector_paises[indice_mayor].nombre_pais;
	p.nombre_provincia=nombre;
	p.procentaje=mayor;
	
	return p;
}


int main(){
	
	int tamano=3;
	Pais vector_paises[3];
	Provincia matriz_provincias[3][3];
	mayor_p a=poblacion(vector_paises,matriz_provincias,3);
	
	
	
}
