#include <stdlib.h>
#include <stdio.h>

//realice un juego lo cual se pueda mover a traves del mapa una figura.

int main(){
	char mapa[20][20];
	int comandos[7]={1,2,3,4,5,6,9};
	char i=0,j=0;
	for(i=0;i<20;i++){
		for(j=0;j<20;j++){
			mapa[i][j]='-';
		}
	}
	bool pluma=false;
	int D=0;
	int fila=9,columna=9;
	mapa[fila][columna]='*';
	int op;
	int x=0;
	printf("%s","digite la opcion[1]Pluma Arriba -- [2] Pluma Abajo -- [3]Giro Derecha -- [4]Giro Izquierda -- [5] Adelantar -- [6]Mostrar Figura -- [9] Fin: ");
	scanf("%d",&op);	
	while(op!=comandos[6]){
		
		if(op==comandos[0]){
			pluma=false;
			printf("%s\n","Pluma Arriba...");
				
		}else{
			if(op==comandos[1]){
				pluma=true;
				printf("%s\n","Pluma Abajo...");
			}else{
				if(op==comandos[2]){
					D++;
					if(D>3){
						D=0;
					}
				}else{
					if(op==comandos[3]){
						D--;
						if(D<0){
							D=D+4;
						}
					}else{
						if(op==comandos[4]){
							x=0;
							printf("%s","digite la cantidad de movimiento: ");
							scanf("%d",&x);
							if(pluma==true){
								switch(D){
								case 0:
									i=0;
									while(i<=x){
										if(fila>=0){
											mapa[fila][columna]='*';
											fila--;	
										}else{
											fila=0;
											break;
										}
										i++;
									}	
									break;
								case 1:
									i=0;
									while(i<=x){
										if(columna<20){
											mapa[fila][columna]='*';
											columna++;	
										}else{
											columna=19;
											break;
										}
										i++;
									}	
									break;
								case 2:
									i=0;
									while(i<=x){
										if(fila<20){
											mapa[fila][columna]='*';
											fila++;	
										}else{
											fila=19;
											break;
										}
										i++;
									}
									break;
								case 3:
									i=0;
									while(i<=x){
										if(columna>=0){
											mapa[fila][columna]='*';
											columna--;	
										}else{
											columna=0;
											break;
										}
										i++;
									}
									
									break;
								}				
							}
							
		
						}else{
							if(op==comandos[5]){
								for(i=0;i<20;i++){
									for(j=0;j<20;j++){
										printf("%c ",mapa[i][j]);
									}
									printf("\n");
								}
							}else{
								printf("%d",comandos[3]);
									printf("%s\n","digite una opcion valida...");
							}
						}
					}			
				}		
			}	
		}
		
		printf("%s","digite la opcion [1]Pluma Arriba -- [2] Pluma Abajo -- [3]Giro Derecha -- [4]Giro Izquierda -- [5] Adelantar -- [6]Mostrar Figura -- [9] Fin: ");
		scanf("%d",&op);
	}
	
	
	
	
}
