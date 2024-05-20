#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <locale.h>
#define MAX_PLAYERS 100
int main(){




setlocale(LC_ALL, "Portuguese_Brazil");

printf("%d",numero_aleatorio(9));
}

int numero_aleatorio(int limite){
 srand(time(NULL));

    // Choose the impostor
    return rand() % limite;
}

