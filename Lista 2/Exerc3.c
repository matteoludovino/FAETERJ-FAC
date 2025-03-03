/*
	Lista de Exercícios II:
	
	QUESTÃO 03: As vendas parceladas se tornaram uma ótima opção 
	para os lojistas que, a cada dia, criam novas promoções para 
	tentar conquistar novos clientes. Faça um algoritmo que permita 
	ao lojista informar o preço do produto e receber as seguintes 
	informações:

	a)	O valor com 10% de desconto para pagamento à vista;
	b)	O valor da prestação para parcelamento sem juros, em 5x;
	c)	O valor da prestação para parcelamento com juros, em 10x, 
	    com 20% de acréscimo no valor do produto.
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
