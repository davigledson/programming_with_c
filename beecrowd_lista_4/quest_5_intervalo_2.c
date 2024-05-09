#include <stdio.h>
 
int main() {
    int limite,valor,dentro =0,fora =0;
    scanf("%d",&limite);
    for(int c=1; c<=limite;c++){
        scanf("%d",&valor);
        if(valor >=10 && valor <=20){
            dentro+=1;
        } else {
            fora+=1;
        }
    }
    
    printf("%d in\n",dentro);
    printf("%d out\n",fora);
    return 0;
}