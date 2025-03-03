/*	
	Atividade 5:
	
	Fazer uma função que, dados dois números inteiros num1 e num2, determine se num2 é uma potência de num1.
	Nota: apresentar a main chamando a função implementada.
*/

#include <stdio.h>

int Potencia(int num1, int num2) {
	
    if (num1 <= 1 || num2 < 1) return 0; 

    while (num2 > 1) {
        if (num2 % num1 != 0) return 0; 
        num2 /= num1; 
    }

    return 1; 
}

void main() {
	
    int num1, num2;

    printf("Digite o valor do primeiro numero: ");
    scanf("%d", &num1);
    printf("Digite o valor do segundo numero: ");
    scanf("%d", &num2);

    if (Potencia(num1, num2)) {
        printf("%d e uma potencia de %d\n", num2, num1);
    } else {
        printf("%d nao e uma potencia de %d\n", num2, num1);
    }

}

