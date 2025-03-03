/*
	Lista de Exercícios IV (Estruturas de Repetição):
	
	QUESTÃO 02: Faça um programa que exiba todos os elementos da seguinte série, assim como a soma destes 
	elementos:

						1, 50, 2, 49, 3, 48, 4, 47, 5, 46, ..., 49, 2, 50, 1
*/

#include <stdio.h>

void main ()
{
	int i, j, soma = 0;

	j=50;	
	for (i=1;i<=50;i++)
	{
		printf ("%d %d ", i, j);
		
		soma += i+j;

		j--;
	}
	
	printf ("\n\nSoma = %d", soma);
}
