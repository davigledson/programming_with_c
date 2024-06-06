#include  <stdio.h>
#include  <string.h>

int main(){
int valor =0,l,c,soma=0;
printf("Digite um valor: \n");

scanf("%d",&valor);
int matriz[valor][valor] ; 
int contador =1;

for(l =0; l < valor; l++){
    for(c =0; c < valor; c++){
        matriz[l][c] = contador++ ;
    }
}
printf("Testando: \n");
for(l =0; l < valor; l++){
    for(c =0; c < valor; c++){
         printf("%d ",matriz[l][c]);
    }
}
printf("\n");
printf("-------------------\n");
for(l =0; l < valor; l++){
    
     
    soma+=matriz[l][l];
    //printf("%d ",matriz[l][c]);
    
    //printf("\n");
}

printf("Resultado: %d \n",soma);
}
