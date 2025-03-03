/*	
	Lista de Exercícios X (Vetores):
	
	QUESTÃO 06:
	Faça uma função que, dado um vetor de reais, altere todas as ocorrências do número A pelo número B.
*/

#include <stdio.h> 

int alterar (int vetor[], int tamanho, int numA, int numB);

void preencherAleatorio (int vetor[], int tamanho, int limite);
void exibir (int vetor[], int tamanho);

void main ()
{
	int vet[20];
	int valor1, valor2, quant;

	preencherAleatorio (vet, 20, 10);

	exibir (vet, 20);

	printf ("\n\nValor a ser alterado: ");
	scanf ("%d", &valor1);
	
	printf ("\n\nNovo valor: ");
	scanf ("%d", &valor2);

	quant = alterar (vet, 20, valor1, valor2);

	exibir (vet, 20);
	
	printf ("\nForam realizadas %d alteracoes!\n\n", quant);
}

int alterar (int vetor[], int tamanho, int numA, int numB)
{
	int i, cont=0;

	for (i=0;i<tamanho;i++)	
	{
		if (vetor[i] == numA)
		{
			vetor[i] = numB;
			cont++;
		}
	}

	return cont;
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
