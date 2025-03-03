/*
	Lista de Exercícios X (Vetores):
	
	QUESTÃO 05:
	Elaborar uma função que, dado um conjunto de 300 valores inteiros, distribua-os em 2 vetores conforme 
	forem pares ou ímpares.
*/

#include <stdio.h> 

#define TAM 300

void separarParesImpares (int vetOriginal[], int tamOriginal, int vetPares[], int *tamPares, int vetImpares[], int *tamImpares);

void preencherAleatorio (int vetor[], int tamanho, int limite);
void exibir (int vetor[], int tamanho);

void main ()
{
	int vetO[TAM], vetP[TAM], vetI[TAM];
	int quantP, quantI;

	preencherAleatorio (vetO, TAM, 100);

	separarParesImpares (vetO, TAM, vetP, &quantP, vetI, &quantI);

	exibir (vetO, TAM);
	exibir (vetP, quantP);
	exibir (vetI, quantI);
}

void separarParesImpares (int vetOriginal[], int tamOriginal, int vetPares[], int *tamPares, int vetImpares[], int *tamImpares)
{
	int i, pares = 0, impares = 0;

	for (i=0;i<tamOriginal;i++)
	{
		if (vetOriginal[i]%2==0)
		{
			vetPares[pares] = vetOriginal[i];
			pares++;
		}
		else
		{
			vetImpares[impares] = vetOriginal[i];
			impares++;
		}
	}

	*tamPares = pares;
	*tamImpares = impares;
}

void preencherAleatorio (int vetor[], int tamanho, int limite)
{
	int i;
	
	srand (time(NULL));

	for (i=0;i<tamanho;i++)
	{
		vetor[i] = rand()%limite;
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
