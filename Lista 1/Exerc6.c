/*
	Lista de Exercícios I:
	
	QUESTÃO 06:
	Fazer um algoritmo que determine a ordem de
	uma data (dia e mês) no ano.
	Exemplos:
	
	01/01 - 1o dia do ano
	03/02 - 34o dia do ano
*/

#include <stdio.h>

void main() {
    int dia, mes, diaAno;

    printf("Digite o dia: ");
    scanf("%d", &dia);

    printf("Digite o mes: ");
    scanf("%d", &mes);

    if (mes == 1) {
        diaAno = dia;
    } else if (mes == 2) {
        diaAno = 31 + dia;
    } else if (mes == 3) {
        diaAno = 59 + dia;
    } else if (mes == 4) {
        diaAno = 90 + dia;
    } else if (mes == 5) {
        diaAno = 120 + dia;
    } else if (mes == 6) {
        diaAno = 151 + dia;
    } else if (mes == 7) {
        diaAno = 181 + dia;
    } else if (mes == 8) {
        diaAno = 212 + dia;
    } else if (mes == 9) {
        diaAno = 243 + dia;
    } else if (mes == 10) {
        diaAno = 273 + dia;
    } else if (mes == 11) {
        diaAno = 304 + dia;
    } else if (mes == 12) {
        diaAno = 334 + dia;
    } else {
        printf("Mes invalido\n");
        return 1;
    }

    printf("O dia %d/%d e o %d dia do ano.\n", dia, mes, diaAno);
}
