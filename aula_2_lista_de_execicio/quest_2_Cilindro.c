#include <stdio.h>
 
 int main(){
 	//Fa�a um programa que informe a 
	 //�rea e o volume de um cilindro.
	 
	float raioDaBase = 0;
	float altura = 0;
	
	printf("INFORME O RAIO DO CILINDRO: ");
	scanf("%f",&raioDaBase);
	
	printf("INFORME O VOLUME DO CILINDRO: ");
	scanf("%f",&altura);
	
	float area = 2 * raioDaBase *(raioDaBase + altura);
	
	printf("Area do cilindro: %f \n", area); 
	
	float volume = (raioDaBase * raioDaBase ) * altura;
	
	printf("Volume do Cilindro: %f", volume);
	
	
 }
