//ROBLEMA: 1172 - Substituição em Vetor I
#include <stdio.h>
 
int main() {
 
    int vetor[10],c,valor;
    
    for(c=0;c<10;c++){
     scanf("%d",&valor);
     vetor[c] = valor;
    }
    
    for(c=0;c<10;c++){
    if(vetor[c] <= 0) vetor[c] = 1;
    }
    for(c=0;c<10;c++){
        printf("X[%d] = %d\n",c,(vetor[c]));
    }
 
    return 0;
}