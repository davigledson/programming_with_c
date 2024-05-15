#include <stdio.h>
 
int main() {
 
    int N,contador=0;
    float n1,n2,n3,formula;
    scanf("%d",&N);
    while(contador <N){
    scanf("%f",&n1);
    scanf("%f",&n2);
    scanf("%f",&n3);
    
    formula = (n1 * 2 + n2 *3 + n3 * 5) / 10;
    printf("%.1f\n",formula);
    contador++;
    
    }
 
    return 0;
}