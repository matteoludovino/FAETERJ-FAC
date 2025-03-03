/*	
	Lista de Exerc�cios II:
	
	QUEST�O 02: Escrever um algoritmo que obtenha o peso de 
	uma pessoa na Terra e o n�mero de um planeta. Ao final, 
	com aux�lio da tabela abaixo, calcular o peso desta pessoa 
	no planeta escolhido.

		N�mero		Planeta		Gravidade Relativa g
		1			Merc�rio	0,37
		2			V�nus		0,88
		3			Marte		0,38
		4			J�piter		2,64
		5			Saturno		1,15
		6			Urano		1,17

	Para calcular o peso no planeta escolhido, utilize a seguinte 
	f�rmula:

		pesoPlaneta = (pesoTerra/10) * gravidadePlaneta
*/

#include <stdio.h>

void main ()
{
	float pesoT, pesoP, gravidade;
	int numP;
	
	printf ("Peso na Terra: ");
	scanf ("%f", &pesoT);
	
	printf ("1. Mercurio\n2. Venus\n3. Marte\n");
	printf ("4. Jupiter\n5. Saturno\n6. Urano\n\n");
	
	printf ("Entre com o numero do planeta: ");
	scanf ("%d", &numP);
	
	if (numP == 1)
	{
		gravidade = 0.37;
	}
	else
	{
		if (numP == 2)
		{
			gravidade = 0.88;
		}
		else
		{
			if (numP == 3)
			{
				gravidade = 0.38;
			}
			else
			{
				if (numP == 4)
				{
					gravidade = 2.64;
				}
				else
				{
					if (numP == 5)
					{
						gravidade = 1.15;
					}
					else
					{
						gravidade = 1.17;
					}
				}
			}
		}
	}
	
	pesoP = (pesoT/10) * gravidade;
	
	printf ("\nSeu peso no planeta escolhido: %.1f kg", pesoP);
}

