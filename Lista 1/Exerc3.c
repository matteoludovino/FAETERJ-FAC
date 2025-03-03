/*
	Lista de Exercícios I:
	
	QUESTÃO 03:
	Construir um algoritmo que calcule o peso ideal
	de uma pessoa, de acordo com o seu gênero e
	altura, utilizando as seguintes fórmulas:
	
	- para homens: (72.7*h)-58
	- para mulheres: (62.1*h)-44.7
*/

#include <stdio.h>

void main() {
    float altura, pesoIdeal;
    char genero;

    printf("Digite a altura (em metros): ");
    scanf("%f", &altura);

    printf("Digite o genero (M para masculino, F para feminino): ");
    scanf(" %c", &genero);

    if (genero == 'M' || genero == 'm') {
        pesoIdeal = (72.7 * altura) - 58;
    } else if (genero == 'F' || genero == 'f') {
        pesoIdeal = (62.1 * altura) - 44.7;
    } else {
        printf("Genero invalido\n");
        return 1;
    }

    printf("O peso ideal e: %.2f kg\n", pesoIdeal);
}
