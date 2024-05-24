// PROBLEMA: 1175 - Troca em Vetor I

#include <stdio.h>
 
int main() {
    int vetor[20],vetor2[20],i=0;
    for(i=0;i<20;i++){
        scanf("%d",&vetor[i]);
    }
    for(i=19;i>=0;i--){
        vetor2[19- i] = vetor[i];
    }
    for(i=0;i<20;i++){
        printf("N[%d] = %d\n",i,vetor2[i]);
    }
    
    
 
    return 0;
}