/*	
	Lista de Exercícios X (Vetores):
	
	QUESTÃO 02:
	Implementar uma função que, dado um vetor de reais, troque 
	o 1º e o 2º elementos, em seguida o 3º e o 4º elementos e 
	assim sucessivamente, até se chegar ao final do vetor.
*/

#include <stdio.h> 

void trocarElementos (int vetor[], int tamanho);

void preencherAleatorio (int vetor[], int tamanho, int limite);
void exibir (int vetor[], int tamanho);

void main ()
{
	int vetor1[15];
	int vetor2[10];

	preencherAleatorio (vetor1, 15, 20);
	preencherAleatorio (vetor2, 10, 20);

	exibir (vetor1, 15);
	exibir (vetor2, 10);

	trocarElementos (vetor1, 15);
	trocarElementos (vetor2, 10);

	exibir (vetor1, 15);
	exibir (vetor2, 10);	
}

void trocarElementos (int vetor[], int tamanho)
{
	int i, j, tmp;
	
	for (i=0,j=1;j<tamanho;i+=2,j+=2)
	{
		tmp = vetor[i];
		vetor[i] = vetor[j];
		vetor[j] = tmp;
	}
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
