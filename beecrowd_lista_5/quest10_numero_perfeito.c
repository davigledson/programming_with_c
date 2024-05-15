#include <stdio.h>

int main() {
    int casos, i, j, num, soma;

    scanf("%d", &casos);

    for (i = 0; i < casos; i++) {
        scanf("%d", &num);
        soma = 0;
        j = 1;

        while (j < num) {
            if (num % j == 0) {
                soma += j;
            }
            j++;
        }

     
        if (soma == num) {
            printf("%d eh perfeito\n", num);
        } else {
            printf("%d nao eh perfeito\n", num);
        }
    }

    return 0;
}