#include <stdio.h>
int main(){
	int num = 0;
	
	
	printf("Digite o numero: ");	
	scanf("%d",&num);

	int ante = num -1;
	printf("Antecesor %d \n", ante);
	
	int suce = num +1;
	printf("Sucessor %d \n", suce);
	


	return 0;
	
}