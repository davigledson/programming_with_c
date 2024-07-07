#include <stdio.h>
int main(){
   int n, i, j=0, x=0;
    
   printf("Defina um valor: ");
   scanf("%d", &n);
    
   for(i=1; i<n; i++){
       if(n%i == 0){
           j++;
       }
   }
   int div[j];
    
   for(i=1; i<=n; i++){
        if(n%i == 0){
            div[x] = i;
            x++;
        }
    }
    
   for(i=0; i<=j; i++){
        printf("%d ", div[i]);
    }
}
