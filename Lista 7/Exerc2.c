/*
	Lista de Exerc�cios VII (Estruturas de Repeti��o):
	
	QUEST�O 02: Um fazendeiro realizou um tratamento sobre sua 
	planta��o de caf� que gerou um crescimento constante de C % em 
	sua produ��o, por ano. Considerando que atualmente sua produ��o 
	anual seja de M u.p., implementar um programa que determine a 
	quantidade de anos necess�ria para que a produ��o duplique.
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
