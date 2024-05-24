#include <stdio.h>
int main(){
	char gen;
	int idade, cont;
	printf("Digite o Genero:\n");
	printf("(m) = masculino:\n");
	printf("(f) = feminino:\n");
	scanf("%c",&gen);
	
	printf("Digite sua Idade:\n");
	scanf("%d",&idade);
	
	printf("Digite seus anos de contribuicao:\n");
	scanf("%d",&cont);
		
		switch(gen){
			case 'm':
				if(idade >= 65 && cont>=10){
					printf("Genero Masculino!\n");
					printf("Pode se apodentar:");
				}
				
			
				else if(idade >= 63 && cont>=15){
					printf("Genero Masculino!\n");
					printf("Pode se apodentar");
				}
				else {
					printf("Nao aposentavel");
				}
			
			break;
			
			case 'f':
				if(idade >= 63 && cont>=10){
					printf("Genero femininio!\n");
					printf("Pode se apodentar\n");
				}
			
				else if(idade >= 61 && cont>=15) {
					printf("Genero femininio!\n");
					printf("Pode se apodentar\n");
				}
				
				else {
					printf("Nao aposentavel");
				}
			
			break;
			
			
			default:
				printf("Genero invalido!\n");	
		}
	
}