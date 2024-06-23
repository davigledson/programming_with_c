#include <stdio.h>
#include <math.h>
int main(){
	char opc;
	int n1,n2, potencia;
	printf("Insirar a sua opcao:\n");
	printf("p - Potencia \n");
	printf("r - Raiz quadrada \n");
	printf("d - Resto da divisao \n");
	
	scanf("%c",&opc);
	
	printf("Insirar o 1 valor:\n");
	scanf("%d",&n1);
	printf("Insirar o 2 valor: \n");
	scanf("%d",&n2);
	 potencia =  pow(n1,n2);
	switch(opc){
		case 'p':
				
			printf("Potencia de %d elevado a %d: %d\n",n1,n2,potencia);
		break;
		
		case 'r':
			printf("raiz quadrada de %d:  %3.f\n",n1,sqrt(n1));
			printf("raiz quadrada de %d: %3.f\n",n2,sqrt(n2));
		break;
		
		case 'd':
			printf("Resto da divisao de %d por %d:  %d \n",n1,n2, n1%n2);
			
		break;
		default:
			printf("Operacao Invalida!");
	}
	
	
	
	
	}
	
	
