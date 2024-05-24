#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "Portuguese");
 int contador=0,limite=0,contadorPositivo=0,contadorNegativo=0;
 int valor=0;
 float soma=0;
  printf("Insirar o limite:");
	scanf("%d",&limite);

     
    while(contador<limite){
        printf("Insira o valor n %d:",contador);
	    scanf("%d",&valor);
        if(valor>0) contadorPositivo++;
        if(valor<0) contadorNegativo++;
        soma+=valor;
        contador++;

        
    }
     printf("----------------------------\n");
    // float media = soma/contador;
    printf("Quantidade de valores lidos: %d\n",contador);
    printf("Media aritmética: %.2f\n",soma/contador);
    printf("Contador de numeros positivos: %d\n",contadorPositivo);
    printf("Contador de numeros negativos: %d\n",contadorNegativo);
    printf("Percentual de Negativos : %d\n",(contadorNegativo * 100)/ contador);
    printf("Percentual de Positivos: %d\n",(contadorPositivo * 100)/ contador);
}