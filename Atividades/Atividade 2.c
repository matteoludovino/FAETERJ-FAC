/*	
	Atividade 2:
	
	Desenvolver um programa que, dados dois n�meros inteiros (fornecidos pelo usu�rio), exiba os n�meros
	compreendidos entre a e b, por�m �pulando� alguns dos valores do intervalo, e, ao final, apresente a quantidade de
	elementos exibidos, conforme os exemplos abaixo:
	
	Exemplo 1:
	a = 10
	b = 30
	
	N�meros exibidos:
	10, 11, 13, 16, 20, 25
	
	Al�m de exibir os valores acima, o programa deve apresentar, nesse caso, o n�mero 6 (pois 6 valores foram
	exibidos).
	
	Exemplo 2:
	a = 1
	b = 40
	
	N�meros exibidos:
	1, 2, 4, 7, 11, 16, 22, 29, 37
	
	Al�m de exibir os valores acima, o programa deve apresentar, nesse caso, o n�mero 9 (pois 9 valores foram
	exibidos).
	
	Nota: observem que o primeiro valor exibido consiste em a. O pr�ximo, ser� o valor anterior acrescido de 1 unidade; o
	seguinte consistir� no �ltimo acrescido de duas unidades e, assim, sucessivamente. A sequ�ncia terminar� de forma que
	nenhum n�mero superior a b seja exibido.
*/

#include <stdio.h>

void main () 
{
    int a, b, valorAtual, contador = 0, incremento = 1;
    
    printf("Digite o valor de a: ");
    scanf("%d", &a);
    
    printf("Digite o valor de b: ");
    scanf("%d", &b);
    
    printf("Numeros exibidos: ");

    for (valorAtual = a; valorAtual <= b;) {
    	
        printf("%d ", valorAtual);
        contador++;
        valorAtual += incremento;
        incremento++;
    }

    printf("\n\nQuantidade de numeros exibidos: %d\n", contador);
}
