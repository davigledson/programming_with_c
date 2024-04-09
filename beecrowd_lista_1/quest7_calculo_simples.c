#include <stdio.h>
 
int main() {
    int c,c1,n,n1;
    float v,v1,resul;
    
    scanf("%d %d %f",&c,&n,&v);
    scanf("%d %d %f",&c1,&n1,&v1);
    resul = n * v + n1 * v1; 
    printf("VALOR A PAGAR: R$ %.2f\n",resul);
    return 0;
}