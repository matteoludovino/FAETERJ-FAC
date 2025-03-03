/*	
	Lista de Exerc�cios V (Estruturas de Repeti��o):
	
	QUEST�O 10:
	Foi feita uma pesquisa entre os habitantes
	de uma regi�o e coletados os dados de
	altura e g�nero das pessoas. Fa�a um
	programa que leia as informa��es de 50
	pessoas e informe:
		- a maior e a menor alturas
		encontradas;
		- a m�dia de altura das mulheres;
		- a m�dia de altura da popula��o;
		- o percentual de homens na
		popula��o.
*/

#include <stdio.h>

void main() {
    float altura, maiorAltura = 0, menorAltura = 999, somaAlturas = 0, somaAturasMulheres = 0;
    int totalMulheres = 0, totalHomens = 0, i;
    char genero;

    for (i = 1; i <= 50; i++) {
        printf("Pessoa %d:\n", i);
        printf("Digite a altura (em metros): ");
        scanf("%f", &altura);
        printf("Digite o genero (M/F): ");
        scanf(" %c", &genero);

        if (altura > maiorAltura) {
            maiorAltura = altura;
        }
        if (altura < menorAltura) {
            menorAltura = altura;
        }

        if (genero == 'F' || genero == 'f') {
            somaAturasMulheres += altura;
            totalMulheres++;
        }

        somaAlturas += altura;

        if (genero == 'M' || genero == 'm') {
            totalHomens++;
        }
    }

    printf("\nResultados da pesquisa:\n");
    printf("Maior altura: %.2f metros\n", maiorAltura);
    printf("Menor altura: %.2f metros\n", menorAltura);
    printf("Media de altura das mulheres: %.2f metros\n", somaAturasMulheres / totalMulheres);
    printf("Media de altura da populacao: %.2f metros\n", somaAlturas / 50);
    printf("Percentual de homens na populacao: %.2f%%\n", (totalHomens / 50.0) * 100);
}
