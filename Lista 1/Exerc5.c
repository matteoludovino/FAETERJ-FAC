/*
	Lista de Exercícios I:
	
	QUESTÃO 05:
	Escrever um algoritmo que, dada uma quantia
	em reais, calcule o menor número possível de
	notas/moedas (100, 50, 20, 10, 5, 2 e 1) em que
	o valor pode ser decomposto.
*/

#include <stdio.h>

void main() {
    int valor, notas100, notas50, notas20, notas10, notas5, notas2, notas1;

    printf("Digite a quantia em reais: ");
    scanf("%d", &valor);

    notas100 = valor / 100;
    valor = valor % 100;

    notas50 = valor / 50;
    valor = valor % 50;

    notas20 = valor / 20;
    valor = valor % 20;

    notas10 = valor / 10;
    valor = valor % 10;

    notas5 = valor / 5;
    valor = valor % 5;

    notas2 = valor / 2;
    valor = valor % 2;

    notas1 = valor;

    printf("Notas de 100: %d\n", notas100);
    printf("Notas de 50: %d\n", notas50);
    printf("Notas de 20: %d\n", notas20);
    printf("Notas de 10: %d\n", notas10);
    printf("Notas de 5: %d\n", notas5);
    printf("Notas de 2: %d\n", notas2);
    printf("Notas de 1: %d\n", notas1);
}
