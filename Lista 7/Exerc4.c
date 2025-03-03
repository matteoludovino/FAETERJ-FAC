/*	
	Lista de Exercícios VII (Estruturas de Repetição):
	
	QUESTÃO 04: Faça um programa que leia um número inteiro N e 
	informe se o mesmo é ou não primo.

	Nota: um número é dito primo quando for divisível apenas 
	por 1 e por ele mesmo.
*/

#include <stdio.h>

//main
void main ()
{
	int i, numero, cont = 0;
	
	printf ("Entre com um numero: ");
	scanf ("%d", &numero);
	
	for (i=1;i<=numero;i++)
	{
		if (numero%i==0)
		{
			cont++;
		}
	}
	
	if (cont == 2)
	{
		printf ("\n\nO numero %d e primo!", numero);
	}
	else
	{
		printf ("\n\nO numero %d NAO e primo!", numero);
	}
}
