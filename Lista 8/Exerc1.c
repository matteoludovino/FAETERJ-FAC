/*	
	Lista de Exerc�cios VIII (Fun��es):
	
	QUEST�O 01:
	Desenvolver uma fun��o que exiba os m�ltiplos
	de N compreendidos no intervalo definido por
	A e B.
*/

#include <stdio.h>

void exibirMultiplos(int N, int A, int B) {
	int i;
    printf("Multiplos de %d no intervalo [%d, %d]:\n", N, A, B);
    for (i = A; i <= B; i++) {
        if (i % N == 0) {
            printf("%d\n", i);
        }
    }
}

void main() {
    int N, A, B;

    printf("Digite o valor de N: ");
    scanf("%d", &N);

    printf("Digite o valor de A: ");
    scanf("%d", &A);

    printf("Digite o valor de B: ");
    scanf("%d", &B);

    exibirMultiplos(N, A, B);
}
