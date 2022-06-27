#include <stdio.h> 
#include <stdlib.h> 
#include <iostream>
#include <string.h>
#include <graphics.h>

using namespace std;

// realice un encriptador de palabras leyendo las palabras a partir de un txt, el algoritmo esta realizado con graficos graphics.h y manejo de archivos

int menu(int producto[], char mensaje[], int numeros[],int tam){
	
	int sw=1, seg=0,seg2=0;
	char opcion,opcion2,opcion3;	
	
	menus:
	setbkcolor(LIGHTGRAY);
	cleardevice();
	setfillstyle(SOLID_FILL,DARKGRAY);
	bar(0, 0, 1280,60);
	setbkcolor(DARKGRAY);					
		
	settextstyle(3,HORIZ_DIR,1);
	setcolor(WHITE);
	setfillstyle(SOLID_FILL,WHITE);
	
	bar(0, 740, 120,60);
	setbkcolor(WHITE);
		
	setcolor(BLUE);
	settextstyle(10,HORIZ_DIR,1);
	outtextxy(15,200,"Archivo");
	outtextxy(18,230,"(E)");
	outtextxy(10,400,"Encriptar");
	outtextxy(15,430,"(R)");
	outtextxy(35,600,"Salir");
	outtextxy(32,630,"(N)");
	
	setfillstyle(SOLID_FILL,BLACK);
	bar(1090, 80, 1300,140);
	setbkcolor(BLACK);

	setfillstyle(SOLID_FILL,RED);
	bar(1070, 60, 1280,120);
	setbkcolor(RED);
	setcolor(WHITE);
	outtextxy(1120,65,"Ver Matriz");
	outtextxy(1160,85,"(I)");
	opcion = getch();
	do{	
		switch (opcion){
            
			case 'e': 
				menu2:	
				setfillstyle(SOLID_FILL,BLACK);
				bar(150, 370, 520,220);
				setbkcolor(BLACK);
            
				setfillstyle(SOLID_FILL,BLUE);
				bar(130, 350, 500,200);
				setbkcolor(BLUE);
				
				setcolor(WHITE);
				settextstyle(10,HORIZ_DIR,1);
				outtextxy(150,220,"Leer");
				outtextxy(150,240,"(O)");
				outtextxy(150,290,"Mostrar Archivo");
				outtextxy(150,310,"(P)");			
				
				
				opcion2=getch();
					do{
						if(opcion2=='o'){
						
								seg=1;							
								setfillstyle(SOLID_FILL,BLACK);
								bar(550, 250, 950,320);
								setbkcolor(BLACK);
								setcolor(WHITE);	
								setfillstyle(SOLID_FILL,BLUE);
								bar(530, 230, 930,300);
								
								setbkcolor(BLUE);
								setcolor(WHITE);
								outtextxy(550,250,"Archivo leido Correctamente. . .");
								opcion2=getch();												
						}else{
							if(opcion2=='p'&&seg==1){
								
								setfillstyle(SOLID_FILL,BLACK);
								bar(550, 350, 1150,420);
								setbkcolor(BLACK);
								setcolor(WHITE);
								setfillstyle(SOLID_FILL,BLUE);
								bar(530, 330, 1130,400);
								setbkcolor(BLUE);
								setcolor(WHITE);
								outtextxy(550,340,"Para Ver El Mensaje Codificado Sin Encriptar. . .");
								outtextxy(550,370,"Revise El Archivo En (\\Folders\\Codigo). . .");
								
								opcion2=getch();	
								goto menus;
													
							}else{
								if(opcion2=='p' && seg==0){
									setfillstyle(SOLID_FILL,BLACK);
									bar(840, 740, 1280,670);
									setbkcolor(BLACK);
									setcolor(WHITE);	
									setfillstyle(SOLID_FILL,RED);
									bar(850, 730, 1270,680);
									
									setbkcolor(RED);
									setcolor(WHITE);
									outtextxy(1000,683,"ERROR. . .");
									outtextxy(900,707,"LEA PRIMERO EL ARCHIVO. . .");
									
									opcion2=getch();	
									goto menus;
										
								}
								
							}
							if(opcion=='n'){
								exit(0);
							}else{
								goto menus;
									
							}
								
							
						}
								
					}while(sw);
					          
            case 'r': 
            
				setfillstyle(SOLID_FILL,BLACK);
				bar(150, 590, 450,390);
				setbkcolor(BLACK);
            
				setfillstyle(SOLID_FILL,BLUE);
				bar(130, 570, 430,370);
				setbkcolor(BLUE);
					
				setcolor(WHITE);
				outtextxy(150,410,"Encriptar Archivo");
				outtextxy(150,430,"(K)");
				outtextxy(150,500,"Mostrar Archivo");
				outtextxy(150,520,"(L)");
									
                opcion3=getch();
                if(opcion3== 'k'){
                	
					seg2=1;
                	setfillstyle(SOLID_FILL,BLACK);
					bar(530,420, 950,490);
					setbkcolor(BLACK);
		        
					setfillstyle(SOLID_FILL,BLUE);
					bar(510,400, 930,470);
					setbkcolor(BLUE);
						
					setcolor(WHITE);
					outtextxy(530,420,"Archivo Encriptado Correctamente");
					opcion3=getch();
					if(opcion3=='l'&& seg2==1){
						setfillstyle(SOLID_FILL,BLACK);
						bar(530,520, 1100,570);
						setbkcolor(BLACK);
			        
						setfillstyle(SOLID_FILL,BLUE);
						bar(510,500, 1080,550);
						setbkcolor(BLUE);
							
						setcolor(WHITE);
						outtextxy(530,515,"Revise El Archivo En (\\Folder\\Encriptado). . .");
						opcion3==getch();
						goto menus;
					}
				}else{
					if(opcion3=='l'&& seg2==1){
						setfillstyle(SOLID_FILL,BLACK);
						bar(530,520, 1100,570);
						setbkcolor(BLACK);
			        
						setfillstyle(SOLID_FILL,BLUE);
						bar(510,500, 1080,550);
						setbkcolor(BLUE);
							
						setcolor(WHITE);
						outtextxy(530,515,"Revise El Archivo En (\\Folder\\Encriptado). . .");
						opcion3==getch();
						goto menus;
					}else{
						if(opcion3=='l' && seg==0){
							setfillstyle(SOLID_FILL,BLACK);
							bar(840, 740, 1280,670);
							setbkcolor(BLACK);
							setcolor(WHITE);	
							setfillstyle(SOLID_FILL,RED);
							bar(850, 730, 1270,680);
							
							setbkcolor(RED);
							setcolor(WHITE);
							outtextxy(1000,683,"ERROR. . .");
							outtextxy(860,707,"ENCRIPTE PRIMERO EL ARCHIVO. . .");
							
							opcion3=getch();	
							goto menus;
						
						}
					}	
				}
					if(opcion3=='n'){
							exit(0);
					}			
					else{
							goto menus;	
						}
					
			case 'n':
		
				exit(0);
				break;
			case 'i':
				
				setfillstyle(SOLID_FILL,BLACK);
				bar(980, 250, 1130,380);
				setbkcolor(BLACK);
				setcolor(WHITE);	
				setfillstyle(SOLID_FILL,RED);
				bar(960, 230, 1110,360);
				
				settextstyle(10,HORIZ_DIR,5);
				setbkcolor(RED);
				setcolor(WHITE);
				outtextxy(970,240,"2   5");
				outtextxy(970,300,"-3  -7");			
				
				getch();
				goto menus;
							
			default:
			
				setfillstyle(SOLID_FILL,BLACK);
				bar(840, 740, 1280,670);
				setbkcolor(BLACK);
				setcolor(WHITE);	
				setfillstyle(SOLID_FILL,RED);
				bar(850, 730, 1270,680);
				
				setbkcolor(RED);
				setcolor(WHITE);
				outtextxy(1000,683,"ERROR. . .");
				outtextxy(900,707,"DIGITE UNA TECLA VALIDA. . .");
				opcion = getch();
				goto menus;
						
    		}	
		}while(sw);
			
	getch();
}

	
void multInversa(int producto[],int tam, char mensaje[], int numeros[]){
	
	int matrizInversa[2][2]={-7, -5, 3, 2};
	int codigo[tam];
	
	for(int i=0;i<tam;i++)
		codigo[i]=0;
	
	for(int i=0,j=0;i<tam;i++){
	
		if(i==tam/2)
			break;
			
		codigo[j]+= producto[j] * matrizInversa[0][0];
		codigo[j]+=producto[j+1] * matrizInversa[1][0];
		codigo[j+1]+=producto[j] * matrizInversa[0][1];
		codigo[j+1]+=producto[j+1] * matrizInversa[1][1];
		j=j+2;	
	}
	
	if(tam%2!=0){
		codigo[tam-1]=numeros[tam-1];
		
	}
	menu(producto, mensaje, numeros, tam);
		
}

