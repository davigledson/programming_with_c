//PROBLEMA: 1179 - Preenchimento de Vetor IV

#include <stdio.h>

int main() {
    int impares[5], pares[5];
    int contador_pares = 0, contador_impares = 0;

    for (int i = 0; i < 15; i++) {
        int valor;
        scanf("%d", &valor);

        if (valor % 2 == 0) {
            if (contador_pares >= 5) {
                for (int j = 0; j < 5; j++) {
                    printf("par[%d] = %d\n", j, pares[j]);
                }
                contador_pares = 0;
            }
            pares[contador_pares++] = valor;
        } else {
            if (contador_impares >= 5) {
                for (int j = 0; j < 5; j++) {
                    printf("impar[%d] = %d\n", j, impares[j]);
                }
                contador_impares = 0;
            }
            impares[contador_impares++] = valor;
        }
    }


    for (int i = 0; i < contador_impares; i++) {
        printf("impar[%d] = %d\n", i, impares[i]);
    }
    for (int i = 0; i < contador_pares; i++) {
        printf("par[%d] = %d\n", i, pares[i]);
    }

    return 0;
}