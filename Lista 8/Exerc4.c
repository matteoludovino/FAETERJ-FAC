/*	
	Lista de Exerc�cios VIII (Fun��es):
	
	QUEST�O 04:
	Fazer uma fun��o que calcule o MDC (m�ximo
	divisor comum) entre dois n�meros.
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
