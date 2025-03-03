/*
	Lista de Exerc�cios VIII (Fun��es):
	
	QUEST�O 07:
	Implementar uma fun��o que, dado um n�mero inteiro n, 
	e o intervalo definido pelos n�meros a e b, determine 
	quantos valores do intervalo possuem divisores 
	(sendo estes diferentes de 1) que tamb�m sejam divisores 
	de n.

	Exemplo:
		n = 6
		a = 10 e b = 20

	Resposta = 7 (pois os n�meros 10, 12, 14, 15, 16, 18 e 20 
	possuem divisores em comum com o n�mero 6).
*/

#include <stdio.h>

int divisoresComuns (int n, int a, int b)
{
	int i, j, cont = 0;

	for (i=a;i<=b;i++)
	{
		for (j=2;j<=i;j++)
		{
			if ((i % j == 0) && (n % j == 0))
			{
				cont++;
				
				break;
			}
		}
	}

	return cont;
}

void main ()
{
	int numero, inf, sup, quant;
	
	printf ("Entre com um numero: ");
	scanf ("%d", &numero);

	printf ("\n\nEntre com o intervalo: ");
	scanf ("%d %d", &inf, &sup);

	quant = divisoresComuns (numero, inf, sup);

	printf ("\nResposta = %d", quant);
}
