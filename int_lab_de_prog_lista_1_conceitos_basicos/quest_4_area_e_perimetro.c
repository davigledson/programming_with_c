#include <stdio.h>
int main(){
	/*
4- Fa�a um programa para calcular a �rea e o per�metro de uma sala, sendo que as
dimens�es (comprimento e largura) s�o fornecidos pelo usu�rio. Apresente a �rea e o
per�metro depois de calculados.

	*/
	float comprimento =0;
	float largura =0;	
	printf("Digite o comprimento:");
	scanf("%f",&comprimento);
	
	printf("Digite o largura:");
	scanf("%f",&largura);
	
	printf("A Area: %f \n",(comprimento*comprimento));
	printf("Perimetro:  %f \n",(largura*4));

	
}
