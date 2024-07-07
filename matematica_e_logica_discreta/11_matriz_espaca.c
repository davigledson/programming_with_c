//29.Uma matriz esparsa é a que tem muitos espaços não preenchidos.
// Faça um algoritmo que transforma uma matriz esparsa em um array que contém apenas os valores diferentes de null.
#include <stdio.h>
int main(){
   int matriz[3][3] = {{'null', 34, 78},{1, 'null', 'null'},{'null', 63, 'null'}};
   int cont=0, i=0, j=0, r=0;
   
   
   for(i=0; i<3; i++){
       for(j=0;j<3;j++){
           if(matriz[i][j] != 'null'){
               cont++;
           }
       }
   }
   
   int vetor[cont];
   
   
  for(i=0; i<3; i++){
       for(j=0;j<3;j++){
           if(matriz[i][j] != 'null'){
               vetor[r] = matriz[i][j];
               r++;
           }
       }
  }
  
  for(i=0; i<r; i++){
      printf("%d ",vetor[i]);
  }
}

