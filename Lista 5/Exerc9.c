/*	
	Lista de Exercícios V (Estruturas de Repetição):
	
	QUESTÃO 09:
	Escrever um programa que encontre o
	quinto número maior que 1000, cuja
	divisão por 11 tenha resto 5.
*/

#include <stdio.h>

void main() {
    int contador = 0, numero = 1001;

    while (contador < 5) {
        if (numero % 11 == 5) {
            contador++;
            if (contador == 5) {
                printf("O quinto numero maior que 1000, cuja divisao por 11 tem resto 5, e: %d\n", numero);
            }
        }
        numero++;
    }
}
