#include <stdio.h>

// Função recursiva para calcular a potência
int potencia(int base, int expoente) {
    if (expoente == 0) {
        return 1;
    } else {
        return base * potencia(base, expoente - 1);
    }
}

int main() {
    int resultado = potencia(2, 3);
    printf("%d\n", resultado);
    return 0;
}