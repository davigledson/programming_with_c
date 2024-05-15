//PROBLEMA: 1154 - Idades
#include <stdio.h>
 
int main() {
    int N=0,contador=0;
    float soma=0;
    while(1){
        scanf("%d",&N);
        if(N<0){
            break;
        }
        contador++;
        soma+=N;
        
        
    }
    printf("%.2f\n",soma / contador);
 
    return 0;
}