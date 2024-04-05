#include <stdio.h>
int main(){
	/*
4- Faça um programa para calcular a área e o perímetro de uma sala, sendo que as
dimensões (comprimento e largura) são fornecidos pelo usuário. Apresente a área e o
perímetro depois de calculados.

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
