/*	
	Atividade 1:
	
	Pede-se o desenvolvimento de um programa que leia dois valores inteiros no intervalo de 1 a 999. Caso um deles
	não esteja nesta faixa, uma mensagem de erro deverá ser apresentada ao usuário e a execução do programa
	finalizada. Caso contrário, o programa deverá exibir a diferença entre os maiores algarismos dos dois números.
	Exemplo:
		n1 = 281
		n2 = 64
	Resposta: diferença igual a 2, consistindo em 8 (maior algarismo de n1) menos 6 (maior
	algarismo de n2).
*/
#include <stdio.h>
#include <stdlib.h>

int main () {

	int n1, n2, algarismo;
	int maiorN1 = 0, maiorN2 = 0;
	
	//leitura primeiro numero
	printf("Digite o primeiro numero (entre 1 e 999): ");
	scanf("%d", &n1);
	
	//leitura segundo numero
	printf("Digite o segundo numero (entre 1 e 999): ");
	scanf("%d", &n2);
	
	//vendo se o numero é de 1 a 999
	if (n1 < 1 || n1 > 999 || n2 < 1 || n2 > 999) {
		printf("Erro! Os numeros devem estar entre 1 e 999.");
		return 1; //programa é encerrado aqui
	}
	
	//encontrando o maior algarismo do primeiro numero
	do {
		algarismo = n1 % 10; //pega o ultimo digito
		if (algarismo > maiorN1) {
			maiorN1 = algarismo; //atualiza o maior algarismo
		}
		n1 = n1 / 10; //remove o ultimo digito
	} while (n1 > 0);
	
	//encontrando o maior algarismo do segundo numero
	do {
		algarismo = n2 % 10;
		if (algarismo > maiorN2) {
			maiorN2 = algarismo;
		}
		n2 = n2 / 10;
	} while (n2 > 0);
	
	//aqui é calculada a diferença
	int diferenca = abs(maiorN1 - maiorN2);
	
	//resultado
	printf("A diferença do maior algarismo de n1 (%d) e do maior algarismo de n2 (%d) e de: %d", maiorN1, maiorN2, diferenca);
	
	return 0;
}

//Uma nota de agradecimento a vc Leo, além da didática incrível vc é muito legal, professor sensacional!!
