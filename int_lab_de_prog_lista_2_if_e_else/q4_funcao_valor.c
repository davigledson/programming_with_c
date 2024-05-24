#include <stdio.h>
int main(){
float x,funcao;

printf("Digite o valor de X:\n");
scanf("%f", &x);

if(x <= 1){
		funcao = 1;
	}
	else if(1 < x && x <= 2){
		funcao = 2;
	}
	
	else if(2 < x && x <= 3){
		funcao = x *x;
	}
	
	else if(x > 3){
	funcao = x * x * x;
	}
	

printf("O valor de funcao e  %f",funcao);
}
