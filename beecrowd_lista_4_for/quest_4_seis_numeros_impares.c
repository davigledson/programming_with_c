#include <stdio.h>
 
int main() {
    int valor;
    scanf("%d",&valor);
    
    if(valor % 2 ==0){ 
           valor++;
        
    }
    printf("%d\n",valor);
    
    for(int c =1;c<=5;c++){ 
            printf("%d\n",valor+=2);
    }
 
    return 0;
}