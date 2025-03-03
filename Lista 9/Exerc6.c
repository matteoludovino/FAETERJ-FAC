/*
	Lista de Exercícios IX (Funções):
	
	QUESTÃO 06:
	Desenvolver uma função que, dado um número inteiro N, calcule o 
	valor do seguinte somatório:

		S= 1 + ((n-1)^1)/1! + (n-2)^2/2! + (n-3)^3/3! + ... + 1^(n-1)/((n-1)!)
*/

#include <stdio.h>

long fatorial(int n) {
	int i;
    long fat = 1;
    for (i = 1; i <= n; i++) {
        fat *= i;
    }
    return fat;
}

double calcularSomatorio(int N) {
    double S = 1.0;
    int i, j;

    for (i = 1; i < N; i++) {
        double termo = 1.0;
        for (j = 1; j <= i; j++) {
            termo *= (N - i);
        }
        termo /= fatorial(i);
        S += termo;
    }

    return S;
}

int main() {
    int N;

    printf("Digite o valor de N: ");
    scanf("%d", &N);

    double resultado = calcularSomatorio(N);
    printf("O valor do somatorio S e: %.6f\n", resultado);

    return 0;
}
