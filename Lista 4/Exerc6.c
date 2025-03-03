/*
	Lista de Exerc�cios IV (Estruturas de Repeti��o):
	
	QUEST�O 06: Fa�a um programa que leia um n�mero N inteiro, menor 
	ou igual a 18. Se for maior do que 18, o programa exibir� uma 
	mensagem de erro e terminar� a sua execu��o; caso contr�rio, 
	dever� exibir os n�meros no intervalo de 1 a 99 cujos algarismos 
	somem N.

	Exemplo:
	N = 12		Portanto, o programa deve exibir os n�meros que 
	            est�o no intervalo de 1 a 99, cujos algarismos 
				somam 12. Ou seja: 39, 48, 57, 66, 75, 84 e 93.
*/

#include <stdio.h>

void main ()
{
	int n, i, dezena, unidade;

	printf ("Entre com um numero [1..18]: ");
	scanf ("%d", &n);

	if ((n < 1) || (n > 18))
	{
		printf ("\nValor invalido! Deveria estar no intervalo de 1 a 18!\n\n");
	}
	else
	{
		for (i=1;i<=99;i++)
		{
			dezena = i/10;
			unidade = i%10;
			
			if (dezena + unidade == n)
			{
				printf ("%d ", i);
			}
		}
	}
}
