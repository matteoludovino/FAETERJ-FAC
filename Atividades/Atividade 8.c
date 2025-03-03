/*	
	Atividade 8:
	
	Considere que um vetor de inteiros armazene o número 0 em algumas de suas posições objetivando “separar
	subconjuntos de valores”, como no exemplo a seguir:
	
		5 7 3 0 5 9 0 1 0 3 4 8
		0 1 2 3 4 5 6 7 8 9 10 11
	
	Desenvolver uma função que, dados um vetor como definido anteriormente e um número inteiro n, retorne um
	vetor contendo o n-ésimo subconjunto do vetor.
	
	Notas:
		1. Caso exista o n-ésimo subconjunto, a função retornará, além do subconjunto, o valor 1; caso contrário,
		retornará 0.
		2. Apresentar a main chamando a função implementada.
*/

#include <stdio.h>
#include <stdlib.h>

int encontrarNesimoSubconjunto(int vetor[], int tamanho, int n, int **subconjunto, int *tamanhoSubconjunto) {
    int contadorSubconjuntos = 0;
    int inicioSubconjunto = -1;
    int fimSubconjunto = -1;
    int i, j;

    for (i = 0; i < tamanho; i++) {
        if (vetor[i] != 0) {
            if (inicioSubconjunto == -1) {
                inicioSubconjunto = i;
            }
            fimSubconjunto = i;
        } else {
            if (inicioSubconjunto != -1) {
                contadorSubconjuntos++;
                if (contadorSubconjuntos == n) {
                    *tamanhoSubconjunto = fimSubconjunto - inicioSubconjunto + 1;
                    *subconjunto = (int *)malloc(*tamanhoSubconjunto * sizeof(int));
                    for (j = 0; j < *tamanhoSubconjunto; j++) {
                        (*subconjunto)[j] = vetor[inicioSubconjunto + j];
                    }
                    return 1;
                }
                inicioSubconjunto = -1;
            }
        }
    }
    if (inicioSubconjunto != -1) {
        contadorSubconjuntos++;
        if (contadorSubconjuntos == n) {
            *tamanhoSubconjunto = fimSubconjunto - inicioSubconjunto + 1;
            *subconjunto = (int *)malloc(*tamanhoSubconjunto * sizeof(int));
            for (j = 0; j < *tamanhoSubconjunto; j++) {
                (*subconjunto)[j] = vetor[inicioSubconjunto + j];
            }
            return 1;
        }
    }

    return 0;
}

int main() {
    int vetor[] = {1, 2, 3, 0, 4, 5, 0, 6, 7, 8, 0, 9};
    int tamanho = 12; 
    int n = 2; 
    int *subconjunto;
    int tamanhoSubconjunto;
    int i;

    int resultado = encontrarNesimoSubconjunto(vetor, tamanho, n, &subconjunto, &tamanhoSubconjunto);

    if (resultado == 1) {
        printf("Subconjunto %d encontrado: ", n);
        for (i = 0; i < tamanhoSubconjunto; i++) {
            printf("%d ", subconjunto[i]);
        }
        printf("\n");
        free(subconjunto);
    } else {
        printf("Subconjunto %d não encontrado.\n", n);
    }

    return 0;
}
