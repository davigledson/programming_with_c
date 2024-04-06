#include <stdio.h>
int main(){
	/*
	
	9- Faça um programa que solicite ao usuário que insira seu peso em quilogramas e sua
altura em metros. Em seguida, calcule o Índice de Massa Corporal (IMC) e exiba o
resultado na tela, sabendo que: IMC = peso / (altura * altura).

	*/
	float peso =0;
	float altura =0;
	
	printf("Digite seu peso em quilogramas:");
	scanf("%f",&peso);
	
		printf("Digite sua altura em cm:");
	scanf("%f",&altura);
	
	

	float IMC = peso / (altura * altura) ;
	printf("Seu IMC : %f \n",IMC);
	


	
}
