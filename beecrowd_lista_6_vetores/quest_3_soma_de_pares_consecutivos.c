//PROBLEMA: 1159 - Soma de Pares Consecutivos
#include <stdio.h>
 
int main() {
    int valor=0,soma=0,aux=0;
    while(1){
        soma=0;
        scanf("%d",&valor);
        if(valor ==0) break;
        
        aux =valor;
        if(aux %2 !=0) aux++;
        
        for(int i=0;i<5;i++){
            soma+=aux;
            aux+=2;
        }
        
        
        printf("%d\n",soma);
    };
 
    return 0;
}