/*	
	Lista de Exercícios X (Vetores):
	
	QUESTÃO 01:
	Desenvolver uma função que determine o número de ocorrências 
	de um número inteiro x em um vetor A.
*/

#include <stdio.h> 

int numOcorrencias (int vet[], int tamanho, int numero);

void preencherAleatorio (int vetor[], int tamanho, int limite);
void exibir (int vetor[], int tamanho);

void main ()
{
	int vetor1[5] = {3,7,5,3,1};
	int vetor2[50];
	int numero, ocor1, ocor2;
	
	preencherAleatorio (vetor2, 50, 10);
	
	exibir (vetor1, 5);
	exibir (vetor2, 50);
	
	printf ("Entre com o numero a ser buscado: ");
	scanf ("%d", &numero);

	ocor1 = numOcorrencias (vetor1, 5, numero);

	ocor2 = numOcorrencias (vetor2, 50, numero);

	printf ("\n\nO valor %d foi encontrado %d vezes no vetor 1 e %d vezes no vetor 2.\n\n", numero, ocor1, ocor2);
}

int numOcorrencias (int vet[], int tamanho, int numero)
{
	int i, cont=0;

	for (i=0;i<tamanho;i++)
	{
		if (vet[i] == numero)
		{
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
