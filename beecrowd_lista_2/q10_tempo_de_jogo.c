#include <stdio.h>
 
int main() {
 
   int hi,hf;
   scanf("%d %d",&hi,&hf);
    if(hi>hf){
        printf("O JOGO DUROU %d HORA(S)\n",24 - hi + hf);
    }  else if(hf>hi) {   
        printf("O JOGO DUROU %d HORA(S)\n", hf - hi);
    } else {
        printf("O JOGO DUROU 24 HORA(S)\n");
    }
 
    return 0;
}