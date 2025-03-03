/*
	Lista de Exercícios IV (Estruturas de Repetição):
	
	QUESTÃO 07: Uma determinada empresa fez uma pesquisa de mercado 
	para saber se as pessoas gostaram ou não de um novo produto que 
	foi lançado. Para cada pessoa entrevistada foram coletados os 
	seguintes dados: gênero (M ou F) e resposta (G [Gostou] ou 
	N [Não Gostou]). Sabendo-se que foram entrevistadas X pessoas, 
	faça um programa que forneça:

	a)	Número de pessoas que gostaram do produto;
	b)	Número de pessoas que não gostaram do produto;
	c)	Informação dizendo em que gênero o produto teve uma melhor 
	    aceitação.
*/

#include <stdio.h>

void main ()
{
	int i, quantidade, gostaram = 0, gostaramF = 0, gostaramM = 0, 
	    naoGostaram = 0, contM = 0, contF = 0;
	char genero, opiniao;
	float percM, percF;

	printf ("Numero de entrevistados: ");
	scanf ("%d", &quantidade);

	for (i=1;i<=quantidade;i++)
	{
		printf ("Genero [M/F]: ");
		fflush (stdin);
		scanf ("%c", &genero);
		
		printf ("Opiniao [(G)ostou / (N)ao gostou]: ");
		fflush (stdin);
		scanf ("%c", &opiniao);

		if (genero == 'M')
		{
			contM++;
		}
		else
		{
			contF++;
		}

		if (opiniao == 'G')
		{
			gostaram++;

			if (genero == 'F')
			{
				gostaramF++;
			}
			else
			{
				gostaramM++;
			}
		}
		else
		{
			naoGostaram++;
		}
	}
	
	percM = (float)gostaramM/contM;	
	percF = (float)gostaramF/contF;

	printf ("\n\n%d pessoas gostaram do produto.", gostaram);
	printf ("\n%d pessoas NAO gostaram do produto.", naoGostaram);
	
	printf ("\n\nPercentual de homens que gostaram: %.1f %%\n", percM*100);
	printf ("Percentual de mulheres que gostaram: %.1f %%\n", percF*100);
	
	if (percF > percM)
	{
		printf ("\nHouve maior aceitacao entre as mulheres!\n");
	}
	else
	{
		if (percM > percF)
		{
			printf ("\nHouve maior aceitacao entre os homens!\n");
		}
		else
		{
			printf ("\nMesma aceitacao entre os generos!\n");
		}
	}
}
