/*
	Lista de Exerc�cios I:
	
	QUEST�O 07:
	Escreva um algoritmo para calcular o sal�rio
	semanal de uma pessoa, determinado pelas
	condi��es que seguem: se o n�mero de horas
	trabalhado for inferior ou igual a 40, a pessoa
	recebe x reais por hora; caso contr�rio, a
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
