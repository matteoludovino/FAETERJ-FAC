/*	
	Lista de Exerc�cios V (Estruturas de Repeti��o):
	
	QUEST�O 03:
	Fazer um programa que exiba todos os
	divisores de um n�mero fornecido pelo
	usu�rio.
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
