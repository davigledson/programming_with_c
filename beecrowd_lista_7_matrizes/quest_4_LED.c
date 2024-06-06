//PROBLEMA: 1168 - LED
#include<stdio.h>
#include<string.h>


int main(){

    int i, leds, j, testes;
    char numeros[105];
    int tamanho; 
    scanf("%d", &testes);
    
    for(i = 0; i < testes; i++){
    scanf("%s", &numeros);
    tamanho = strlen( numeros );
    leds = 0;
        for(j = 0; j < tamanho; j++){
            if(numeros[j] == '1'){
                leds += 2;
            }
            if(numeros[j] == '2'){
                leds += 5;
            }
            if(numeros[j] == '3'){
                leds += 5;
            }
            if(numeros[j] == '4'){
                leds += 4;
            }
            if(numeros[j] == '5'){
                leds += 5;
            }
            if(numeros[j] == '6'){
                leds += 6;
            }
            if(numeros[j] == '7'){
                leds += 3;
            }
            if(numeros[j] == '8'){
                leds += 7;
            }
            if(numeros[j] == '9'){
                leds += 6;
            }
            if(numeros[j] == '0'){
                leds += 6;
            }
             
        }
        printf("%d leds\n", leds);
        
    }

    return 0;
}