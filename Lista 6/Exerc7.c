/*	
	Lista de Exercícios VI (Estruturas de Repetição):
	
	QUESTÃO 07: Faça um programa que leia
	150 números reais e, ao final, exiba:
	
	a) A soma dos 50 primeiros;
	b) menor número do 51° ao 100°
	valores fornecidos;
	c) A média entre os últimos 50
	valores.
*/

#include <stdio.h>

void main() {
    float numero, somaPrimeiros50 = 0, menor51a100 = 999999, somaUltimos50 = 0;
    int i;

    for (i = 1; i <= 150; i++) {
        printf("Digite o %d numero: ", i);
        scanf("%f", &numero);

        if (i <= 50) {
            somaPrimeiros50 += numero;
        }

        if (i >= 51 && i <= 100) {
            if (numero < menor51a100) {
                menor51a100 = numero;
            }
        }

        if (i >= 101) {
            somaUltimos50 += numero;
        }
    }

    float mediaUltimos50 = somaUltimos50 / 50;

    printf("\nResultados:\n");
    printf("a) Soma dos 50 primeiros numeros: %.2f\n", somaPrimeiros50);
    printf("b) Menor numero do 51° ao 100°: %.2f\n", menor51a100);
    printf("c) Media dos ultimos 50 numeros: %.2f\n", mediaUltimos50);

    return 0;
}
