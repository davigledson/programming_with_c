//PROBLEMA: 1177 - Preenchimento de Vetor II

#include <stdio.h>

int main() {
    int T;
    
    scanf("%d", &T);
    
    int N[1000];
    
    for (int i = 0; i < 1000; i++) {
        N[i] = i % T;
    }
    
    for (int i = 0; i < 1000; i++) {
        printf("N[%d] = %d\n", i, N[i]);
    }
    
    return 0;
}