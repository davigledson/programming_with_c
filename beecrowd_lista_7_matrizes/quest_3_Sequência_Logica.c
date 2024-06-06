//PROBLEMA: 1144 - Sequência Lógica

#include <stdio.h>
 
int main() {
 
    int valor;
    scanf("%d",&valor);
    
    
    for(int c = 1; c<=valor;c++ ){
        printf("%d %d %d\n",c, c*c, c*c*c );
        printf("%d %d %d\n",c, c*c+1, c*c*c+1);
        
        
    }
 
    return 0;
}