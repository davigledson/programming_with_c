#include <stdio.h>
int main(){
	/*
	7- Fa�a um programa para ler o n�mero total de eleitores de um munic�pio, o n�mero de
votos brancos, nulos e v�lidos. Calcular e escrever o percentual que cada um representa
em rela��o ao total de eleitores.


	*/
	float brancos =0;
	float nulos =0;
	float  validos =0;	
	printf("Digite o numeros de votos brancos:");
	scanf("%f",&brancos);
	
	printf("Digite on�mero de votos nulos:");
	scanf("%f",&nulos);
	
	printf("Digite on�mero de votos validos:");
	scanf("%f",&validos);
	

	int total = brancos + nulos + validos;
	
	printf("Total de Eleitores: %d ",total);
	printf("\n\n");
	printf("O Percentual de votos brancos: %.2f  \n",(brancos * 100) / total);
	printf("O Percentual de votos nulos: %.2f  \n",(nulos * 100) / total);
	printf("O Percentual de votos validos: %.2f  \n",(validos * 100)  / total);

	
}
