/*
	Lista de Exerc�cios V (Estruturas de Repeti��o):
	
	QUEST�O 06:
	Criar um programa que exiba os N primeiros termos da seguinte 
	s�rie: 

						1,2,8,64,1024,...

*/

#include <stdio.h>

void main ()
{
	int n, i, termo, razao;

	printf ("Quantidade de termos: ");
	scanf ("%d", &n);

	termo = 1;
	razao = 2;

	for (i=1;i<=n;i++)
	{
		printf ("%d ", termo);

		termo *= razao;

		razao *= 2;
	}
}
