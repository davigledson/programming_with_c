#include <stdio.h>

int main(){
	
	int vetorA[4], vetorB[4];
	int i;
	printf("Digite os Valores para o vetor A: ");
	for(i = 0; i < 4; i++){
		scanf("%d", &vetorA[i]);
	}
	printf("Digite os Valores para o vetor B: ");
	for(i = 0; i < 4; i++){
		scanf("%d", &vetorB[i]);
	}
	int dotProduto = 0;
	for(i = 0; i < 4; i++){
		dotProduto += vetorA[i] * vetorB[i];
	}
	
	printf("Produto Escalar: %d", dotProduto);
	
	return 0;	
}