#include <stdio.h>
#include <math.h> 
int main() {
 
    int valor,cal;
    scanf("%d",&valor);
    for(int c = 1;c <= valor;c++){
        
    if(c %2 ==0){
    //if (c == 1) printf("%d^%d = %d\n",c+2,2,cal);
    cal = pow(c,2);
        
    printf("%d^%d = %d\n",c,2,cal);    
        }
        
    }
 
    return 0;
}