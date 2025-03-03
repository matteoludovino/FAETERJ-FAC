/*
	Lista de Exercícios V (Estruturas de Repetição):
	
	QUESTÃO 05:
	Criar um programa que exiba os N primeiros termos da seguinte 
	série: 

							1,2,4,8,16,32,...
*/

#include <stdio.h>

void main ()
{
	int n, i, termo;

	printf ("Quantidade de termos: ");
	scanf ("%d", &n);

	termo = 1;

	for (i=1;i<=n;i++)
	{
		printf ("%d ", termo);
		
		termo *= 2;
	}
}
