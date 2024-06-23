#include <stdio.h>
#define TAMANHO 5
int main(){
   
    float vetor[TAMANHO];
    int codigo=0,i=0;

    for(i=0;i<TAMANHO;i++){
        printf("LOOP: %d\n",i);
        scanf("%f",&vetor[i]);
    }

    while (1)
    {
        printf("Insira o codigo:\n");
      scanf("%d",&codigo);

    if(codigo==0){
        printf("programa finalizado\n");
        break;
    } else if(codigo==1){
        for(i=0;i<TAMANHO;i++){
        printf("%.2f ",vetor[i]);
        }
        printf("\n");
    } else if(codigo==2){
        for(i=4;i>=0;i--){
        printf("%.2f ",vetor[i]);
        }
         printf("\n");
    } else {
        printf("Codigo invalido\n");
    }

    }

    }
    
    

        

    
