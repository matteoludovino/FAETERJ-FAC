/*
	Lista de Exerc�cios X (Vetores):
	
	QUEST�O 04:
	Fazer uma fun��o que armazene em um vetor os 50 primeiros termos da seguinte sequ�ncia:

									S = 1, 2, 4, 7, 11, 16, ...
									
	Nota: observem que a diferen�a entre o 1� e 2� elementos � igual a 1, entre o 2� e 3� � igual a 2, 
	entre o 3� e o 4� � igual a 3, e assim sucessivamente.
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
