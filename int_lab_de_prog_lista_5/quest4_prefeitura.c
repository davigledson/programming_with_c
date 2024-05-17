#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "Portuguese");
 int contador=0;
 
 float salario=0,contadorSalario=0,contadorFilhos=0, salario1300=0,numerosFilhos=0,maior=0;
    
    do {
       
        printf("Insira o valor do seu SALARIO cidadao n %d:",contador);
	    scanf("%f",&salario);
        printf("Insira a quantidade de FILHOS cidadao n %d:",contador);
        scanf("%f",&numerosFilhos);
        if (salario < 0) break;

        
        if(salario<=1300)  salario1300++;

        contadorSalario+=salario;

        contadorFilhos+=numerosFilhos;
       
        if(salario > maior) maior = salario; 
 
        contador++;
        
    } while(salario>=0);

     printf("----------------------------\n");
    // float media = soma/contador;
     printf("Contagem de cidadao: %d\n",contador);
     printf("Media do salario da populacao: %.2f\n",contadorSalario/contador);
      printf("Media do numeros de filhos: %.2f\n",contadorFilhos/contador);
      printf("Maior Salario: %.2f\n",maior);
      printf("Percentual com salario ate 1300: %.2f %%\n",(salario1300 * 100)/ contador);
   
}