#include <stdio.h>
int main(){
	/*
	3. Faça um programa que leia dois valores reais do teclado, calcule e apresente na tela:
	a) A soma destes valores
	b) O produto deles
	c) O quociente entre eles
	
	*/
	float n1 =0;
	float n2 =0;	
	printf("Digite o valor 1:");
	scanf("%f",&n1);
	
	printf("Digite o valor 2:");
	scanf("%f",&n2);
	
	printf("A soma entre %f e %f = %f \n",n1,n2,(n1+n2));
	printf("O produto entre %f e %f = %f \n",n1,n2,(n1*n2));
	printf("O quociente entre %f e %f = %f \n",n1,n2,(n1 / n2));
	
}
