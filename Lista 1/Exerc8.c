/*
	Lista de Exercícios I:
	
	QUESTÃO 08:
	Faça um algoritmo para calcular a conta final de
	um hóspede de um hotel, considerando que:
	
	a) Devem ser obtidos o nome do hóspede, o
	tipo do apartamento utilizado (A, B, C ou D),
	o número de diárias utilizadas pelo hóspede
	e o valor do consumo interno do hóspede;
	b) O valor da diária é determinado pela
	seguinte tabela:
	
	Tipo de Apartamento 		Valor da diária
			A 						R$ 350,00
			B 						R$ 275,00
			C 						R$ 200,00
			D 						R$ 150,00
	
	c) O valor da taxa de serviço equivale a
	10% da conta.
	
	A conta a ser apresentada ao cliente deve
	conter: o nome do hóspede, o tipo do
	apartamento, o valor total das diárias, o
	valor do consumo interno, o subtotal, o
	valor da taxa de serviço e o total geral.
*/

#include <stdio.h>

void main() {
    char nome[50], tipoApt;
    int numDiarias;
    float consumoInterno, valorDiaria, subtotal, taxaServico, totalGeral;

    printf("Digite o nome do hospede: ");
    scanf("%s", nome);

    printf("Digite o tipo do apartamento (A, B, C ou D): ");
    scanf(" %c", &tipoApt);

    printf("Digite o numero de diarias: ");
    scanf("%d", &numDiarias);

    printf("Digite o valor do consumo interno: ");
    scanf("%f", &consumoInterno);

    if (tipoApt == 'A' || tipoApt == 'a') {
        valorDiaria = 350.00;
    } else if (tipoApt == 'B' || tipoApt == 'b') {
        valorDiaria = 275.00;
    } else if (tipoApt == 'C' || tipoApt == 'c') {
        valorDiaria = 200.00;
    } else if (tipoApt == 'D' || tipoApt == 'd') {
        valorDiaria = 150.00;
    } else {
        printf("Tipo de apartamento invalido\n");
        return 1;
    }

    subtotal = (valorDiaria * numDiarias) + consumoInterno;
    taxaServico = subtotal * 0.10;
    totalGeral = subtotal + taxaServico;

    printf("\nNome do hospede: %s\n", nome);
    printf("Tipo de apartamento: %c\n", tipoApt);
    printf("Valor total das diarias: R$ %.2f\n", valorDiaria * numDiarias);
    printf("Valor do consumo interno: R$ %.2f\n", consumoInterno);
    printf("Subtotal: R$ %.2f\n", subtotal);
    printf("Taxa de servico: R$ %.2f\n", taxaServico);
    printf("Total geral: R$ %.2f\n", totalGeral);
}
