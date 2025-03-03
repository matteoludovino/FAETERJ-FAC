/*
	Lista de Exerc�cios X (Vetores):
	
	QUEST�O 11:
	Fazer uma fun��o que, dados dois vetores A e B com n�meros 
	inteiros, gerar o vetor C que consiste na intersec��o dos 
	dois primeiros.

	Nota: considerar que n�o existe repeti��o no conjunto A, 
	nem no conjunto B.
*/

#include <stdio.h> 

void intersecao (int vetA[], int quantA, int vetB[], int quantB, int vetC[], int *quantC);

int buscar (int vetor[], int quantidade, int numero);
void exibir (int vetor[], int tamanho);

void main ()
{
	int vet1[4] = {1,8,3,4};
	int vet2[7] = {10,2,3,8,6,1,7};
	int vet3[4];
	int quant;

	intersecao (vet1, 4, vet2, 7, vet3, &quant);

	exibir (vet1, 4);
	exibir (vet2, 7);
	exibir (vet3, quant);
}

void intersecao (int vetA[], int quantA, int vetB[], int quantB, int vetC[], int *quantC)
{
	int i, j;

	for (i=0,j=0;i<quantB;i++)
	{
		if (buscar (vetA, quantA, vetB[i]) == 1)
		{
			vetC[j] = vetB[i];
			j++;
		}
	}

	*quantC = j;
}

int buscar (int vetor[], int quantidade, int numero)
{
	int i;

	for (i=0;i<quantidade;i++)
	{
		if (vetor[i] == numero)
		{
			return 1;
		}
	}
	
	return 0;
}

void exibir (int vetor[], int tamanho)
{
	int i;

	printf ("\nElementos do vetor: ");
	for (i=0;i<tamanho;i++)
	{
		printf ("%d ", vetor[i]);
	}
	
	printf ("\n\n");
}
