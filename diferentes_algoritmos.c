#include <stdio.h>

// realizar un algoritmo en c que lea un numero y muestre sus unidades, decenas y centenas
// tambien que cambie de decimal a unariabit
// y que muestre la suma de los n primeros numeros pares

void UDC_numero(){
	int n;
	printf("%s","digite n: ");
	scanf("%d",&n);

	int residuo=0;
	
		
	residuo=n%10;
	n=n/10;
	printf("%s","unidades: ");
	printf("%d",residuo);
	
	residuo=n%10;
	n=n/10;
	printf("%s"," decenas: ");
	printf("%i",residuo);
	
	residuo=n%10;
	n=n/10;
	printf("%s"," centenas: ");
	printf("%i\n",residuo);
}

void Unariabit(){
	int numero;
	printf("%s"," digite el numero: ");
	scanf("%d",&numero);
	
	if(numero>=2 && numero<=31){
		
		printf("%s"," el numero en Unariabit es: ");
		int i=1;
		while(i<=numero-1){
			printf("%s","1");
			i++;
		}
		printf("%s\n","0");
		
		
		
	}else{
			printf("%s\n","error en el rango...");
	}
	
}

void numeros_pares(){
	
	int n;
	printf("%s \n","digite n: ");
	scanf("%d",&n);
	int numero_par=0;
	int suma=0;
	int i=0;
	if(n>0){
		while(i<n){
			numero_par=numero_par+2;
			suma=suma+numero_par;
			
			printf("%d",numero_par);
			printf("%s"," ");
			i++;
		}
		printf("%s","y su suma es: ");
		printf("%d\n",suma);
	}else{
		if(n<0){
		
			while(i>n){
				numero_par=numero_par-2;
				suma=suma+numero_par;
				printf("%d",numero_par);
				printf("%s"," ");
				i--;
			}
		
			printf("%s","y su suma es: ");
			printf("%d",suma);
		}else{
			
			printf("%s","el numero es 0...");
		}
	}
	
}




int main(){
	
	UDC_numero();
	
    Unariabit();
	
	numeros_pares();
	
	
}
