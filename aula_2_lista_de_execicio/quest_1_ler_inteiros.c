//1. Ler dois números inteiros, x e y, e apresentar o quociente e o resto da divisão inteira entre eles. 
#include <stdio.h>
main(){
    printf("digite o dividendo e o divisor");
    int n1 = 0;
    int n2 = 0;
    scanf("%d %d",&n1,&n2);
   
    printf(" Quoeficiente: %d \n Resto: %d", n1 / n2 , n1 % n2);
}