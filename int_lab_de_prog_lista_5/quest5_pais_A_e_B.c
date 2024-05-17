#include <stdio.h>

int main(){
    double paisA = 7000000.0,paisB = 12000000.0;
    int contadorAnoAte12 = 0,contadorAnoAteUltrapassar=0;
    do { 
        
        paisA = paisA  + paisA * 0.05;
       
        paisB = paisB  + paisB * 0.35; 
        // printf("atual contagem do pais A: %.2f\n", paisA);
        // printf("atual contagem do pais B: %.2f\n", paisB);
       

        if(paisA <=12000000)  contadorAnoAte12++;

        contadorAnoAteUltrapassar++;
       
       
        
    } while(paisA < paisB);

    printf("Contagem de anos do pais A ate chegar em 1200000: %d\n",contadorAnoAte12);
    printf("Contagem de anos do pais A ultrapassar pais B: %d\n",contadorAnoAteUltrapassar);

   

}