#include <stdio.h>
int main(){
	int n1,n2,n3;
	int media;
	
	printf("Digite a nota 1:\n");
	scanf("%d",&n1);
	
	printf("Digite a nota 2:\n");
	scanf("%d",&n2);
	
	printf("Digite a nota 3:\n");
	scanf("%d",&n3);
	
		media = (n1+n2+n3) /3;
		switch(media){
			case 9 ... 10:
			printf("A\n");
		
			break;
			
			case 7 ... 8:
			printf("B\n");
			break;
			
			case 5 ... 6:
			printf("C\n");
			break;
			
			case 3 ... 4:
			printf("D\n");
			break;
			case 1 ... 2:
			printf("E\n");
			break;
			
			case 0:
			printf("F\n");
			break;
			default:
				printf("Media Invalida\n");	
		}
	
}