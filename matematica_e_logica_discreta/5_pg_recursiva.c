#include <stdio.h>


void PG(int primeiroTermo, int razao, int numTermos, int termoAtual) {
    // se o termo atual for maior que o número total de termos, parar a recursão
    if (termoAtual > numTermos) {
        return;
    }
    
    printf("%d\n", primeiroTermo);
    
    PG(primeiroTermo * razao, razao, numTermos, termoAtual + 1);
}

int main() {
    int primeiroTermo = 2; 
    int razao = 3;         
    int numTermos = 5;     
    
    PG(primeiroTermo, razao, numTermos, 1);

    return 0;
}
