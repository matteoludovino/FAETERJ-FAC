/*
	Lista de Exercícios IV (Estruturas de Repetição):
	
	QUESTÃO 08: Em uma empresa deseja-se fazer um levantamento 
	sobre algumas informações dos seus 250 funcionários. Cada 
	funcionário deverá responder um questionário ao qual informará 
	os seguintes dados: matrícula, gênero, idade, salário e tempo 
	(em anos) de trabalho na empresa. A execução do programa deve 
	exibir os seguintes itens:

	a)	Quantidade de funcionários que ingressaram na empresa 
	    com menos de 21 anos;
	b)	Quantidade de funcionários do gênero feminino;
	c)	Média salarial dos homens;
	d)	Matrícula dos funcionários mais antigo e mais novo.
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
