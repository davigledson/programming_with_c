#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define TAMANHO 5
int main(){
   
   int matriz[3][3];
    int i =0, j=0, valor=0,sinal=0;
    
    for(i=0; i<3;i++){
        for(j=0; j<3;j++){
            printf("Valor de [%d][%d]:\n",i,j);
            scanf("%d",&valor);
            matriz[i][j] = valor;

      }
    }
   printf("Imprimindo a matriz \n");
    for(i=0; i<3;i++){
        for(j=0; j<3;j++){
            printf("[%d] ",matriz[i][j]);
              
        }

      printf("\n");
    }
     for(i=0; i<3;i++){
        for(j=0; j<3;j++){
            if(i != j){
                    if(matriz[i][j] != 0){
                        
                        sinal = 1;
                        break;
                    }
            }
          
              
        }
         if (sinal == 1){
            printf("A matriz NAO E DIAGONAL");
            break;
         }

      printf("\n");
    }
    if(sinal == 0){
        printf("A matriz E DIAGONAL");
    }

}
    
    