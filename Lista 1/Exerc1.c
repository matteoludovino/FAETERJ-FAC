/*
	Lista de Exerc�cios I:
	
	QUEST�O 01:
	O custo ao consumidor de um carro novo � a
	soma do custo de f�brica com a porcentagem
	do distribuidor e dos impostos (aplicados ao
	custo de f�brica). Desenvolver um algoritmo
	que calcule o custo ao consumidor de
	determinado carro.
*/

#include <stdio.h>

void main() {
    float custoFabrica, porcento, impostos, custoConsumidor;

    printf("Digite o custo de fabrica do carro: ");
    scanf("%f", &custoFabrica);

    printf("Digite a porcentagem do distribuidor (em decimal): ");
    scanf("%f", &porcento);

    printf("Digite a porcentagem de impostos (em decimal): ");
    scanf("%f", &impostos);

    custoConsumidor = custoFabrica + (custoFabrica * porcento) + (custoFabrica * impostos);

    printf("O custo ao consumidor e: R$ %.2f\n", custoConsumidor);
}
