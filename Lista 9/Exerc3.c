/*
	Lista de Exerc�cios IX (Fun��es):
	
	QUEST�O 03:
	Fazer uma fun��o leituraDados que permane�a lendo valores 
	reais at� que o n�mero 0 seja digitado. Ao final, a fun��o 
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
