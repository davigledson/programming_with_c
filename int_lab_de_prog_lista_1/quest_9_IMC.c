#include <stdio.h>
int main(){
	/*
	
	9- Fa�a um programa que solicite ao usu�rio que insira seu peso em quilogramas e sua
altura em metros. Em seguida, calcule o �ndice de Massa Corporal (IMC) e exiba o
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
