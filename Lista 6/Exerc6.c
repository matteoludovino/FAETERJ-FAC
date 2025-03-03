/*	
	Lista de Exercícios VI (Estruturas de Repetição):
	
	QUESTÃO 06: Faça um programa que leia
	200 números inteiros. Ao final, exibir:
	
	a) O maior número fornecido, de
	ordem par (isto é, o maior dentre o
	segundo, quarto, sexto, oitavo, etc
	valores fornecidos).
	
	b) A média dos valores pares.
*/

#include <stdio.h>

void main() {
    int numero, maiorPar = -999999, somaPares = 0, countPares = 0;
    int i;

    for (i = 1; i <= 200; i++) {
        printf("Digite o %d numero: ", i);
        scanf("%d", &numero);

        if (i % 2 == 0) {
            if (numero > maiorPar) {
                maiorPar = numero;
            }
        }

        if (numero % 2 == 0) {
            somaPares += numero;
            countPares++;
        }
    }

    float mediaPares = (float)somaPares / countPares;

    printf("\nResultados:\n");
    printf("a) Maior numero de ordem par: %d\n", maiorPar);
    printf("b) Media dos valores pares: %.2f\n", mediaPares);
}
