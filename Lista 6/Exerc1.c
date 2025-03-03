/*	
	Lista de Exercícios VI (Estruturas de Repetição):
	
	QUESTÃO 01: Faça um programa que leia um número inteiro x e, em seguida, solicite ao usuário outros 50 
	valores inteiros. Ao final, o programa deve exibir o total de múltiplos de x fornecidos.
*/

#include <stdio.h>

#define QUANT 50

void main ()
{
	int x, numero, i, cont = 0;
	
	printf ("Entre com o valor de x: ");
	scanf ("%d", &x);
	
	for (i=1;i<=QUANT;i++)
	{
		printf ("Entre com um numero: ");
		scanf ("%d", &numero);
		
		if (numero % x == 0)
		{
			cont++;
		}
	}
	
	printf ("\n\nForam informados %d multiplos de %d.", cont, x);
}
