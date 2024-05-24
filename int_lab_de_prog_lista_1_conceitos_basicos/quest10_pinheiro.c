#include <stdio.h>
int main()
{
	/*

10- Fa�a um programa que desenhe um "pinheiro" na tela, similar ao abaixo:

	*/

	int coluna;
	int linha;
	int espaco;

	for (linha = 1; linha <= 10; linha++)
	{

		for (espaco = 1; espaco <= 10 - linha; espaco++)
		{

			printf(" ");
		}

		for (coluna = 1; coluna <= linha * 2 - 1; coluna++)
		{

			// printf("%d",linha*2 -1);
			printf("X");
		}

		printf(" \n");
	}

	int pes = 0;

	for (pes = 1; pes <= 24; pes++)
	{
		printf(" ");
		if (pes == 8)
		{
			printf("XX\n");
		}

		if (pes == 16)
		{
			printf("XX\n");
		}
		if (pes == 23)
		{
			printf("XXXX\n");
		}
	}
}
