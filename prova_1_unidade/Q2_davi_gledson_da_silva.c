#include <stdio.h>
#include <math.h>
int main(){
	double A,B,C,R1,R2,delta;
	printf("Insirar o valor de A:\n");
	scanf("%lf",&A);
	
	printf("Insirar o valor de B:\n");
	scanf("%lf",&B);
	
	printf("Insirar o valor de C:\n");
	scanf("%lf",&C);
	delta = B*B  - 4 * (A * C);
	if(A==0 || B==0 || C ==0 || delta <=0 || 2*A == 0){
		printf("Impossivel calcular\n");
		
	}  else{
			R1 =  (-B + sqrt(delta)) / (2*A);
			R2 =  (-B - sqrt(delta)) / (2*A); 

			printf("R1 = %.2lf \n",R1);
			printf("R2 = %.2lf \n",R2);
	}
	

	
	


}