#include <stdio.h>


int main(){
	int num = 0;
	int num1 = 0;
	int num2 = 0;
	float media = 0;
	
	printf("Digite os tres numero: ");	
	scanf("%d %d %d",&num,&num1,&num2);
	
	
	
	media = (num + num1 + num2)  / 3;
	printf("A media e %f ",media);
	return 0;
	
}