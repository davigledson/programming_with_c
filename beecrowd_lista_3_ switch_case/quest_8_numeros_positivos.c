#include <stdio.h>
 
int main() {
 
    float n1,n2,n3,n4,n5,n6;
    int contP,contN;
    scanf("%f %f %f %f %f %f",&n1,&n2,&n3,&n4,&n5,&n6);
    if(n1>0) contP++;
    if(n2>0) contP++;
    if(n3>0) contP++;
    if(n4>0) contP++;
    if(n5>0) contP++;
    if(n6>0) contP++;
    printf("%d valores positivos\n",contP);
    
    
 
    return 0;
}