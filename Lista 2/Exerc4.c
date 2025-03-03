/*
	Lista de Exercícios II:
	
	QUESTÃO 04: Desenvolva um algoritmo que calcule o consumo de 
	combustível de um automóvel em determinada viagem. Para isso, 
	devem ser obtidos: 
		i) o percurso (em quilômetros) da viagem; 
		ii) o número de quilômetros que o carro percorre com um 
		    litro de combustível (km/l); e 
		iii) o preço do litro do combustível. 

	Ao final, o algoritmo deve determinar:
	- A quantidade de combustível, em litros, consumida durante a 
	  viagem;
	- O custo total de combustível.
*/

#include <stdio.h>

void main ()
{
	float percurso, kml, precoLitro, totalComb, precoFinal;
	
	printf ("Percurso: ");
	scanf ("%f", &percurso);
	
	printf ("Km/l: ");
	scanf ("%f", &kml);
	
	printf ("Preco do litro do combustivel: ");
	scanf ("%f", &precoLitro);
	
	totalComb = percurso/kml;
	
	precoFinal = totalComb*precoLitro;
	
	printf ("\n\nQuantidade de combustivel: %.2f", totalComb);
	printf ("\nCusto da viagem: R$ %.2f", precoFinal);
}