void multiplicacion(int numeros[], int tam, char mensaje[]){

	int matrizClave[2][2]={2,5,-3,-7}, producto[tam];
	FILE *fencriptado=NULL;
	fencriptado=fopen("Encriptado.txt","w");
			
	for(int i=0;i<tam;i++)
		producto[i]=0;	
	
	for(int i=0,j=0;i<tam;i++){
	
		if(i==tam/2)
			break;
			
		producto[j]+= numeros[j] * matrizClave[0][0];
		producto[j]+=numeros[j+1] * matrizClave[1][0];
		producto[j+1]+=numeros[j] * matrizClave[0][1];
		producto[j+1]+=numeros[j+1] * matrizClave[1][1];
		j=j+2;
	}
	
	for(int i=0;i<tam;i++){
		if(i==tam-1 && tam%2!=0){
			
			producto[tam-1]=numeros[tam-1];
			fprintf(fencriptado,"%d ",producto[i]);	
		}else{
		
			fprintf(fencriptado,"%d ",producto[i]);	
		}
			
	}
	
	fclose(fencriptado);
	multInversa(producto, tam, mensaje, numeros);			
}

void cifrado(char mensaje[], int tam){
	
	char cifrado[29]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','ñ','o','p','q','r','s','t','u','v','w','x','y','z','.',' '};
	int numeros[tam];
	
	FILE *fcifrado=NULL;
	fcifrado=fopen("Codigo.txt","w");
	
	for(int j=0;j<tam;j++){

		for(int i=0;i<27;i++){

			if(mensaje[j]==cifrado[i]){
				
				numeros[j]=i+1;
				fprintf(fcifrado,"%d ",numeros[j]);
			}
				
		}
		
	}
	
	for(int i=0;i<tam;i++){
		
		if(numeros[i]==0 || numeros[i]>30){
			numeros[i]=0;
		}
	}
	
	fclose(fcifrado);
	multiplicacion(numeros, tam, mensaje);
	
}

