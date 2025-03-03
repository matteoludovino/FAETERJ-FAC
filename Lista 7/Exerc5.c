/*
	Lista de Exercícios VII (Estruturas de Repetição):
	
	QUESTÃO 05: Uma pesquisa foi feita coletando informações (idade, 
	altura e peso) de um grupo de pessoas.
	Pede-se a implementação de um programa que proceda com a leitura 
	de tais informações (até que o usuário opte por concluir a 
	entrada de dados) e calcule:
 	
		- A quantidade de pessoas com idade superior a 50 anos;
 		- A média de altura das pessoas com mais de 80 kg;
 		- O maior peso dentre as pessoas acima de 1.65 m de 
		  altura e com idade inferior a 30 anos.
*/

#include <stdio.h>

void main ()
{
	int idade, cont50 = 0, quant80 = 0;
	float altura, peso, somaAltura80 = 0, mediaAltura80, maiorPeso = 0;
	char opcao;
	
	do
	{
		printf ("Idade: ");
		scanf ("%d", &idade);
		
		printf ("Altura: ");
		scanf ("%f", &altura);
		
		printf ("Peso: ");
		scanf ("%f", &peso);
		
		if (idade > 50)
		{
			cont50++;
		}
		
		if (peso > 80)
		{
			somaAltura80 += altura;
			quant80++;
		}

		if ((altura > 1.65) && (idade < 30))
		{
			if (peso > maiorPeso)
			{
				maiorPeso = peso;
			}
		}
		
		printf ("\n\nDeseja continuar [S/N]? ");
		fflush (stdin);
		scanf ("%c", &opcao);
		opcao = toupper (opcao);
	}
	while (opcao == 'S');
	
	mediaAltura80 = somaAltura80/quant80;
	
	printf ("\n\nNumero de pessoas com mais de 50 anos: %d\n", cont50);
	printf ("\nMedia de altura das pessoas com mais de 80 kg: %.2f\n", mediaAltura80);
	printf ("\nMaior peso dentre pessoas com mais de 1.65 e menos de 30 anos: %.2f kg\n", maiorPeso);
}
