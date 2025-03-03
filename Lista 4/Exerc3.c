/*
	Lista de Exerc�cios IV (Estruturas de Repeti��o):
	
	QUEST�O 03: Jo�ozinho investiu Q reais em uma aplica��o com rendimento fixo de R% ao m�s. Pede-se a 
	implementa��o de um programa que calcule o valor (e exiba-o) dispon�vel na conta de Jo�ozinho ap�s A 
	anos de investimento.
	
	Exemplo:
			Q: 1000,00
			R: 2%
			A: 3 anos
			
			1000 ==> 1020 ==> 1040,40
*/

#include <stdio.h>

void main ()
{
	float quantia, rendimento, valorRendimento;
	int anos, meses, i;
	
	printf ("Quantia investida: ");
	scanf ("%f", &quantia);
	
	printf ("Rendimento mensal: ");
	scanf ("%f", &rendimento);
	
	printf ("Tempo de aplicacao: ");
	scanf ("%d", &anos);
	meses = anos*12;
	
	for (i=1;i<=meses;i++)
	{
		valorRendimento = (rendimento/100)*quantia;
		
		quantia = quantia + valorRendimento;
	}
	
	printf ("\n\nValor acumulado: R$ %.2f", quantia);
}
