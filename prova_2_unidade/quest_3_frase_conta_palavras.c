#include <stdio.h>
#include <string.h>
#define TAMANHO 5
int main(){
   
   char frase[200];
   int tam =0,i=0, contador = 1;
    printf("Digite a frase\n");
   fgets(frase, 200,stdin);
    printf("%s\n",frase);
    tam = strlen(frase);

    for(i=0; i<tam;i++){
        if(frase[i]== ' '){
            contador++;
        }
    }

    printf("A frase contem %d palavras\n",contador);

}
    
    

        
