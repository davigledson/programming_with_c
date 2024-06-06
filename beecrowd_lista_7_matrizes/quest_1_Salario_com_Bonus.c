//PROBLEMA: 1009 - Salário com Bônus
#include <stdio.h>
 
int main() {
    double salario=0,vendas=0,cal=0;
    char nome[50];
    scanf("%s",&nome);
    scanf("%lf",&salario);
    scanf("%lf",&vendas);
    
    cal = salario + (vendas *  0.15);
    printf("TOTAL = R$ %.2lf\n",cal);

    return 0;
}