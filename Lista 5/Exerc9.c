/*	
	Lista de Exerc�cios V (Estruturas de Repeti��o):
	
	QUEST�O 09:
	Escrever um programa que encontre o
	quinto n�mero maior que 1000, cuja
	divis�o por 11 tenha resto 5.
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
