#include <stdio.h>

int main(){
 int contador=0;
 float valor=0;
  printf("Insirar o valor:");
	scanf("%f",&valor);
    while((valor * contador)<=200){
        printf("| %.1f |\n",valor *contador);
        contador++;
    }
}