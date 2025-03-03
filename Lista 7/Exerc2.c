/*
	Lista de Exercícios VII (Estruturas de Repetição):
	
	QUESTÃO 02: Um fazendeiro realizou um tratamento sobre sua 
	plantação de café que gerou um crescimento constante de C % em 
	sua produção, por ano. Considerando que atualmente sua produção 
	anual seja de M u.p., implementar um programa que determine a 
	quantidade de anos necessária para que a produção duplique.
*/

#include <stdio.h>

void main ()
{
	float producao, producaoInicial, taxa;
	int anos = 0;
		
	printf ("Producao inicial: ");
	scanf ("%f", &producaoInicial);
	
	printf ("Taxa de crescimento anual: ");
	scanf ("%f", &taxa);
	
	producao = producaoInicial;
	
	while (producao < 2*producaoInicial)
	{
		producao = producao + (taxa/100)*producao;
		
		anos++;
		
		printf ("\nAno %d: producao = %.2f\n", anos, producao);
	}
	
	printf ("\n\nQuantidade de anos para dobrar a producao: %d\n", anos);
}
