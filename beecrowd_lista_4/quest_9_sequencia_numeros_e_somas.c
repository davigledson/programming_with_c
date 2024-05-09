#include <stdio.h>
 
int main() {
 
   int M,N,i=1,AUX=0;
   
  
       
   
   for(;i==1;){
   scanf("%d %d",&M, &N);
   AUX =0;
        if(M  <= 0|| N <=0){
         break;  
        } else {
            if(M>N){
                for(N;M>=N;N++){
                printf("%d ",N);
                AUX+=N;
                
                }
            } else {
                for(M;N>=M;M++){
                printf("%d ",M);
                AUX+=M;
                }
                //printf("%d ",N);
                
            }
            printf("Sum=%d\n",AUX);
            
            
        }
         
          
   }
   
    return 0;
}