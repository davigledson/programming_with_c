#include <stdio.h>
int main(){
    int numero;
    int divisores = 0;
    int i;  
    scanf("%d", &numero);
    for(i=1; i<=numero; i++){
      if(numero%i==0){
        divisores++;
      }
    }
    if(divisores == 2){
      printf("Primo\n");
    }
    else {
      printf("Pode ser tio, mas primo jamais!\n");
    }
    
    return 0;
    
}
