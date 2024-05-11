#include <stdio.h>

int main(){
 int valor,contador;
	scanf("%d",&valor);

	if(valor >0){

		for(int i=1;i<=100;i++){
		 	
				if(valor % i ==0){
	printf("Da para dividir por: %d / %d = %d\n",valor,i,valor /i);
					contador++;
				}
				
			}
		
		
	printf("Contagem de divisoes:  %d\n",contador);
	if(contador ==2){
		printf("%d E um numero primo\n",valor);
	} else {
		printf("%d NAO numero primo\n",valor);
	}

	} else {
		printf("valor invalido!");
	}

}