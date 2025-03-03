/*	
	Lista de Exercícios V (Estruturas de Repetição):
	
	QUESTÃO 01:
	Dado um número inteiro N, fazer um
	programa que exiba os números pares
	iguais ou inferiores a N.
*/

#include <stdio.h>

void main() {
    int N, i;

    printf("Digite um numero inteiro N: ");
    scanf("%d", &N);

    printf("Numeros pares ate %d:\n", N);

    for (i = 2; i <= N; i += 2) {
        printf("%d\n", i);
    }
}
