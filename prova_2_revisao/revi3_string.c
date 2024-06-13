#include <stdio.h>
#include <string.h>
 int main(int argc, char** argv)
{
	char palavra1[50], palavra2[50];
    char string_para_concatenar[100];
    char palavra_ao_contrario[100];

    int i,verificar=0;
    printf("Palavra 1:");
	gets(palavra1);

    printf("Palavra 2:");
	gets(palavra2);	
	
	printf("Tamanho da palavra 1: %d\n", strlen(palavra1) );
    printf("Tamanho da palavra 2: %d\n", strlen(palavra2) );
    if(strlen(palavra1)> strlen(palavra2)){
        printf("Palavra 1 maior que a palavra 2\n");
    } else if(strlen(palavra1) == strlen(palavra2)){
        printf("Mesma Qtd de letras\n");
    } else {
        printf("Palavra 2 maior que a palavra 1\n");
    }
   
   strcat(string_para_concatenar,palavra1);
    strcat(string_para_concatenar," ");
     strcat(string_para_concatenar,palavra2);

     printf("Palavras concatenas: %s\n",string_para_concatenar);

     

    
       // strcmp(palavra1,palavra2);
        // for(i=0;i<strlen(palavra1);i++){
        //     if(palavra1[i] != palavra2[i]){
        //             verificar=1;
        //     }
        // }
    

    if(strcmp(palavra1,palavra2) ==0){
        printf("As palavras  sao iguais\n");
    } else {
         printf("As palavras nao sao iguais\n");
    }

    for(i=0;i<strlen(palavra1);i++){
        //TERMINA EM CASA
           // palavra_ao_contrario[i] != palavra1[strlen(palavra1)-i];
    }

    printf(" palavra 1 ao contrario: %s\n", palavra_ao_contrario);
	return 0;
	
}