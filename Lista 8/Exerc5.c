/*	
	Lista de Exerc�cios VIII (Fun��es):
	
	QUEST�O 05:
	Fazer uma fun��o que calcule o MMC (m�nimo
	m�ltiplo comum) entre dois n�meros.
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
