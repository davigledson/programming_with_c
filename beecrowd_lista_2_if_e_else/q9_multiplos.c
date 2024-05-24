#include <stdio.h>
 
int main() {
 
   int v1,v2;
   scanf("%d %d",&v1,&v2);
   
   if(v1 % v2 ==0 || v2 % v1 ==0){
       printf("Sao Multiplos\n");
   } else {
       printf("Nao sao Multiplos\n");
   }
 
    return 0;
}