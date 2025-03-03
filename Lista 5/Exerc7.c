/*	
	Lista de Exerc�cios V (Estruturas de Repeti��o):
	
	QUEST�O 07:
	Desenvolver um programa no qual o
	usu�rio entre com v�rios n�meros inteiros
	e positivos e imprima o produto dos
	n�meros �mpares e a soma dos n�meros
	pares.
*/

#include <stdio.h>

void main() {
    int numero, produtosImpares = 1, somaPares = 0;
    char continuar;

    do {
        printf("Digite um numero inteiro positivo: ");
        scanf("%d", &numero);

        if (numero % 2 == 0) {
            somaPares += numero;
        } else {
            produtosImpares *= numero;
        }

        printf("Deseja continuar? (S/N): ");
        scanf(" %c", &continuar);
    } while (continuar == 'S' || continuar == 's');

    printf("Produto dos numeros impares: %d\n", produtosImpares);
    printf("Soma dos numeros pares: %d\n", somaPares);
}
