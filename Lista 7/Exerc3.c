/*	
	Lista de Exerc�cios VII (Estruturas de Repeti��o):
	
	QUEST�O 03: Fa�a um programa que exiba na tela as tabuadas dos 
	n�meros de 1 a 9, como descrito a seguir:

				1 � 0 = 0	2 � 0 = 0	...	9 � 0 = 0	
				1 � 1 = 1	2 � 1 = 2	...	9 � 1 = 9	
				1 � 2 = 2	2 � 2 = 4	...	9 � 2 = 18
					.		.		.
					.		.		.
					.		.		.
				1 � 9 = 9	2 � 9 = 18	...	9 � 9 = 81
*/

#include <stdio.h>

void main ()
{
	int i, j, mult;
	
	for (i=1;i<=9;i++)
	{
		for (j=0;j<=9;j++)
		{
			mult = i*j;
			
			printf ("%d x %d = %d\n", i, j, mult);
		}
		
		printf ("\n\n");
	}	
}
