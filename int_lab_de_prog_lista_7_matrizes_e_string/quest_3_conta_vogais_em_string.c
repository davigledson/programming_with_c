#include  <stdio.h>
#include  <string.h>

int main(){
char nome[100 ];
int contador=0;
printf("Digite o seu nome: \n");
gets(nome);


printf("\n------------------------------------\n");
for(int i=0; i<strlen(nome); i++){
   // printf("%d",i);
    if(nome[i]=='a' || nome[i]=='e' || nome[i]=='i' || nome[i]=='o' || nome[i]=='u'){
        contador++;
    }
}
printf("%s\n",nome);
printf("\n------------------------------------\n");
printf("Qtd de Vogais: %d\n",contador);

}