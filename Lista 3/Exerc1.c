/*
	Lista de Exercícios III:
	
	QUESTÃO 01:
	Faça um programa que, dadas duas datas (cada
	qual com dia, mês e ano) fornecidas pelo
	usuário, determine qual delas é a mais recente.
*/

#include <stdio.h>

void main() {
    int dia1, mes1, ano1, dia2, mes2, ano2;

    printf("Digite a primeira data (dia mes ano): ");
    scanf("%d %d %d", &dia1, &mes1, &ano1);

    printf("Digite a segunda data (dia mes ano): ");
    scanf("%d %d %d", &dia2, &mes2, &ano2);

    if (ano1 > ano2) {
        printf("A primeira data (%02d/%02d/%04d) e mais recente.\n", dia1, mes1, ano1);
    } else if (ano1 < ano2) {
        printf("A segunda data (%02d/%02d/%04d) e mais recente.\n", dia2, mes2, ano2);
    } else {
        if (mes1 > mes2) {
            printf("A primeira data (%02d/%02d/%04d) e mais recente.\n", dia1, mes1, ano1);
        } else if (mes1 < mes2) {
            printf("A segunda data (%02d/%02d/%04d) e mais recente.\n", dia2, mes2, ano2);
        } else {
            if (dia1 > dia2) {
                printf("A primeira data (%02d/%02d/%04d) e mais recente.\n", dia1, mes1, ano1);
            } else if (dia1 < dia2) {
                printf("A segunda data (%02d/%02d/%04d) e mais recente.\n", dia2, mes2, ano2);
            } else {
                printf("As duas datas são iguais: %02d/%02d/%04d.\n", dia1, mes1, ano1);
            }
        }
    }
}
