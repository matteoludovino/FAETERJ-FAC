/*	
	Lista de Exerc�cios IV (Estruturas de Repeti��o):
	
	QUEST�O 01: Fa�a um programa que leia um n�mero inteiro positivo N e exiba todos os m�ltiplos de Y 
	inferiores a N, onde N e Y s�o fornecidos pelo usu�rio.
	
	Exemplo:
		N = 30
		Y = 8
		
		Ser�o exibidos: 8, 16, 24
*/

#include <stdio.h>

void main ()
{
	int i, n, y;
	
	printf ("Entre com o valor de N: ");
	scanf ("%d", &n);
	
	printf ("Entre com o valor de Y: ");
	scanf ("%d", &y);
	
	for (i=y;i<n;i+=y)
	{
		printf ("%d ", i);
	}
}
