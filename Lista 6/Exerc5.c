/*
	Lista de Exerc�cios VI (Estruturas de Repeti��o):
	
	QUEST�O 05: Elabore um programa que calcule a m�dia ponderada de n elementos.

	Observa��o: na m�dia ponderada, cada elemento possui um peso que representa a sua contribui��o no 
	c�lculo da m�dia final.
	
	Exemplo:
		
		n = 4
		
			v1:	5	p1: 2
			v2: 7	p2: 1
			v3: 3	p3: 4
			v4: 2	p4: 1
			
			MP = ((5*2) + (7*1) + (3*4) + (2*1))/(2+1+4+1)
			MP = (10+7+12+2)/8
			MP = 31/8 = 3,875
*/

#include <stdio.h>

void main ()
{
	int n, i;
	float valor, peso, media, num = 0, den;
	
	printf ("Quantidade de valores: ");
	scanf ("%d", &n);
	
	for (i=1;i<=n;i++)
	{
		printf ("Valor: ");
		scanf ("%f", &valor);
		
		printf ("Peso: ");
		scanf ("%f", &peso);
		
		num += valor*peso;
		
		den += peso;
	}
	
	media = num/den;
	
	printf ("\n\nMedia = %.2f", media);
}
