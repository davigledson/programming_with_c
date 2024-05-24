#include <stdio.h>
int main(){
float p1, p2, p3;

printf("Produto 1:\n");
scanf("%f", &p1);

printf("Produto 2:\n");
scanf("%f", &p2);

printf("Produto 3:\n");
scanf("%f", &p3);

if( p1 < p2 && p1 <p3){
	printf("O mais barato e o Produto 1!\n");
} else if(p2 < p1 && p2 <p3){
	printf("O mais barato e o Produto 2!\n");
	
} else if(p3 < p1 && p3 <p2){
	printf("O mais barato e o Produto 3!\n");
	
}

	
}
