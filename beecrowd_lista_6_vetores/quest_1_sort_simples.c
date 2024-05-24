 //PROBLEMA: 1042 - Sort Simples
 #include <stdio.h>

int main() {

    int vetor[3];
	int aux[3],auxiliar;
	int i,j;
	
	for(i=0;i<3;i++)
	{
		scanf("%d",&vetor[i]);
		aux[i] = vetor[i];	
	}
	
	for(i=0;i<3;i++)
	{
		for(j=i+1;j<3;j++)
		{
			 if ( vetor[i] > vetor[j] )
     		 {
         		auxiliar = vetor[i]; 
         		vetor[i] = vetor[j]; 
         		vetor[j] = auxiliar; 
         		}
    	}
	}
	for(i=0;i<3;i++)
	{
		printf("%d\n",vetor[i]);
	}
	printf("\n");
	for(i=0;i<3;i++)
	{
		printf("%d\n",aux[i]);	
	}
	return 0;
}