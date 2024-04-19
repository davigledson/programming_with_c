#include <stdio.h>
int main(){
	/*
	7- Faça um programa para ler o número total de eleitores de um município, o número de
votos brancos, nulos e válidos. Calcular e escrever o percentual que cada um representa
em relação ao total de eleitores.


	*/
	float brancos =0;
	float nulos =0;
	float  validos =0;	
	printf("Digite o numeros de votos brancos:");
	scanf("%f",&brancos);
	
	printf("Digite onúmero de votos nulos:");
	scanf("%f",&nulos);
	
	printf("Digite onúmero de votos validos:");
	scanf("%f",&validos);
	

	int total = brancos + nulos + validos;
	
	printf("Total de Eleitores: %d ",total);
	printf("\n\n");
	printf("O Percentual de votos brancos: %.2f  \n",(brancos * 100) / total);
	printf("O Percentual de votos nulos: %.2f  \n",(nulos * 100) / total);
	printf("O Percentual de votos validos: %.2f  \n",(validos * 100)  / total);

	
}
