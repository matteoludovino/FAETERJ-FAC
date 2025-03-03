/*
	Lista de Exercícios IV (Estruturas de Repetição):
	
	QUESTÃO 04: Faça um programa que leia 300 números reais. Ao final, devem ser exibidas as 
	seguintes informações:

		a)	A quantidade de valores negativos digitados;
		b)	A média dos valores positivos.
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

