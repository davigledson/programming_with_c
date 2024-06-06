//PROBLEMA: 1181 - Linha na Matriz
#include <stdio.h>
 
int main() {
 
    float matriz[12][12];
    int linha=0;
    float valor,media,soma=0.0;
    char opc;
    scanf("%d",&linha);
    scanf(" %c",&opc);
    
     for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12; j++) {
            scanf("%f", &matriz[i][j]);
        }
    }
    for(int c=0;c<12;c++){
        
        soma += matriz[linha][c];
       
    }
    
    if(opc == 'S'){
            printf("%.1f\n",soma);
    }
    
    else if(opc == 'M'){
            printf("%.1f\n",soma/12);
            
    }
    
 
    return 0;
}