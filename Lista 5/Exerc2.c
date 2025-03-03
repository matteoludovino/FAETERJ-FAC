/*	
	Lista de Exercícios V (Estruturas de Repetição):
	
	QUESTÃO 02:
	Desenvolver um programa que calcule a
	soma dos números de 1 a N, sendo N um
	número inteiro fornecido pelo usuário.
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
