#include <stdio.h>
 int main(int argc, char** argv)
{
	int i=0,j=0, matriz[3][3],valor=0,cont=0,soma=0,cont5=0,somaDiagonal=0;


	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
            printf("Digite o n [%d][%d] valor: ",i,j);
	        scanf("%d",&valor);
            cont++;
            soma+=valor;

            if(valor % 5 == 0){
                cont5++;
            }

            if(i == j ){
                somaDiagonal+=valor;
            }
        }

	}

    printf("Media de todos os valores: %d\n",soma/cont);
    printf("Qtd Multiplos de 5: %d\n",cont5);
    printf("Soma diagonal: %d\n",somaDiagonal);

	return 0;
	
}