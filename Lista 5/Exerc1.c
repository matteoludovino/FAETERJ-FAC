/*	
	Lista de Exerc�cios V (Estruturas de Repeti��o):
	
	QUEST�O 01:
	Dado um n�mero inteiro N, fazer um
	programa que exiba os n�meros pares
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
