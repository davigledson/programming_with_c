#include <stdio.h>
 
int main() {
    int N,numero,contador=0;
    int mul2=0,mul3=0,mul4=0,mul5=0;
    scanf("%d",&N);
    while(contador <N){
        scanf("%d",&numero);
        if(numero % 2 ==0) mul2++;
        if(numero % 3 ==0) mul3++;
        if(numero % 4 ==0) mul4++;
        if(numero % 5 ==0) mul5++;
        contador++;
    }
    
    printf("%d Multiplo(s) de 2\n",mul2);
    printf("%d Multiplo(s) de 3\n",mul3);
    printf("%d Multiplo(s) de 4\n",mul4);
    printf("%d Multiplo(s) de 5\n",mul5);
 
    return 0;
}