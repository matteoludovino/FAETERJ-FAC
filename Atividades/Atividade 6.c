/*	
	Atividade 6:
	
	Desenvolver uma função que, dado um número inteiro n, determine o seu maior algarismo, assim como o menor.
	Nota: apresentar a main chamando a função implementada.
*/

#include <stdio.h>

void maiorMenorAlgarismo(int n, int *maior, int *menor) {

    if (n < 0) {
        n = -n;
    }

    *maior = 0; 
    *menor = 9; 

    while (n > 0) {
        int digito = n % 10; 
        if (digito > *maior) *maior = digito; 
        if (digito < *menor) *menor = digito; 
        n /= 10; 
    }
}

void main() {
    int n, maior, menor;

    printf("Digite um numero inteiro: ");
    scanf("%d", &n);

    maiorMenorAlgarismo(n, &maior, &menor);

    printf("Maior algarismo: %d\n", maior);
    printf("Menor algarismo: %d\n", menor);

}
