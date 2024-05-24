#include <stdio.h>
int main(){
	int cod,quant;
	printf("Digite o Codigo do produto:");
	scanf("%d",&cod);
	
	printf("Digite a Quantidade:");
	scanf("%d",&quant);
		
		switch(cod){
			case 100:
			printf("Produto: Cachorro-quente\n");
			printf("Total a pagar: %f",quant *5.00);
			break;
			
			case 101:
			printf("Produto: Completo\n");
			printf("Total a pagar: %f",quant *7.00);
			break;
			
			case 102:
			printf("Produto: X-Frango\n");
			printf("Total a pagar: %f",quant *13.60);
			break;
			
			case 103:
			printf("Produto: Hamburger\n");
			printf("Total a pagar: %f",quant *15.40);
			break;
			
			case 104:
			printf("Produto: Cheeseburguer\n");
			printf("Total a pagar: %f",quant *15.50);
			break;
			
			case 105:
			printf("Produto: Panquecas\n");
			printf("Total a pagar: %f",quant *21.50);
			break;
			
			case 106:
			printf("Produto: Refrigerante\n");
			printf("Total a pagar: %f",quant *6.00);
			break;
			
			default:
				printf("Codigo Invalido!\n");	
		}
	
}