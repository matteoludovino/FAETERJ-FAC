/*	
	Lista de Exerc�cios VI (Estruturas de Repeti��o):
	
	QUEST�O 01: Fa�a um programa que leia um n�mero inteiro x e, em seguida, solicite ao usu�rio outros 50 
	valores inteiros. Ao final, o programa deve exibir o total de m�ltiplos de x fornecidos.
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
