#include<stdio.h>

#define TAMANHO_VETOR 5
int main(){
	
	int vetor[TAMANHO_VETOR];
	int numero_buscado;
	int i;
	
	for( i = 0; i < TAMANHO_VETOR; i++){
		printf("Digite o valor %d do vetor: ",i + 1);
		scanf("%d",&vetor[i]);
	}
	
	printf("Digite o numero a ser buscado: ");
	scanf("%d", &numero_buscado);
	
	int encontrado = 0;
	for(i = 0; i < TAMANHO_VETOR; i++){
		if(vetor[i] == numero_buscado){
			
			encontrado = 1;
			break;
		}
	}
	
	if(encontrado){
		printf("\n Numero encontrado\n");
	}else{
		printf("\n Numero nao Encontrado\n");
	}
	
	return 0;
}