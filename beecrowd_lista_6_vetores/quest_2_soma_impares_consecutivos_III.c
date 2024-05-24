
//PROBLEMA: 1158 - Soma de Ímpares Consecutivos III
#include <stdio.h>

int main() {
    int N, X, Y, i, j, soma;
    
    scanf("%d", &N);
    
    for (i = 0; i < N; i++) {
       
        scanf("%d %d", &X, &Y);
        
              soma = 0;
        
        
        if (X % 2 == 0) {
            X++;
        }
        
      
        for (j = 0; j < Y; j++) {
            soma += X;
            X += 2;
        }
        
                printf("%d\n", soma);
    }
    
    return 0;
}