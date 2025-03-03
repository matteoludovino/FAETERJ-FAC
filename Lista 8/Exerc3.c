/*	
	Lista de Exercícios VIII (Funções):
	
	QUESTÃO 03:
	Desenvolver uma função que calcule o n-ésimo
	termo da sequência de Fibonacci.
*/

#include <stdio.h>

int fibonacci(int n) {
    if (n <= 0) return 0;
    if (n == 1) return 1;

    int a = 0, b = 1, c, i;
    for (i = 2; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}

void main() {
    int n;

    printf("Digite o valor de n: ");
    scanf("%d", &n);

    int resultado = fibonacci(n);
    printf("O %d termo da sequencia de Fibonacci e: %d\n", n, resultado);
}
