#include <stdio.h>
#include <math.h>
int main(){
	float c = 0;
	
	printf("Digite o grau em celcisus para converter: ");
	
	scanf("%f",&c);
	
 	float fah =  c * 1.8 + 32;
 	
 	printf("%f",fah);

	return 0;
	
}