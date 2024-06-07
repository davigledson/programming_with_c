#include  <stdio.h>
#include  <string.h>

int main(){
int valor =0,l=0,c=0,soma=0;
int M,N;
printf("Digite o valor da linha: \n");
scanf("%d",&M);
printf("Digite o valor da coluna: \n");
scanf("%d",&N);

int matriz[N][M],contador=1;



for(l =0; l < N; l++){
    for(c =0; c < M; c++){
        matriz[l][c] = contador++ ;
    }
}
printf("Teste: \n");
for(l =0; l < N; l++){
    for(c =0; c < M; c++){
        
        printf(" %d - " ,matriz[l][c]);
    }
}
 printf("\n------------------------------------\n");
 printf("Transporta: \n");
for(l =0; l < N; l++){
    for(c =0; c < M; c++){
        
         
         printf("%d - ",matriz[l][c]);
    }
   printf("\n");
  
}
printf("\n------------------------------------\n");
for(l =0; l < M; l++){
    for(c =0; c < N; c++){
           
         printf("%d - ",matriz[c][l]);
    }
   printf("\n");
  
}



}