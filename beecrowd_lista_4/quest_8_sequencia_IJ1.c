#include <stdio.h>
#define true 1
int main() {
        int I=1,J=60,C;
    for(C=12;C>=0;C--){
        
        printf("I=%d J=%d\n",I,J);
        
        I+=3;
        J-=5;
    }
 
    return 0;
}