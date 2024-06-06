//PROBLEMA: 1184 - Abaixo da Diagonal Principal
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
    for(int linha=1;linha<12;linha++){
        for (int j = 0; j < linha; j++){
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
    
 
    return 0;
}