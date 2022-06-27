#include <stdio.h>
#include <stdlib.h>

// realice la multiplicacion rusa a partir de una funcion.

int mult_rusa(int A, int B) {
	if(A==1)
		return (B);
	if(A%2!=0)
		return (B+mult_rusa( A/2 , B*2));
	else
		return(mult_rusa( A/2 , B*2));
	                    
}

int main(){
	int A,B;
	printf("ingrese A:\n");
	scanf("%d",&A);
	printf("ingrese B:\n");
	scanf("%d",&B);
	
	printf("Metodo de la multiplicacion rusa: %d",mult_rusa(A,B));
}


