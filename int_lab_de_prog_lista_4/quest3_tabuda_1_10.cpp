#include <stdio.h>

int main(){
 int valor;
	scanf("%d",&valor);
	if(valor > 10 || valor < 0){
		printf("Valor invalido");
	} else {
		for(int i=1;i<=10;i++){
		 	printf("%d X %d  = %d\n",valor,i,valor*i);
		}
	printf("-------------------------------\n");
		for(int i=1;i<=10;i++){
		 	printf("%d + %d  = %d\n",valor,i,valor+i);
		}

	}



}