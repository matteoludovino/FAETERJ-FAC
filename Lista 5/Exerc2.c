/*	
	Lista de Exerc�cios V (Estruturas de Repeti��o):
	
	QUEST�O 02:
	Desenvolver um programa que calcule a
	soma dos n�meros de 1 a N, sendo N um
	n�mero inteiro fornecido pelo usu�rio.
*/

#include <stdio.h>

void main() {
    int N, soma = 0, i;

    printf("Digite um numero inteiro N: ");
    scanf("%d", &N);

    for (i = 1; i <= N; i++) {
        soma += i;
    }

    printf("A soma dos numeros de 1 a %d e: %d\n", N, soma);
}
