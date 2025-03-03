/*
	Lista de Exerc�cios VIII (Fun��es):
	
	QUEST�O 09:
	Implementar uma fun��o que, dado um n�mero inteiro, calcule 
	(e retorne) a soma e a m�dia de seus divisores.
*/

#include <stdio.h>

void somaMediaDivisores (int numero, int *soma, float *media)
{
	int i, s = 0, quant = 0;
	
	for (i=1;i<=numero;i++)
	{
		if (numero%i==0)
		{
			s += i;
			quant++;
		}
	}

	*soma = s;
	*media = (float)s/quant;
}

void main ()
{
	int numero, sm;
	float med;
	
	printf ("Entre com um numero: ");
	scanf ("%d", &numero);
	
	somaMediaDivisores (numero, &sm, &med);
	
	printf ("\n\nSoma dos divisores de %d: %d\n", numero, sm);
	printf ("\nMedia dos divisores de %d: %.2f\n", numero, med);
}
