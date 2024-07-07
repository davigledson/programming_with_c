#include <stdio.h>


int MDC(int a, int b) {
    int temp;
    while (b != 0) {
        temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}


int e_diofantina(int a, int b, int c) {
    int mdc = MDC(a, b);
    return (c % mdc == 0);
}

int main() {
    int a = 56;
    int b = 42;
    int c = 14;

    if (e_diofantina(a, b, c)) {
        printf("A equação %dx + %dy = %d é uma equação diofantina.\n", a, b, c);
    } else {
        printf("A equação %dx + %dy = %d não é uma equação diofantina.\n", a, b, c);
    }

    return 0;
}
