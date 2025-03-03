/*
	Lista de Exercícios X (Vetores):
	
	QUESTÃO 03:
	Pede-se a implementação de uma função que, dado um vetor 
	contendo números reais, determine se o mesmo encontra-se 
	ordenado de forma crescente.
*/

#include <stdio.h> 

int  verificarOrdenacao (int vetor[], int tamanho);

void preencherAleatorio (int vetor[], int tamanho, int limite);
void exibir (int vetor[], int tamanho);

void main ()
{
	int vetor1[15];
	int vetor2[10] = {1,2,2,3,4,6,7,8,9,10};

	preencherAleatorio (vetor1, 15, 20);

	exibir (vetor1, 15);
	exibir (vetor2, 10);

	if (verificarOrdenacao (vetor1, 15) == 1)
	{
		printf ("\n\nO vetor 1 esta ordenado!\n\n");
	}
	else
	{
		printf ("\n\nO vetor 1 NAO esta ordenado!\n\n");
	}


	if (verificarOrdenacao (vetor2, 10) == 1)
	{
		printf ("\n\nO vetor 2 esta ordenado!\n\n");
	}
	else
	{
		printf ("\n\nO vetor 2 NAO esta ordenado!\n\n");
	}
}

int  verificarOrdenacao (int vetor[], int tamanho)
{
	int i;

	for (i=0;i<tamanho-1;i++)
	{
		if (vetor[i] > vetor[i+1])
		{
			return 0;
		}
	}

	return 1;
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
