/*
	Lista de Exerc�cios IV (Estruturas de Repeti��o):
	
	QUEST�O 04: Fa�a um programa que leia 300 n�meros reais. Ao final, devem ser exibidas as 
	seguintes informa��es:

		a)	A quantidade de valores negativos digitados;
		b)	A m�dia dos valores positivos.
*/

#include <stdio.h>

#define QUANT 300


void main ()
{
	float numero, somaPositivos = 0, mediaPositivos;
	int i, negativos = 0, positivos = 0;
	
	for (i=1;i<=QUANT;i++)
	{
		printf ("Entre com um numero: ");
		scanf ("%f", &numero);
		
		if (numero < 0)
		{
			negativos++;	
		}
		else
		{
			if (numero > 0)
			{
				somaPositivos += numero;
				
				positivos++;
			}
		}
	}

	mediaPositivos = somaPositivos/positivos;

	printf ("\n\nQuantidade de negativos: %d\n", negativos);
	printf ("Media dos negativos: %.1f\n", mediaPositivos);
}

