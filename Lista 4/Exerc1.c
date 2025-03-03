/*	
	Lista de Exercícios IV (Estruturas de Repetição):
	
	QUESTÃO 01: Faça um programa que leia um número inteiro positivo N e exiba todos os múltiplos de Y 
	inferiores a N, onde N e Y são fornecidos pelo usuário.
	
	Exemplo:
		N = 30
		Y = 8
		
		Serão exibidos: 8, 16, 24
*/

#include <stdio.h>

void main ()
{
	int i, n, y;
	
	printf ("Entre com o valor de N: ");
	scanf ("%d", &n);
	
	printf ("Entre com o valor de Y: ");
	scanf ("%d", &y);
	
	for (i=y;i<n;i+=y)
	{
		printf ("%d ", i);
	}
}
