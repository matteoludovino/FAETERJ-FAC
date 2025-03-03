/*
	Lista de Exerc�cios III:
	
	QUEST�O 03:
	Implementar um programa que leia um valor
	inteiro n1. Se este n�o estiver no intervalo de
	100 a 999, uma mensagem deve ser exibida ao
	usu�rio informando que o n�mero � inv�lido e,
	em seguida, a execu��o do programa terminar�.
	Caso o valor esteja no intervalo definido, o
	programa dever� criar um novo valor n2 (e exibi-
	lo ao final) contendo os mesmos algarismos de
	n1, por�m em ordem crescente.
	
	Exemplos:
	n1 		514
	n2 		145
	n1 		929
	n2 		299
	n1 		124
	n2 		124
	
	Nota:
	Como definido no enunciado, n1 consiste em um
	n�mero inteiro positivo, com 3 algarismos. n2
	tamb�m ser� um �nico n�mero!
*/

#include <stdio.h>

void main() {
    int n1, n2;
    int centena, dezena, unidade;

    printf("Digite um numero inteiro de 3 digitos (100 a 999): ");
    scanf("%d", &n1);

    if (n1 < 100 || n1 > 999) {
        printf("Numero invalido! O numero deve estar entre 100 e 999.\n");
        return 1;
    }

    centena = n1 / 100;
    dezena = (n1 / 10) % 10;
    unidade = n1 % 10;

    if (centena > dezena) {
        int temp = centena;
        centena = dezena;
        dezena = temp;
    }
    if (dezena > unidade) {
        int temp = dezena;
        dezena = unidade;
        unidade = temp;
    }
    if (centena > dezena) {
        int temp = centena;
        centena = dezena;
        dezena = temp;
    }

    n2 = centena * 100 + dezena * 10 + unidade;

    printf("O numero com os algarismos em ordem crescente e: %d\n", n2);
}
