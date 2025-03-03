/*
	Lista de Exercícios I:
	
	QUESTÃO 04:
	Um banco concederá um crédito especial aos
	seus clientes, variável com o saldo médio no
	último ano. Faça um algoritmo que calcule o
	valor do crédito de acordo com a tabela abaixo.
	
	Saldo Médio 						Percentual
	Inferior a R$ 1000,00 				nenhum crédito
	De R$ 1000,00 a R$ 1499,99 			20% do saldo médio
	De R$ 1500,00 a R$ 2499,99 			30% do saldo médio
	R$ 2500,00 ou mais 					40% do saldo médio
*/

#include <stdio.h>

void main() {
    float saldoMedio, credito;

    printf("Digite o saldo medio do ultimo ano: ");
    scanf("%f", &saldoMedio);

    if (saldoMedio < 1000) {
        credito = 0;
    } else if (saldoMedio >= 1000 && saldoMedio <= 1499.99) {
        credito = saldoMedio * 0.20;
    } else if (saldoMedio >= 1500 && saldoMedio <= 2499.99) {
        credito = saldoMedio * 0.30;
    } else if (saldoMedio >= 2500) {
        credito = saldoMedio * 0.40;
    }

    printf("O valor do credito e: R$ %.2f\n", credito);
}
