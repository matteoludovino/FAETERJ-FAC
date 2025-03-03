/*
	Lista de Exerc�cios VIII (Fun��es):
	
	QUEST�O 08:
	Desenvolver uma fun��o que exiba todos os n�meros primos 
	inferiores a determinado valor inteiro N.
*/

#include <stdio.h>

void primos (int n)
{
	int i, j, cont;

	for (i=2;i<n;i++)
	{
		cont = 0;
		for (j=1;j<=i;j++)
		{
			if (i%j==0)
			{
				cont++;
			}
		}	

		if (cont == 2)
		{
			printf ("%d ", i);
		}
	}
}

void main ()
{
	int numero;

	printf ("Entre com um numero: ");
	scanf ("%d", &numero);

	primos (numero);
}
