/*
	Lista de Exercícios X (Vetores):
	
	QUESTÃO 07:
	Desenvolver uma função que remova determinado elemento (todas as suas ocorrências) de um vetor de float. 
	Ao final, retornar o número de remoções realizadas.
*/

#include <stdio.h> 

int remover (int vetor[], int *quant, int valor);

void preencherAleatorio (int vetor[], int tamanho, int limite);
void exibir (int vetor[], int tamanho);

void main ()
{
	int vet[20];
	int valor, quant = 20, resp;

	preencherAleatorio (vet, 20, 10);

	exibir (vet, quant);

	printf ("\n\nValor a ser removido: ");
	scanf ("%d", &valor);

	resp = remover (vet, &quant, valor);

	exibir (vet, quant);
	
	printf ("\nForam realizadas %d remocoes!\n\n", resp);
}

int remover (int vetor[], int *quant, int valor)
{
	int i, j, cont = 0;

	for (i=0;i<*quant;i++)
	{
		if (vetor[i] == valor)
		{
			for (j=i+1;j<*quant;j++)
			{
				vetor[j-1] = vetor[j];
			}
			
			(*quant)--;

			cont++;
			
			i--;
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
