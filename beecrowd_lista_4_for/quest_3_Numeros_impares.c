#include <stdio.h>
 
int main() {
 
    int valor;
    scanf("%d",&valor);
    for(int c =1;c <=valor;c++){
    if(c %2 == 1){
        printf("%d\n",c);
    }
    }
 
    return 0;
}