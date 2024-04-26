#include <stdio.h>
 
int main() {
 
    float n1,n2,n3,n4,n5,n6,media;
    int contP;
    scanf("%f %f %f %f %f %f",&n1,&n2,&n3,&n4,&n5,&n6);
    if(n1>0) {contP++;media+=n1;}
    if(n2>0) {contP++;media+=n2;}
    if(n3>0) {contP++;media+=n3;}
    if(n4>0) {contP++;media+=n4;}
    if(n5>0) {contP++;media+=n5;}
    if(n6>0) {contP++;media+=n6;}
    
    printf("%d valores positivos\n",contP);
    printf("%.1f\n",media/contP);
    
 
    return 0;
}