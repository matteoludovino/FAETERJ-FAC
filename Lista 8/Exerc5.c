/*	
	Lista de Exercícios VIII (Funções):
	
	QUESTÃO 05:
	Fazer uma função que calcule o MMC (mínimo
	múltiplo comum) entre dois números.
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

int calcularMMC(int a, int b) {
    return (a * b) / calcularMDC(a, b);
}

void main() {
    int a, b;

    printf("Digite dois numeros inteiros: ");
    scanf("%d %d", &a, &b);

    int mmc = calcularMMC(a, b);
    printf("O MMC de %d e %d e: %d\n", a, b, mmc);
}
