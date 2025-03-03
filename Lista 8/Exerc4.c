/*	
	Lista de Exercícios VIII (Funções):
	
	QUESTÃO 04:
	Fazer uma função que calcule o MDC (máximo
	divisor comum) entre dois números.
*/

#include <stdio.h>

int calcularMDC(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

void main() {
    int a, b;

    printf("Digite dois numeros inteiros: ");
    scanf("%d %d", &a, &b);

    int mdc = calcularMDC(a, b);
    printf("O MDC de %d e %d e: %d\n", a, b, mdc);
}
