/*
	Lista de Exerc�cios IX (Fun��es):
	
	QUEST�O 01:
	Desenvolver uma fun��o que, dado um n�mero inteiro n, exiba 
	todos os n�meros existentes no intervalo definido por a e b 
	(a < b), exceto aqueles que forem m�ltiplos de n.
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
