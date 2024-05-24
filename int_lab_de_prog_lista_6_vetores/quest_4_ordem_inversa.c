#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main(){
	srand(time(NULL));
	int vetor[6] ={},vetor2[6] ={},valor=0,i,j=0,c;
	float media;
	for(i=0;i<6;i++){
		
		printf("Insirar o %d valor\n",i);
		//scanf("%d",&valor);
		
		valor = rand() % 10; //gerar numero aleatorio
		printf("Valor recebido: %d\n",valor);
		vetor[i]=valor;
		//vetor2[i]=valor;
		
				
	}
	
	for(i=0,j=5; i<6,j>=0; i++,j--){
		
		
		vetor2[j] =vetor[i];
	
	
	}
		printf("Ordem normal:\n");
	for(j=0;j<6;j++){
		printf("%d ",vetor[j]);
	}
	printf("\n");
	printf("Ordem inversa:\n");
	for(j=0;j<6;j++){
		printf("%d ",vetor2[j]);
	}
	
	


	
		
}
