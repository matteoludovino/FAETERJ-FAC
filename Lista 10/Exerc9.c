/*
	Lista de Exercícios X (Vetores):
	
	QUESTÃO 09:
	Implementar a função de inserção de determinado elemento em 
	um vetor ordenado crescentemente (dica: utilizar a função do 
	item 08 para auxiliar).
*/

#include <stdio.h> 

int inserir (int vetor[], int *quantidade, int capacidade, int numero);

int buscar (int vetor[], int tamanho, int valor);
void exibir (int vetor[], int tamanho);

void main ()
{
	int vet[5];
	int quant = 0, valor, resp; 
	do
	{
		exibir (vet, quant);

		printf ("\n\nValor a ser inserido: ");
		scanf ("%d", &valor);

		resp = inserir (vet, &quant, 5, valor);
	}
	while (resp == 1);
}

int inserir (int vetor[], int *quantidade, int capacidade, int numero)
{
	int posicao, i;

	if (*quantidade < capacidade)
	{
		posicao = buscar (vetor, *quantidade, numero);

		for (i=*quantidade;i>posicao;i--)
		{
			vetor[i] = vetor[i-1];
		}

		vetor[posicao] = numero;

		(*quantidade)++;
		
		return 1;
	}
	else
	{
		return 0;
	}		
}

int buscar (int vetor[], int tamanho, int valor)
{
	int i;

	for (i=0;i<tamanho;i++)
	{
		if (vetor[i] >= valor)
		{
			return i;
		}
	}
	
	return tamanho;
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
