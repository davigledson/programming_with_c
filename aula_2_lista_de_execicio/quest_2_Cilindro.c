#include <stdio.h>
 
 int main(){
 
 //Fa�a um programa que informe a 
	 //
	 
	float raioDaBase = 0;
	float altura = 0;
	
	printf("INFORME O RAIO DO CILINDRO: ");
	scanf("%f",&raioDaBase);
	
	printf("INFORME O VOLUME DO CILINDRO: ");
	scanf("%f",&altura);
	
	float area = 2 * 3.14 *(raioDaBase + altura);
	
	printf("Area do cilindro: %f \n", area); 
	
	float volume = (raioDaBase * raioDaBase ) * 3.14;
	
	printf("Volume do Cilindro: %f", volume);
	
	
 }