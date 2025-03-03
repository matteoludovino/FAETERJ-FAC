/*
	Lista de Exercícios VI (Estruturas de Repetição):
	
	QUESTÃO 04: A prefeitura de uma cidade fez uma pesquisa com 300 de seus habitantes, coletando dados 
	sobre o salário e número de filhos. A prefeitura deseja saber: 

		a)	média do salário da população; 
		b)	média do número de filhos; 
		c)	maior salário; 
		d)	percentual de pessoas com salário até R$ 1.000,00. 
*/

#include <stdio.h>
#include <float.h>

#define QUANT 5

void main ()
{
	int i, numFilhos, somaFilhos = 0, cont1000 = 0;
	float salario, somaSalario = 0, mediaSalario, mediaFilhos, maiorSalario = 0, perc1000;
	
	for (i=1;i<=QUANT;i++)
	{
		printf ("\nNumero de filhos: ");
		scanf ("%d", &numFilhos);
		
		printf ("\nSalario: ");
		scanf ("%f", &salario);
		
		somaSalario += salario;
		
		somaFilhos += numFilhos;
		
		if (salario > maiorSalario)
		{
			maiorSalario = salario;
		}
		
		if (salario <= 1000)
		{
			cont1000++;
		}
	}	
	
	mediaSalario = somaSalario/QUANT;
	
	mediaFilhos = (float)somaFilhos/QUANT;
	
	perc1000 = ((float)cont1000/QUANT)*100;
	
	printf ("\n\nMedia salarial: R$ %.2f", mediaSalario);
	printf ("\nMedia do numero de filhos: %.2f", mediaFilhos);
	printf ("\nMaior salario: R$ %.2f", maiorSalario);
	printf ("\nPercentual de pessoas que recebem ate R$ 1.000,00: %.1f%%", perc1000);
}
