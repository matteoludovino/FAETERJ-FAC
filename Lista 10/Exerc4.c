/*
	Lista de Exercícios X (Vetores):
	
	QUESTÃO 04:
	Fazer uma função que armazene em um vetor os 50 primeiros termos da seguinte sequência:

									S = 1, 2, 4, 7, 11, 16, ...
									
	Nota: observem que a diferença entre o 1º e 2º elementos é igual a 1, entre o 2º e 3º é igual a 2, 
	entre o 3º e o 4º é igual a 3, e assim sucessivamente.
*/

#include <stdio.h> 

void preencherVetor (int vetor[], int tamanho);

void exibir (int vetor[], int tamanho);

void main ()
{
	int vet[50];

	preencherVetor (vet, 50);

	exibir (vet, 50);
}

void preencherVetor (int vetor[], int tamanho)
{
	int i, dif = 1;

	vetor[0] = 1;

	for (i=1;i<tamanho;i++)
	{
		vetor[i] = vetor[i-1] + dif;

		dif++;
	}
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
