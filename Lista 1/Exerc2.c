/*
	Lista de Exercícios I:
	
	QUESTÃO 02:
	Elabore um algoritmo que, dada a idade de um
	nadador, classifique-o em uma das seguintes
	categorias:
	
		Categoria 		Faixa de idade
		infantil A 			0 - 4 anos
		infantil B 			5 - 7 anos
		infantil C 			8-10 anos
		juvenil A 			11-13 anos
		juvenil B 			14-17 anos
		Adulto 			18 anos ou mais
*/

#include <stdio.h>

void main() {
    int idade;

    printf("Digite a idade do nadador: ");
    scanf("%d", &idade);

    if (idade >= 0 && idade <= 4) {
        printf("Categoria: Infantil A\n");
    } else if (idade >= 5 && idade <= 7) {
        printf("Categoria: Infantil B\n");
    } else if (idade >= 8 && idade <= 10) {
        printf("Categoria: Infantil C\n");
    } else if (idade >= 11 && idade <= 13) {
        printf("Categoria: Juvenil A\n");
    } else if (idade >= 14 && idade <= 17) {
        printf("Categoria: Juvenil B\n");
    } else if (idade >= 18) {
        printf("Categoria: Adulto\n");
    } else {
        printf("Idade invalida\n");
    }
}
