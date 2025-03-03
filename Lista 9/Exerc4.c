/*
	Lista de Exercícios IX (Funções):
	
	QUESTÃO 04:
	A função logarítmica é complementar à potenciação. Ou seja, 
	uma vez que 3^4 = 81, podemos então afirmar que log 3 81 = 4.
	
	Generalizando, temos que:

		base^expoente = pot   <===>   log base pot = expoente

	Com base nessa descrição, pede-se o desenvolvimento de uma 
	função que, dados a e b, calcule o valor de log a b.

	Nota: a sua solução deverá apresentar um valor inteiro que, 
	na verdade, será a solução aproximada do logaritmo.
*/

#include <stdio.h> 
#include <float.h>

int logaritmo (int base, int numero);

void main ()
{
	int valor, base, resposta;

	printf ("Numero: ");
	scanf ("%d", &valor);
	
	printf ("\nBase: ");
	scanf ("%d", &base);

	resposta = logaritmo (base, valor);

	printf ("\n\nReposta = %d", resposta);
}

int logaritmo (int base, int numero)
{
	int i, cont = 0;
	
	for (i=base;i<=numero;i*=base)
	{
		cont++;
	}
	
	return cont;
}
