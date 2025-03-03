/*	
	Lista de Exercícios V (Estruturas de Repetição):
	
	QUESTÃO 03:
	Fazer um programa que exiba todos os
	divisores de um número fornecido pelo
	usuário.
*/

#include <stdio.h>

void main() {
    int numero, i;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    printf("Divisores de %d:\n", numero);

    for (i = 1; i <= numero; i++) {
        if (numero % i == 0) {
            printf("%d\n", i);
        }
    }
}
