#include <stdio.h>
 
int main() {
 
    double sal,rea;
    int per;
    scanf("%lf",&sal);
    
    if(sal<=400.00){
        rea = sal * 0.15;
        per = 15;
    } else if(sal>400 && sal <=800){
    rea = sal * 0.12;
    per = 12;
    } else if(sal >800 && sal <= 1200){
        rea = sal * 0.10;
        per = 10;
    } else if(sal>1200 && sal <= 2000){
        rea = sal * 0.07;
        per = 7;
    } else if(sal > 2000){
        rea = sal * 0.04;
        per = 4;
    }
    
    printf("Novo salario: %.2f\n",sal + rea);
    printf("Reajuste ganho: %.2f\n",rea);
    printf("Em percentual: %d %%\n",per);
    return 0;
}