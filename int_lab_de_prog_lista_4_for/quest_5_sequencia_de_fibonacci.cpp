#include <stdio.h>
int main(){
 	int valor,sequencia,termos,ultimo,penultimo;
	scanf("%d",&termos);
ultimo =0;
penultimo = 1;

		for(int i=1;i<=termos;i++){
		 
		sequencia = ultimo + penultimo;
		penultimo = ultimo;
		ultimo = sequencia;
		//anterior = sequencia -i + sequ;
	
		printf("%d ",sequencia);
		
			}

}