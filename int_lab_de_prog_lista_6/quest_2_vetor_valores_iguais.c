#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main(){
	srand(time(NULL));
	int vetor[10] ={},vetor2[10] ={},valor=0,i,j,qtsIguais=0;
	float media;
	for(i=0;i<10;i++){
		
		printf("Insirar o %d valor\n",i+1);
		//scanf("%d",&valor);
		
		valor = rand() % 10; //gerar numero aleatorio
		printf("Valor recebido: %d\n",valor);
		vetor[i]=valor;
		vetor2[i]=valor;
				
	}
	
	for(i=0;i<10;i++){
		
		for(j=0;j<10;j++){
			if(i != j){
			if(vetor[i] == vetor2[j]){
				
			 	printf("%d ",vetor2[j]);
			 }	
			}
			
			 
		}
			 
			
	}
//	for(menor; menor<maior+1; menor++){
//		for(i=0;i<10;i++){
//		
//		if(vetor[i] == menor){
//			printf("%d",menor);
//		}	 
//				
//		}	 
//				
//	}


	

		
}

