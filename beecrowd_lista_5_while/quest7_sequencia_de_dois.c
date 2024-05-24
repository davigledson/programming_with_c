#include <stdio.h>

int main() {
    int X, Y;
    scanf("%d %d", &X, &Y);

    int contador = 1;

    while (contador <= Y) {
        printf("%d", contador);
        for (int i = 1; i < X && contador + i <= Y; i++) {
            printf(" %d", contador + i);
        }
        printf("\n");
        contador += X;
    }

    return 0;
}