#include <stdio.h>
#include <stdlib.h>

int main(){

    double A, B, C;

    scanf("%lf %lf %lf", &A, &B, &C);

    if ((A < B + C) && (B < A + C) && (C < A + B)){
        if ((A*A == B*B + C*C) || (B*B == A*A + C*C) || (C*C == A*A + B*B)) {
        printf("TRIANGULO RETANGULO\n");
        }
         else {
            if ((A*A > B*B + C*C) || (B*B > A*A + C*C) || (C*C > A*A + B*B)) {
              printf("TRIANGULO OBTUSANGULO\n");
            }
            else {
                  if ((A*A < B*B + C*C) || (B*B < A*A + C*C) || (C*C < A*A + B*B)) {
                      printf("TRIANGULO ACUTANGULO\n");
                  }
             }
         }
        if ((A == B) && (B == C) && (A == C)){
            printf("TRIANGULO EQUILATERO\n");
        }
        else {
            if ((A == B) || (B == C) || (A == C)) {
            printf("TRIANGULO ISOSCELES\n");
        } 
        }
    }
    else {
        printf("NAO FORMA TRIANGULO\n");
    }   
    return 0;
}