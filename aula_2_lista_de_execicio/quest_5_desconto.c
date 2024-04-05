#include <stdio.h>
int main(){
	/*
	5- Faça um programa para calcular quanto será pago por um produto, sendo que o preço
	do produto e o desconto são fornecidos pelo usuário. Apresentar o valor a ser pago pelo
	produto.


	*/
	float valorProduto =0;
	float desconto =0;	
	printf("Digite o valordo Produto:");
	scanf("%f",&valorProduto);
	
	printf("Digite o desconto:");
	scanf("%f",&desconto);
	
	printf("A O produto com R$ %f com desconto de %f  \n ficarar com o valor final de  %f \n",valorProduto, desconto, ( valorProduto *(  desconto / 100)));
	

	
}
