/*
	Lista de Exerc�cios IV (Estruturas de Repeti��o):
	
	QUEST�O 08: Em uma empresa deseja-se fazer um levantamento 
	sobre algumas informa��es dos seus 250 funcion�rios. Cada 
	funcion�rio dever� responder um question�rio ao qual informar� 
	os seguintes dados: matr�cula, g�nero, idade, sal�rio e tempo 
	(em anos) de trabalho na empresa. A execu��o do programa deve 
	exibir os seguintes itens:

	a)	Quantidade de funcion�rios que ingressaram na empresa 
	    com menos de 21 anos;
	b)	Quantidade de funcion�rios do g�nero feminino;
	c)	M�dia salarial dos homens;
	d)	Matr�cula dos funcion�rios mais antigo e mais novo.
*/

#include <stdio.h>

#define QUANT 4

void main ()
{
	int i, matricula, idade, tempo, cont21 = 0, contF = 0, 
	    contM = 0, maiorTempo = 0, matMaiorTempo, menorTempo = 100, matMenorTempo;	
	char genero;
	float salario, somaSalarioM = 0, mediaSalarioM;

	for (i=1;i<=QUANT;i++)
	{
		printf ("\nMatricula: ");
		scanf ("%d", &matricula);
		
		printf ("Genero: ");
		fflush (stdin);
		scanf ("%c", &genero);
		genero = toupper (genero);
		
		printf ("Idade: ");
		scanf ("%d", &idade);
		
		printf ("Salario: ");
		scanf ("%f", &salario);
		
		printf ("Tempo na empresa: ");
		scanf ("%d", &tempo);
		
		if (idade - tempo < 21)
		{
			cont21++;
		}
		
		if (genero == 'F')
		{
			contF++;
		}
		else
		{
			somaSalarioM += salario; 
			contM++;
		}

		if (tempo > maiorTempo)
		{
			maiorTempo = tempo;
			matMaiorTempo = matricula;
		}
		
		if (tempo < menorTempo)
		{
			menorTempo = tempo;
			matMenorTempo = matricula;
		}
	}
	
	mediaSalarioM = somaSalarioM/contM;

	printf ("\n\n%d pessoas ingressaram com menos de 21 anos.", cont21);
	printf ("\nHa %d mulheres na empresa.", contF);
	printf ("\nMedia salarial dos homens: R$ %.2f.", mediaSalarioM);
	printf ("\nMatricula do funcionario mais antigo: %d (%d anos).", matMaiorTempo, maiorTempo);
	printf ("\nMatricula do funcionario mais novo: %d (%d anos).", matMenorTempo, menorTempo);
}
