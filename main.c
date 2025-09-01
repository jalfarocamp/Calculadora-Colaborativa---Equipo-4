#include <stdlib.h>

int resta(int a, int b){
	return a-b;
}

void main (){
	int op=0, a, b, r=0;
	
	printf("1 Suma\n");
	printf("2 Resta\n");
	printf("3 Multiplicacion\n");
	printf("4 Salir\n");
	
	while(op!=4){
	    printf("Ingresa la operacion a hacer\n");
		scanf("%d", &op);
		
		if(op==4){
			break;
		}
		
		printf("\nIngresa el numero a:\n");
		scanf("%d", &a);
		printf("Ingresa el numero b:\n");
		scanf("%d", &b);
		
		if(op==1){
			
		}else if(op==2){
			r=resta(a,b);
			printf("El resultado de la resta es: %d\n",r);
		}else if(op==3){
			
		}
	}
}
