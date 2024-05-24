#include <stdio.h>
int main(){
	int vetor[5] ={},valor=0,i,maior=0,menor=0;
	float media;
	for(i=0;i<5;i++){
		printf("Insirar o %d valor\n",i+1);
	scanf("%d",&valor);
	
		vetor[i]=valor;
			
	}
	menor = vetor[1];
	for(i=0;i<5;i++){
		printf("Index: %d Valor: valor: %d \n",i,vetor[i]);
		media+=vetor[i];
		if(vetor[i]>maior) maior=vetor[i];
		
		if(vetor[i]<menor){
		menor=vetor[i];	
		} 
	}
	
	printf("Media: %2.f\n",media / 5);
	printf("Maior: %d\n",maior);
	printf("Menor: %d\n",menor);
		
}