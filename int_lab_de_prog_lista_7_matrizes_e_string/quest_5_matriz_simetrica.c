#include <stdio.h>

#define MAX_SIZE 100

int main() {
    int matriz[MAX_SIZE][MAX_SIZE];
    int n;

    printf("Digite a ordem da matriz: ");
    scanf("%d", &n);


    
    printf("Digite os elementos da matriz:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    
    int simetrica = 1; 
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (matriz[i][j] != matriz[j][i]) {
                simetrica = 0; 
                break;
            }
        }
        if (!simetrica) break;
    }

   
    if (simetrica) {
        printf("A matriz e simetrica.\n");
    } else {
        printf("A matriz nao e simetrica.\n");
    }

    return 0;
}