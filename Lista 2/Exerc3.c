/*
	Lista de Exerc�cios II:
	
	QUEST�O 03: As vendas parceladas se tornaram uma �tima op��o 
	para os lojistas que, a cada dia, criam novas promo��es para 
	tentar conquistar novos clientes. Fa�a um algoritmo que permita 
	ao lojista informar o pre�o do produto e receber as seguintes 
	informa��es:

	a)	O valor com 10% de desconto para pagamento � vista;
	b)	O valor da presta��o para parcelamento sem juros, em 5x;
	c)	O valor da presta��o para parcelamento com juros, em 10x, 
	    com 20% de acr�scimo no valor do produto.
*/

#include <stdio.h>

void main ()
{
	float preco, aVista, valor5x, valor10x;
	
	printf ("Insira o valor: ");
	scanf ("%f", &preco);
	
	aVista = preco*0.9;
	
	valor5x = preco/5;
	
	valor10x = (1.20*preco)/10;
	
	printf ("\nValor a vista: %.2f\n", aVista);
	printf ("Parcelamento sem juros: 5 x %.2f\n", valor5x);
	printf ("Parcelamento com juros: 10 x %.2f\n", valor10x);
}
