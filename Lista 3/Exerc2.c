/*
	Lista de Exerc�cios III:
	
	QUEST�O 02:
	Construir um programa que permita ao usu�rio
	calcular a �rea de uma figura geom�trica. Para
	isto, o usu�rio dever� escolher a figura desejada
	([C]�rculo, [R]et�ngulo, [Q]uadrado ou
	[T]ri�ngulo) e fornecer as informa��es
	necess�rias para que a �rea desta figura possa
	ser calculada.
	
		Notas:
	1. F�rmulas para o c�lculo das �reas:
	a. Ac�rculo = p.raio2, onde p = 3.14159;	
	b. Aret�ngulo = base.altura;
	c. Aquadrado = lado2;
	d. Atri�ngulo = (base.altura)/2.
	
	2. Caso o usu�rio escolha uma op��o inv�lida,
	uma mensagem de erro deve ser exibida e a
	execu��o do programa terminada.
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
