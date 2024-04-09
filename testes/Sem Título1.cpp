#include <stdio.h>
 
int main() {
 
 double A,B;
 double pesoA =3.5,pesoB=7.5,MEDIA;
   scanf("%lf",&A);
   scanf("%lf",&B);
   MEDIA=(A*pesoA+B*pesoB)/pesoA+pesoB;
   printf("MEDIA = %.5f\n",MEDIA);
 
    return 0;
}
