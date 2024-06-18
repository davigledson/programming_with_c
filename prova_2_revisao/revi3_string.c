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

     

    
        int len = strlen(palavra1);
    for (i = 0; i < len; i++) {
        palavra_ao_contrario[i] = palavra1[len - i - 1];
    }
    palavra_ao_contrario[len] = '\0';  // Termina a string corretamente

    printf("Palavra 1 ao contrário: %s\n", palavra_ao_contrario);

    if (strcmp(palavra1, palavra_ao_contrario) == 0) {
        printf("A palavra 1 e um palindromo\n");
    } else {
        printf("A palavra 1 nao é um palindromo\n");
    }

    printf(" palavra 1 ao contrario: %s\n", palavra_ao_contrario);
	return 0;
	
}