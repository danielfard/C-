#include <iostream>

using namespace std;

//ingrese la cantidad de semanas que desea saber datos y simule los comportamientos de una fabrica
// el total de semanas procesadas
// el total de unidades producidas
// el total de unidades defecuosas
// el porcentaje de maquinas defectuosas
// la cantidad de unidades producidas para la compañia
// la cantidad de unidades defectuosas para la compañia
// el porcentaje de maquinas defectuosas para la planta
// la cantidad de unidades producidas para la planta
// la cantidad de unidades defectuosas para la planta
int main(){
	
	int cantidad_producida=0,cantidad_defectuosa=0;
	int total_unidades_defectuosas=0,total_unidades_producidas=0;
	int total_unidades_defectuosas_compania=0,total_unidades_producidas_compania=0;
	int total_unidades_prod_total=0,total_unidades_def_total=0;
	int semanas=0;
	printf("ingrese la cantidad de semanas que desea saber datos: ");
	scanf("%d",semanas);
		
		for(int semana=1;semana<=semanas;semana++){
			for(int planta=1;planta<=5;planta++){
				for(int dia=1;dia<=7;dia++){
				
					printf("ingrese la cantidad producida de la planta %d en el dia %d : ",planta,dia);
					scanf("%d",&cantidad_producida);
					
					printf("ingrese la cantidad defectuosa de la planta %d en el dia %d : ",planta,dia);
					scanf("%d",&cantidad_defectuosa);
					
					total_unidades_producidas=total_unidades_producidas+cantidad_producida;
					total_unidades_defectuosas=total_unidades_defectuosas+cantidad_defectuosa;
					total_unidades_prod_total=total_unidades_prod_total+cantidad_producida;
					total_unidades_def_total=total_unidades_def_total+cantidad_defectuosa;
					
				}
			
			printf("la cantidad de unidades producidas para la planta %d es: %d \n",planta,total_unidades_producidas);
			printf("la cantidad de unidades defectuosas para la planta %d es: %d \n",planta,total_unidades_defectuosas);	
			int total=total_unidades_defectuosas+total_unidades_producidas;
			float porcentaje_defectuosas=total_unidades_defectuosas*100/total;
			
			printf("el porcentaje de maquinas defectuosas para la planta %d es: %f \n",planta,porcentaje_defectuosas);
			
			printf("la cantidad de unidades producidas para la compañia: %d \n",total_unidades_producidas_compania);
			printf("la cantidad de unidades defectuosas para la compañia: %d \n",total_unidades_defectuosas_compania);
			total_unidades_defectuosas_compania=total_unidades_defectuosas_compania+total_unidades_defectuosas;
			total_unidades_producidas_compania=total_unidades_producidas_compania+total_unidades_producidas;
			
			total=total_unidades_defectuosas_compania+total_unidades_producidas_compania;
			float porcentaje_total=total_unidades_defectuosas_compania*100/total;
			
			printf("el porcentaje de maquinas defectuosas para la compañia es: %f \n",porcentaje_total);
			total_unidades_defectuosas=0;
			total_unidades_producidas=0;
			}
		}

	printf("el total de semanas procesadas fueron: %d \n",semanas);
	printf("el total de unidades producidas fueron: %d \n",total_unidades_prod_total);
	printf("el total de unidades defecuosas fueron: %d \n",total_unidades_def_total);
}
