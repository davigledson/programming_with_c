//PROBLEMA: 1183 - Acima da Diagonal Principal
#include <stdio.h>
 
int main() {
 
    float matriz[12][12];
    int coluna=0,linha=0,contador;
    float valor,media,soma=0.0;
    char opc;
    
    scanf(" %c",&opc);
    
     for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12; j++) {
            scanf("%f", &matriz[i][j]);
        }
    }
    for(int linha=0;linha<12;linha++){
        for (int j = linha+1; j < 12; j++){
        soma += matriz[linha][j];
        contador++;
        }
        
       
    }
    
    if(opc == 'S'){
            printf("%.1f\n",soma);
    }
    
    else if(opc == 'M'){
            printf("%.1f\n",soma/contador);
            
    }
    
 
   