#include <stdio.h>

int main()
{
    float sal;
    float imp1 = 0, imp2 = 0, imp3 = 0;
    float impostos;
    scanf("%f", &sal);

    if(sal <= 2000)
    {
        printf("Isento\n");
    }

    else
    {
        if (sal > 2000 && sal <= 3000)
        {
            sal = sal - 2000;
            imp1 = sal * 0.08;
            impostos = imp1;
        }

        if (sal > 3000 && sal <= 4500)
        {
            sal = sal - 3000;
            imp1 = 1000 * 0.08;
            imp2 = sal * 0.18;
            impostos = imp1 + imp2; 
        }

        if (sal > 4500)
        {
            sal = sal - 4500;
            imp1 = 1000 * 0.08;
            imp2 = 1500 * 0.18;
            imp3 = sal * 0.28;
            impostos = imp1 + imp2 + imp3;
        }

        printf("R$ %.2f\n", impostos);   
    }    

}