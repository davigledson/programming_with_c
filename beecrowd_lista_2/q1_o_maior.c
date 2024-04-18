#include <stdio.h>
 
int main() {
 int a,b,c,maior;
    scanf("%d %d %d",&a,&b,&c);
    
    if(a>b && a > c){
        maior = a;
    }
    if(b > c){
        maior=b;
    }
    if(c>a && c>b){
        maior =c;
    }
    printf("%d eh o maior\n",maior);
    return 0;
}