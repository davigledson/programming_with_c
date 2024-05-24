//PROBLEMA: 1178 - Preenchimento de Vetor III

#include <stdio.h>
 
int main() {
 
    double vetor[100] = {},valor=0,aux=0;
    int i=0;
    scanf("%lf",&valor);
    for(i=0;i<100;i++){
        
        vetor[i] = valor;
        valor=valor / 2;    
        
    }
    for(i=0;i<100;i++){
    printf("N[%d] = %.4lf\n",i,vetor[i]);    
    }
    
 
    return 0;
}