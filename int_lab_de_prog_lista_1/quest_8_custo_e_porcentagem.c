#include <stdio.h>
int main(){
	/*
	
	8- O custo de um carro novo ao consumidor é a soma do custo de fábrica com a
	porcentagem do distribuidor e dos impostos (aplicados ao custo de fábrica). Supondo que
	o percentual do distribuidor seja de 28% e os impostos de 45%, escrever um algoritmo
	para ler o custo de fábrica de um carro, calcular e escrever o custo final ao consumidor


	*/
	float custo_fabrica =0;
	
	printf("Digite o custo da fabrica do carro:");
	scanf("%f",&custo_fabrica);
	
	

	int impostos28 = (custo_fabrica * 0.28) + custo_fabrica;
	printf("Custo de Fabrica, acrecido de 28 porcento de Impostos: %d \n",impostos28);
	
	int impostos45 = (custo_fabrica * 0.45) + custo_fabrica;
		printf("Custo de Fabrica, acrecido de 45 porcento de Impostos: %d \n",impostos45);
		
	int soma_impostos = (custo_fabrica * 0.45) + (custo_fabrica * 0.28) + custo_fabrica;
		printf("Soma do custo de fabrica + 28 porcento + 45 porcento de Impostos: %d \n",soma_impostos);


	
}
