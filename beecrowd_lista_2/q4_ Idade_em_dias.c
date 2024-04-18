#include <stdio.h>
 
int main() {
 
    int dias, mes,ano;
    scanf("%d",&dias);
    
    
    ano = dias / 365;
    printf("%d ano(s)\n",ano);
    mes = dias % 365;
    printf("%d mes(es)\n",mes / 30);
    dias = mes % 30;
    printf("%d dia(s)\n",dias);
 
    return 0;
}