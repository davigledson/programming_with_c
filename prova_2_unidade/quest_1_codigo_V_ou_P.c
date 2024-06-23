
// Nota: a prova valia 7 pontos

#include <stdio.h>
#define TAMANHO 10
int main(){
    float Cvistas[TAMANHO],Cprazos[TAMANHO];
    float soma=0,valor=0;
    int i=0;
    int contVista=0,contPrazo;
    float somaVista=0,somaPrazo=0;
    
    char codigo;
    for(i=0;i<TAMANHO;i++){
        printf("Qual o Codigo em letra minuscula (V ou P)?:\n");
        scanf(" %c",&codigo);
        printf("Conta numero: %d\n",i);
        
        
	         printf("Codigo Escolhido: %c\n",codigo);
	        if(codigo =='v' ||codigo =='V'){
	            printf("Digite o valor da conta a VISTA R$:\n");
	            scanf("%f",&valor);
	            Cvistas[i] = valor;
                 Cprazos[i] = 0;
				 
				}
				
				else if(codigo =='p' || codigo =='P'){ 
	            printf("Digite o valor da conta a PRAZO R$:\n");
	             scanf("%f",&valor);
	            Cprazos[i] = valor;
                Cvistas[i] = 0;
	        } else {
	            printf("ERRO DIGITE O CODIGO NOVAMENTE\n");
	            i--;
	           
			}
		
       
        
        } 
        printf("SOMA a VISTA\n");
         for(i=0;i<TAMANHO;i++){
       printf("%f ", Cvistas[i]);
        somaVista+=Cvistas[i];
        }

        printf("\n");
        printf("SOMA a PRAZO\n");

         for(i=0;i<TAMANHO;i++){
       printf("%f ", Cprazos[i]);
        somaPrazo+=Cprazos[i];
        }
      printf("\n");

      soma = somaPrazo + somaVista;
      
      printf("Valor total das compras a VISTAS: %.2f\n",somaVista);
      printf("Valor total das compras a PRAZO: %.2f\n",somaPrazo);
      printf("Valor das compras TOTAIS: %.2f\n",soma);
        

    }

