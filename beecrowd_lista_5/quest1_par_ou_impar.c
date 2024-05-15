#include <stdio.h>
 
int main() {
 
    int N,valor=0,I=0;
    scanf("%d",&N);
    while(I<N){
        scanf("%d",&valor);
         if(valor>0 && valor %2 ==0) printf("EVEN POSITIVE\n");
         if(valor>0 && valor %2 ==1) printf("ODD POSITIVE\n");
         if(valor==0) printf("NULL\n");
         if(valor<0 && (valor * -1) %2==1) printf("ODD NEGATIVE\n");
         if(valor<0 && valor %2==0) printf("EVEN NEGATIVE\n");
        I++;
    }
    
    
    return 0;
}