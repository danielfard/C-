#include <iostream>

using namespace std;

// realizar el inventario de articulos por familia a traves de estructuras.

struct Articulo{
	string nombre;
	double precio;
	string unidad;
	int cantidad;
};

struct Familia{
	
	long identificacion;
	Articulo articulos_por_familia[100];
	string direccion;
	string apellidos;
	int nArt;
	
	
};

double actualizarayudas(Articulo articulos[1000],Familia infoFamilia[30000]);

int main(){
	long Nfamilias=30000;
	
	Familia infoFamilia[Nfamilias];
	
	long numArt=1000;
	Articulo articulos[numArt];
	
	actualizarayudas(articulos,infoFamilia);
	
}

double actualizarayudas(Articulo articulos[1000],Familia infoFamilia[30000]){
	double presupuesto_total=0;
	
	int cantidad=0;
	for(int i=0;i<30000;i++){
		for(int j=0;j<1000;j++){
			string producto=infoFamilia[i].articulos_por_familia[j].nombre;
			
			for(int g=0;g<30000;g++){
				for(int l=0;l<1000;l++){
					if(producto==infoFamilia[g].articulos_por_familia[l].nombre){
						cantidad=cantidad+1;
						break;
						
						
					}
				}
				
			}
			
			
			for(int l=0;l<1000;l++){
				if(producto==articulos[l].nombre){
					articulos[l].cantidad=cantidad;
					
					break;
				}
			}
			cantidad=0;
		}	
	}
	for(int k=0;k<1000;k++){
	
		
		presupuesto_total=presupuesto_total+articulos[k].cantidad*articulos[k].precio;		
	}
	
	return presupuesto_total;
}

