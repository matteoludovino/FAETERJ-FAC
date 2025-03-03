/*
	Lista de Exercícios IX (Funções):
	
	QUESTÃO 01:
	Desenvolver uma função que, dado um número inteiro n, exiba 
	todos os números existentes no intervalo definido por a e b 
	(a < b), exceto aqueles que forem múltiplos de n.
*/

#include <stdio.h>

void exibirNumeros (int n, int a, int b)
{
	int i;

	for (i=a;i<=b;i++)
	{
		if (i%n!=0)
		{
			printf ("%d ", i);
		}
	}
}

void main ()
{
	int numero, inferior, superior;

	printf ("Entre com um numero: ");
	scanf ("%d", &numero);
	
	printf ("Entre com um intervalo: ");
	scanf ("%d %d", &inferior, &superior);

	exibirNumeros (numero, inferior, superior);
}
