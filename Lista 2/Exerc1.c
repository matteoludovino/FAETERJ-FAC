/*
	Lista de Exerc�cios II:
	
	QUEST�O 01: O IMC (�ndice de Massa Corporal) � um crit�rio 
	da Organiza��o Mundial de Sa�de para dar uma indica��o sobre 
	a condi��o de peso de uma pessoa adulta. A f�rmula �:

						IMC = peso / altura^2

	Elabore um algoritmo que, dados o peso e a altura de um adulto, 
	determine a sua condi��o de acordo com a tabela abaixo:

					IMC em adultos		Condi��o
					IMC < 18,5			Abaixo do peso
					18,5 <= IMC < 25,0	Peso ideal
					25,0 <= IMC < 30,0	Sobrepeso
					30,0 <= IMC < 35,0	Obesidade grau I
					35,0 <= IMC < 40,0	Obesidade grau II
					IMC >= 40,0			Obesidade grau III
*/

#include <stdio.h>

void main ()
{
	float peso, altura, imc;
	
	printf ("Entre com a altura: ");
	scanf ("%f", &altura);
	
	printf ("Entre com o peso: ");
	scanf ("%f", &peso);
	
	imc = peso/(altura*altura);
	
	printf ("\nIMC = %.2f\n", imc);
	
	if (imc < 18.5)
	{
		printf ("Abaixo do peso");
	}	
	else
	{
		if (imc < 25)
		{
			printf ("Peso ideal");
		}
		else
		{
			if (imc < 30)
			{
				printf ("Sobrepeso");
			}
			else
			{
				if (imc < 35)
				{
					printf ("Obesidade grau I");
				}
				else
				{
					if (imc < 40)
					{
						printf ("Obesidade grau II");
					}
					else
					{
						printf ("Obesidade grau III");
					}
				}
			}
		}	
	}
}			
