//PROBLEMA: 1192 - O jogo Matemático de Paula
#include <stdio.h>
#include <string.h> 
int main() {
 
    char letra;
    int n1=0,n2=0,testes;
    scanf("%d",&testes);
    for(int c=0;c<testes;c++){
    
    scanf("%d",&n1);
    scanf("%c",&letra);
    scanf("%d",&n2);
    
        if(n2 == n1){
        printf("%d\n",n1*n2);    
        } else {
            if(isupper(letra)){
            printf("%d\n",n2-n1);
            } else {
                printf("%d\n",n2+n1);
            }    
        }
        
    }
    
 
    return 0;
}