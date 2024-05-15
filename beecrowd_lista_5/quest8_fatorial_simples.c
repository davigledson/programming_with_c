#include <stdio.h>
 
int main() {
 
    int N=0,cal=1,contador;
    scanf("%d",&N);
    while(N >1){
        
        cal *=  N;
        N--;
    }
    printf("%d\n",cal);
 
    return 0;
}