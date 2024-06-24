#include <stdio.h>

void gerar_pa_recursiva(int a1, int r, int n) {
    if (n > 0) {
        gerar_pa_recursiva(a1, r, n - 1);
        printf("%d ", a1 + (n - 1) * r);
    }
}

int main() {
    int primeiro_termo = 2;
    int razao = 3;
    int numero_de_termos = 10;

    gerar_pa_recursiva(primeiro_termo, razao, numero_de_termos);
    printf("\n");

    return 0;
}