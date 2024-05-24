//PROBLEMA: 1174 - Seleçao em Vetor I
#include <stdio.h>
 
int main() {

    double vetor[100]={},valor=0;
    int i=0;
    while(i<100){
        scanf("%lf",&valor);
        
        vetor[i] = valor;
        i++;
        
    }
    for(i=0;i<100;i++){
        if(vetor[i] <=10){
        printf("A[%d] = %.1lf\n",i,vetor[i]);    
        }
        
    }
    
 
    return 0;
}