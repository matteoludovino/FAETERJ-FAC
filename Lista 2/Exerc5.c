/*
	Lista de Exercícios II:
	
	QUESTÃO 05: O cardápio de uma lanchonete é o seguinte: 

			Especificação	Código	Preço
			Cachorro quente	100	3,50
			Bauru simples	101	4,50
			Bauru com ovo	102	5,20
			Hamburger		103	3,00
			Cheeseburger	104	4,00
			Refrigerante	105	2,50

	Escrever um algoritmo que obtenha o código do item pedido, a 
	quantidade e calcule o valor a ser pago. 
	Considere que, a cada execução do algoritmo, somente será 
	calculado o valor relacionado a um item.
*/

#include <stdio.h>

void main ()
{
	int codigo, quantidade;
	float valorTotal;

	printf ("\nEspecificacao\tCodigo\n");
	printf ("Cachorro quente\t100\n");
	printf ("Bauru simples\t101\n");
	printf ("Bauru com ovo\t102\n");
	printf ("Hamburger\t103\n");
	printf ("Cheeseburger\t104\n");
	printf ("Refrigerante\t105\n\n");
	
	printf ("Entre com o codigo: ");
	scanf ("%d", &codigo);
	
	printf ("Entre com a quantidade: ");
	scanf ("%d", &quantidade);
	
	if (codigo == 100)
	{
		valorTotal = 3.50 * quantidade;
	}
	else
	{
		if (codigo == 101)
		{
			valorTotal = 4.50 * quantidade;
		}
		else
		{
			if (codigo == 102)
			{
				valorTotal = 5.20 * quantidade;
			}	
			else
			{
				if (codigo == 103)
				{
					valorTotal = 3.00 * quantidade;
				}	
				else
				{
					if (codigo == 104)
					{
						valorTotal = 4.00 * quantidade;
					}
					else
					{
						valorTotal = 2.50 * quantidade;
					}
				}
			}
		}	
	}	
	
	printf ("\nTotal da compra: R$ %.2f", valorTotal);
}
