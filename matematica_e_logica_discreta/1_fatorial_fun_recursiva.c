#include <stdio.h>

// Função recursiva para calcular o fatorial
int fatorial(int n) {
    if (n == 1 || n == 0) {
        return 1;
    } else {
        
        return n * fatorial(n - 1);
    }
}

int main() {
    int resultado = fatorial(4);
    printf("%d\n", resultado);
    return 0;
}