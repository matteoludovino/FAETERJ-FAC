/*	
	Lista de Exercícios V (Estruturas de Repetição):
	
	QUESTÃO 07:
	Desenvolver um programa no qual o
	usuário entre com vários números inteiros
	e positivos e imprima o produto dos
	números ímpares e a soma dos números
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
