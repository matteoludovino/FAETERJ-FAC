/*
	Lista de Exerc�cios VI (Estruturas de Repeti��o):
	
	QUEST�O 03: Implementar um programa que calcule o valor de base^expoente, onde base e expoente s�o 
	n�meros inteiros dados pelo usu�rio.
*/

#include <stdio.h>
#include <float.h>

void main ()
{
	int base, expoente, resultado = 1, i;
	
	printf ("Base: ");
	scanf ("%d", &base);
	
	printf ("Expoente: ");
	scanf ("%d", &expoente);

	for (i=1;i<=expoente;i++)
	{
		resultado = resultado*base;
	}
	
	printf ("\n\n%d ^ %d = %d", base, expoente, resultado);
}
