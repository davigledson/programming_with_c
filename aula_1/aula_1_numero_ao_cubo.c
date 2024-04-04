#include <stdio.h>


int main(){
	int num = 0;
	int cubo = 0;
	
	printf("Digite um numero: ");
	
	scanf("%d",&num);
	
	cubo = num * num * num;
	printf("cubo de %d e %d",num,cubo);
	return 0;
	
}