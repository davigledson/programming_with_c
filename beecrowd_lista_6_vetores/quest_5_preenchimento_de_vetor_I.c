//PROBLEMA: 1173 - Preenchimento de Vetor I
#include <stdio.h>
 
int main() {
    int vetor[10] = {},valor=0,i=0;
    scanf("%d",&valor);
    for(i=0;i<10;i++){
        vetor[i] = valor;
        valor= valor * 2;
    }
    for(i=0;i<10;i++){
        printf("N[%d] = %d\n",i,vetor[i]);
    }
 
    return 0;
}