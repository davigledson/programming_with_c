#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define TAMANHO 5
int main(){
   
   char vetor[30],letra;
   int tam =0,i=0, contador = 0,j=0;
    printf("Digite a palavra ou frase\n");
   fgets(vetor, 30,stdin);
    
    tam = strlen(vetor)-1;
    printf("Qtd de letras %d\n", tam);
    
    for(i=0; i<tam;i++){
        contador=0;
        letra = vetor[i];
       for(j=0; j<tam;j++){

            if(vetor[j]==letra){
                contador++;
            }
           
           
       } 
       letra = toupper(letra);
      
       printf("%c - %d",letra ,contador);
            printf("\n");
    }

    

}
    
    