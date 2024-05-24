#include <stdio.h>
int main(){
float n1, n2, n3,media,MA;
int idt;
printf("Numero de Identificacao:\n");
scanf("%d", &idt);

printf("Nota 1:\n");
scanf("%f", &n1);

printf("Nota 2:\n");
scanf("%f", &n2);

printf("Nota 3:\n");
scanf("%f", &n3);

printf("Media:\n");
scanf("%f", &media);

MA = (n1 + (n2 *2) + (n3 *3) + media) / 7;

printf("A media de aproveitamento e de %.2f\n",MA);
printf("Numero do aluno: %d\n",idt);

	if(MA >= 9.0){
		printf("A - Aprovado\n");
	}
	else if(MA >= 7.5 && MA <9.0){
		printf("B - Aprovado \n");
	}
	
	else if(MA >= 6.0 && MA<7.5){
		printf("C - Aprovado \n");
	}
	
	else if(MA >= 4.0 && MA <6.0){
	printf("D - Reprovado \n");
	}
	if(MA < 4.0){
		printf("E - Reprovado\n");
	}
	
	
}
