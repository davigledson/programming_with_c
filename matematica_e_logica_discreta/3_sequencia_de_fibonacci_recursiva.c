#include <stdio.h>


int fibo(int n) {
        if(n==0) return 0;
        else if(n==1) return 1;
        else return fibo(n-1)+ fibo(n-2);
        }


int main() {
    int n = 10; 
    int i =0;
    for (i = 0; i < n; i++) {
        printf("%d ", fibo(i));
    }
    printf("\n");
    return 0;
}
