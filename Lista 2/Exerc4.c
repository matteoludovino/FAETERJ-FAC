/*
	Lista de Exerc�cios II:
	
	QUEST�O 04: Desenvolva um algoritmo que calcule o consumo de 
	combust�vel de um autom�vel em determinada viagem. Para isso, 
	devem ser obtidos: 
		i) o percurso (em quil�metros) da viagem; 
		ii) o n�mero de quil�metros que o carro percorre com um 
		    litro de combust�vel (km/l); e 
		iii) o pre�o do litro do combust�vel. 

	Ao final, o algoritmo deve determinar:
	- A quantidade de combust�vel, em litros, consumida durante a 
	  viagem;
	- O custo total de combust�vel.
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
