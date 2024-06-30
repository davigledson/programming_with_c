#include <stdio.h>
int main()
{

    int vetor[7] = {1,2,3,4,5,6,7};
    int vetor_invertido[7] = {};
     int i = 0;


    for (i = 6; i >= 0; i--)
    {
         vetor_invertido[6-i] = vetor[i];
    }
    printf("\n");

    for (i = 0; i < 7; i++)
    {
        printf("%d ", vetor_invertido[i]);
       
    }
    printf("\n");
}
