/*
	Lista de Exercícios VI (Estruturas de Repetição):
	
	QUESTÃO 02: Pede-se o desenvolvimento de um programa que leia n valores e determine o maior e o menor 
	elementos do conjunto fornecido.
*/

#include <stdio.h>

void main ()
{
	int n, i;
	float numero, maior = -1000000, menor = 1000000;
	
	printf ("Entre com a quantidade de valores: ");
	scanf ("%d", &n);
	
	i = 1;
	while (i <= n)
	{
		printf ("Entre com um numero: ");
		scanf ("%f", &numero);
		
		if (numero > maior)
		{
			maior = numero;
		}		

		if (numero < menor)
		{
			menor = numero;
		}		

		i++;
	}

	printf ("\n\nMaior valor informado: %.1f", maior);
	printf ("\n\nMenor valor informado: %.1f", menor);
}
