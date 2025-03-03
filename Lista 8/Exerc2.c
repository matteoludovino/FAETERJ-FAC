/*	
	Lista de Exerc�cios VIII (Fun��es):
	
	QUEST�O 02:
	Implementar uma fun��o que converta
	determinada temperatura em graus Celsius
	para graus Fahrenheit.
*/

#include <stdio.h>

float celsiusParaFahrenheit(float celsius) {
    return (celsius * 9 / 5) + 32;
}

void main() {
    float celsius;

    printf("Digite a temperatura em graus Celsius: ");
    scanf("%f", &celsius);

    float fahrenheit = celsiusParaFahrenheit(celsius);
    printf("Temperatura em Fahrenheit: %.2f\n", fahrenheit);
}
