/*
	Lista de Exercícios VI (Estruturas de Repetição):
	
	QUESTÃO 03: Implementar um programa que calcule o valor de base^expoente, onde base e expoente são 
	números inteiros dados pelo usuário.
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
