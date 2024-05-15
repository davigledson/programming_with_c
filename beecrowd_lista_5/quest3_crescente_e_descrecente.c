#include <stdio.h>
#define true 1

int main() {
 
 
 int Y,X;
 
 while(true){
     scanf("%d",&X);
     scanf("%d",&Y);
     if(Y==X){
         break;
     }
     
     if(X < Y){
         printf("Crescente\n");
     } else if(X>Y) {
         printf("Decrescente\n");
     }
     
 }
    return 0;
}