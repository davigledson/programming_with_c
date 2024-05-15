#include <stdio.h>
 
int main() {
 
    int alcool=0,gasolina=0,diesel=0,opc=0;
    while(1){
        scanf("%d",&opc);
        if(opc ==1) alcool++;
        if(opc ==2) gasolina++;
        if(opc ==3) diesel++;
        
        if(opc ==4){
            printf("MUITO OBRIGADO\n");
            printf("Alcool: %d\n",alcool);
            printf("Gasolina: %d\n",gasolina);
            printf("Diesel: %d\n",diesel);
            break;
        }
    }
    return 0;
}