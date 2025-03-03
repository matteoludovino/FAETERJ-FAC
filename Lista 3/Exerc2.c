/*
	Lista de Exercícios III:
	
	QUESTÃO 02:
	Construir um programa que permita ao usuário
	calcular a área de uma figura geométrica. Para
	isto, o usuário deverá escolher a figura desejada
	([C]írculo, [R]etângulo, [Q]uadrado ou
	[T]riângulo) e fornecer as informações
	necessárias para que a área desta figura possa
	ser calculada.
	
		Notas:
	1. Fórmulas para o cálculo das áreas:
	a. Acírculo = p.raio2, onde p = 3.14159;	
	b. Aretângulo = base.altura;
	c. Aquadrado = lado2;
	d. Atriângulo = (base.altura)/2.
	
	2. Caso o usuário escolha uma opção inválida,
	uma mensagem de erro deve ser exibida e a
	execução do programa terminada.
*/

#include <stdio.h>

void main() {
    char figura;
    float area, base, altura, raio, lado;

    printf("Escolha a figura geometrica ([C]irculo, [R]etangulo, [Q]uadrado, [T]riangulo): ");
    scanf(" %c", &figura);

    if (figura == 'C' || figura == 'c') {
        printf("Digite o raio do circulo: ");
        scanf("%f", &raio);
        area = 3.14159 * raio * raio;
        printf("A area do circulo e: %.2f\n", area);
    } else if (figura == 'R' || figura == 'r') {
        printf("Digite a base e a altura do retangulo: ");
        scanf("%f %f", &base, &altura);
        area = base * altura;
        printf("A area do retangulo e: %.2f\n", area);
    } else if (figura == 'Q' || figura == 'q') {
        printf("Digite o lado do quadrado: ");
        scanf("%f", &lado);
        area = lado * lado;
        printf("A area do quadrado e: %.2f\n", area);
    } else if (figura == 'T' || figura == 't') {
        printf("Digite a base e a altura do triangulo: ");
        scanf("%f %f", &base, &altura);
        area = (base * altura) / 2;
        printf("A area do triangulo e: %.2f\n", area);
    } else {
        printf("Opcao invalida! Programa encerrado.\n");
    }
}
