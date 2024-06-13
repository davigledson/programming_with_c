#include <stdio.h>
 int main(int argc, char** argv)
{
	int i=0, vetor[10],valor=0,somaP=0,aux=0;
	int j=0;
	for(i=0;i<10;i++){
		
	printf("Digite o n %d valor: ",i);
	scanf("%d",&valor);
	
	vetor[i] = valor;
	}
	
	for(i=0;i<10;i++){
		if(vetor[i] % 2 ==0){
			somaP+=vetor[i];
		}

	}
	 	for(i=0;i<10;i++){
			for(j=0;j<10;j++){

				if(vetor[i] < vetor[j]){
				aux = vetor[i];
				vetor[i] = vetor[j];
				vetor[j] = aux;
				
			}
				//vetor[i] = aux;

			}
			

		}
printf("Somas dos pares: %d!\n",somaP);

			printf("Vetor em ordem crescente!\n");
			for(i=0;i<10;i++){
			printf("%d ",vetor[i]);

		}
	return 0;
	
}