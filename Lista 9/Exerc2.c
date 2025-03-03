/*
	Lista de Exerc�cios IX (Fun��es):
	
	QUEST�O 02:
	Dados dois n�meros inteiros A e B, fazer uma fun��o que 
	determine o n�mero de pot�ncias de 2 existentes no 
	intervalo definido pelos dois valores, assim como a 
	maior delas.
*/

#include <stdio.h>

void potencias2 (int a, int b, int *quantidade, int *maior);

void main ()
{
	int inferior, superior, quantidade, maior;

	printf ("Entre com um intervalo: ");
	scanf ("%d %d", &inferior, &superior);

	potencias2 (inferior, superior, &quantidade, &maior);

	printf ("\n\nQuantidade de potencias no intervalo: %d\n", quantidade);
	printf ("Maior potencia no intervalo: %d\n", maior);
}

void potencias2 (int a, int b, int *quantidade, int *maior)
{
	int i, cont = 0, ma;

	for (i=1;i<=b;i*=2)
	{
		ma = i;		

		if (i >= a)
		{
			cont++;
		}
	}

	*maior = ma;
	*quantidade = cont;
}
