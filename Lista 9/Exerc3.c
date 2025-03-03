/*
	Lista de Exercícios IX (Funções):
	
	QUESTÃO 03:
	Fazer uma função leituraDados que permaneça lendo valores 
	reais até que o número 0 seja digitado. Ao final, a função 
	deve determinar a quantidade de elementos fornecidos 
	(excluindo o 0) e o maior dentre eles.
*/

#include <stdio.h> 

void leituraDados (int *quant, float *maior);

void main ()
{
	int quant;
	float maior;

	leituraDados (&quant, &maior);

	printf("\n \n Numeros de entrada:  %d" , quant);

	printf("\n Maior valor inserido: %.2f", maior);
}

void leituraDados (int *quant, float *maior)
{
	*quant = 0;
	*maior = -999;
	float n;
	
	do{
		printf("Digite um numero:");
		scanf("%f", &n);
		
		if (n!=0)
		{
			(*quant)++;
		
			if(n > *maior)
			{
				*maior= n;
			}
		}
	} while( n !=0);
}
