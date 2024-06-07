#include  <stdio.h>
#include  <string.h>

int main(){
char string[100 ], new_caractere[2], caractere_sub[2];
int contador=0;
printf("String: \n");
gets(string);

printf("caractere a ser subtituido: \n");
gets(new_caractere);
printf("Novo caractere: \n");
gets(caractere_sub);


printf("\n------------------------------------\n");
for(int i=0; i<strlen(string); i++){
   // printf("%d",i);
    if(string[i] == new_caractere[0]){
        string[i] = caractere_sub[0];
    }
}
printf("%s\n",string);
printf("\n------------------------------------\n");


}