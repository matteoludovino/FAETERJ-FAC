/*
	Lista de Exercícios II:
	
	QUESTÃO 06: Escrever um algoritmo que, dados um número inteiro 
	i e três valores a, b e c, apresente os 3 números na ordem 
	definida por i, como descrito abaixo:

	a)	i = 1: os três valores em ordem crescente;
	b)	i = 2: os três valores em ordem decrescente;
	c)	i = 3: o maior valor deve ser apresentado no meio 
	    dos outros.
*/

#include <stdio.h>

void main ()
{
	int a, b, c, i;
	
	printf ("(1) Crescente\n(2) Decrescente\n(3) Maior no meio dos demais\n\n");
	printf ("Entre com o codigo: ");
	scanf ("%d", &i);
	
	printf ("Entre com os tres valores: ");
	scanf ("%d %d %d", &a, &b, &c);
	
	if (i == 1)
	{
		if ((a > b) && (a > c))
		{
			if (b > c)
			{
				printf ("%d %d %d\n", c, b, a);
			}
			else
			{
				printf ("%d %d %d\n", b, c, a);
			}
		}
		else
		{
			if (b > c)
			{
				if (a > c)
				{
					printf ("%d %d %d\n", c, a, b);
				}
				else
				{
					printf ("%d %d %d\n", a, c, b);
				}	
			}
			else
			{
				if (a > b)
				{
					printf ("%d %d %d\n", b, a, c);
				}
				else
				{
					printf ("%d %d %d\n", a, b, c);
				}				
			}
		}
	}
	else
	{
		if (i == 2)
		{
			if ((a > b) && (a > c))
			{
				if (b > c)
				{
					printf ("%d %d %d\n", a, b, c);
				}
				else
				{
					printf ("%d %d %d\n", a, c, b);
				}
			}
			else
			{
				if (b > c)
				{
					if (a > c)
					{
						printf ("%d %d %d\n", b, a, c);
					}
					else
					{
						printf ("%d %d %d\n", b, c, a);
					}	
				}
				else
				{
					if (a > b)
					{
						printf ("%d %d %d\n", c, a, b);
					}
					else
					{
						printf ("%d %d %d\n", c, b, a);
					}				
				}
			}			
		}
		else
		{
			if ((a > b) && (a > c))
			{
				printf ("%d %d %d\n", b, a, c);
			}
			else
			{
				if (b > c)
				{
					printf ("%d %d %d\n", a, b, c);
				}
				else
				{
					printf ("%d %d %d\n", a, c, b);
				}
			}			
		}
	}
}
