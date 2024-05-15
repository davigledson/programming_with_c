#include <stdio.h>
 
int main() {
 int N=0, contador=0;
 float X=0,Y=0;
 double calculo=0;
 scanf("%d",&N);
 while(contador <N){
     scanf("%f %f",&X,&Y);
     
     if(Y ==0){
         printf("divisao impossivel\n");
     } else {
         
         printf("%.1f\n",X / Y);
     }
     contador++;
 }
 
    return 0;
}