void lectura(){
	
	char lectura[100],mensaje[100];
	int tam=0,i=0,sw=0;
	FILE *archivo = NULL;
	
	
	initwindow(1280,1040, "Encriptador",150,150);
	setbkcolor(LIGHTGRAY);
	cleardevice();
	settextstyle(10,HORIZ_DIR,1);
	
	archivo = fopen("Mensaje.txt","r");
	
	if (archivo == NULL){
	
	    setfillstyle(SOLID_FILL,DARKGRAY);
		bar(520, 350, 890,420);
		setbkcolor(BLACK);
		setcolor(WHITE);	
		setfillstyle(SOLID_FILL,RED);
		bar(500, 330, 870,400);
		
		setbkcolor(RED);
		setcolor(WHITE);
		outtextxy(620,345,"ERROR. . .");
		outtextxy(530,370,"EL ARCHIVO NO EXISTE. . .");
		
		getch();
		exit(0);

	}else{
		
		while(!(feof(archivo))){		
	  	 	
			fgets(lectura,100,archivo);
	  	 		
			if(sw==0){
				for(int j=0; i<strlen(lectura); i++,j++){
 				
 					mensaje[j]=lectura[j];
 				}
 				
 				sw=sw+1;
			}		
 			
 			tam=tam+strlen(lectura);
 			if(sw!=0){	
				for(int j=0;i<tam;i++,j++){
					
		   			mensaje[i]=lectura[j];	   	
				}
			}
				
		}
		
		for(int k=0;k<i;k++)
			if(mensaje[k]>='a' && mensaje[k]<='z' || mensaje[k]<='.'){
				
			}else{
				
				setfillstyle(SOLID_FILL,DARKGRAY);
				bar(140, 350, 1190,420);
				setbkcolor(BLACK);
				setcolor(WHITE);	
				setfillstyle(SOLID_FILL,RED);
				bar(120, 330, 1170,400);
				
				setbkcolor(RED);
				setcolor(WHITE);
				outtextxy(600,345,"ERROR. . .");
				outtextxy(140,370,"EL ARCHIVO SOLO CONTENDRA LETRAS ENTRE LA ''A'' Y LA ''Z'' (MINUSCULAS). . .");
				getch();
				exit(0);
				break;
			}
		
	}
	
    fclose(archivo);
	cifrado(mensaje,tam);
}

int main(){ 
	
	lectura();
	
}
