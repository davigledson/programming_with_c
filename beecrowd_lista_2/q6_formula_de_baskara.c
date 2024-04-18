#include <stdio.h>
#include <math.h> 
int main() {
 
    float a,b,c,raizParte;
    scanf("%f %f %f",&a,&b,&c);
    
    raizParte = sqrt((b*b)-4*a *c)/2*a;
    printf("%f",raizParte);
    
    if(a ==0 || b ==0 || c ==0 || -b + raizParte ==0 || -b - raizParte ==0){
        printf("Impossivel calcular");
    }
    else {
    printf("R1 = %.5f\n",-b + raizParte);
    printf("R2 = %.5f\n",-b - raizParte);
        
    }
    
    return 0;
}
