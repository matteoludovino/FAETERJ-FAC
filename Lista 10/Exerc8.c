/*
	Lista de Exerc�cios X (Vetores):
	
	QUEST�O 08:
	Dados um vetor de reais (cujos elementos est�o ordenados crescentemente) e um n�mero x, retornar a 
	posi��o da primeira ocorr�ncia de x (caso encontre-se no vetor) ou a posi��o na qual deveria 
	estar (caso contr�rio).
*/

#include <stdio.h> 

int buscar (int vetor[], int tamanho, int valor);
void exibir (int vetor[], int tamanho);

void main ()
{
	int vet[20]={1,2,2,3,5,7,7,7,9,10,10,10,11,15,16,17,17,18,18,20};
	int valor, resp;
	
	exibir (vet, 20);

	printf ("\n\nValor a ser buscado: ");
	scanf ("%d", &valor);

	resp = buscar (vet, 20, valor);

	printf ("\n\nResp = %d\n\n", resp);
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
