/*
	Lista de Exercícios I:
	
	QUESTÃO 07:
	Escreva um algoritmo para calcular o salário
	semanal de uma pessoa, determinado pelas
	condições que seguem: se o número de horas
	trabalhado for inferior ou igual a 40, a pessoa
	recebe x reais por hora; caso contrário, a
	pessoa recebe um adicional de 50% para cada
	hora trabalhada acima das 40 iniciais.
*/

#include <stdio.h>

void main() {
    float horasTrab, valorHora, salario;

    printf("Digite o numero de horas trabalhadas: ");
    scanf("%f", &horasTrab);

    printf("Digite o valor da hora de trabalho: ");
    scanf("%f", &valorHora);

    if (horasTrab <= 40) {
        salario = horasTrab * valorHora;
    } else {
        salario = 40 * valorHora + (horasTrab - 40) * valorHora * 1.5;
    }

    printf("O salario semanal e: R$ %.2f\n", salario);
}
