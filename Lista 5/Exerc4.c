/*
	Lista de Exerc�cios V (Estruturas de Repeti��o):
	
	QUEST�O 04:
	Implementar um programa que exiba os N primeiros termos de uma 
	PA (Progress�o Aritm�tica) com primeiro termo a1 e raz�o r.
*/

#include <stdio.h>

void main ()
{
	int a1, n, r, i, termo;

	printf ("Primeiro termo: ");
	scanf ("%d", &a1);
	
	printf ("Razao: ");
	scanf ("%d", &r);
	
	printf ("Quantidade de termos: ");
	scanf ("%d", &n);

	termo = a1;

	for (i=1;i<=n;i++)
	{
		printf ("%d ", termo);
		
		termo += r;
	}
}
