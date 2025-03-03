/*
	Lista de Exercícios IX (Funções):
	
	QUESTÃO 05:
	Fazer uma função que exiba a tabuada de potências de um número 
	n, no intervalo de 1 a 9. Se o número não estiver neste 
	intervalo, o código 0 deve ser retornado; caso contrário, 
	retorna-se 1.

	Para ilustrar, abaixo é apresentada como a tabuada de 
	potências de 2 deveria ser exibida:

							2^0 = 1
							2^1 = 2
							2^2 = 4
							2^3 = 8
							2^4 = 16
							2^5 = 32
							2^6 = 64
							2^7 = 128
							2^8 = 256
							2^9 = 512
*/

#include <stdio.h> 
#include <float.h>

int tabuadaPotencia (int n);

void main ()
{
	int valor, resposta;
	
	printf ("Numero: ");
	scanf ("%d", &valor);
	
	resposta = tabuadaPotencia (valor);
	
	if (resposta == 0)
	{
		printf ("\n\nValor invalido! Deveria estar no intervalo de 0 a 9!");
	}
}

int tabuadaPotencia (int n)
{
	int i, resultado = 1;

	if ((n>=1) && (n<=9))
	{
		for (i=0;i<=9;i++)
		{
			printf ("%d ^ %d = %d\n", n, i, resultado);
	
			resultado *= n;
		}
		
		return 1;
	}
	else
	{
		return 0;
	}
}
