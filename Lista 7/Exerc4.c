/*	
	Lista de Exerc�cios VII (Estruturas de Repeti��o):
	
	QUEST�O 04: Fa�a um programa que leia um n�mero inteiro N e 
	informe se o mesmo � ou n�o primo.

	Nota: um n�mero � dito primo quando for divis�vel apenas 
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
