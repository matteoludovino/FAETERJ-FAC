/*
	Lista de Exerc�cios IV (Estruturas de Repeti��o):
	
	QUEST�O 05: Fa�a um programa que exiba na tela os 50 primeiros termos da seguinte s�rie: 
	
									1, -2, 3, -4, 5, -6 ...
*/

#include <stdio.h>

void main ()
{
	int i;

	for (i=1;i<=50;i++)
	{
		if (i%2==0)
		{
			printf ("%d ", -i);
		}
		else
		{
			printf ("%d ", i);
		}
	}
}
