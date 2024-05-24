#include <stdio.h>
 
int main() {
    int contador,valor;
    for(int c =1;c <=5;c++){
        scanf("%d",&valor);
        if(valor % 2 ==0){
            contador++;
        }
    }
    printf("%d valores pares\n",contador);
 
    return 0;
}