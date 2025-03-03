/*	
	Atividade 7:
		
	Dado um vetor contendo números reais, desenvolver uma função que determine o maior valor do vetor inferior à
	média de seus elementos, assim como o menor que seja superior a esta média.
	Nota: apresentar a main chamando a função implementada.
*/

#include <stdio.h>

float calcularMedia(float vetor[], int tam) {
    float soma = 0.0;
    int i;
    for (i = 0; i < tam; i++) {
        soma += vetor[i];
    }
    return soma / tam;
}

void encontrarMaiorMenorRelativoMedia(float vetor[], int tam, float *maiorInferior, float *menorSuperior) {
    float media = calcularMedia(vetor, tam);
	int i;
    *maiorInferior = -1; 
    *menorSuperior = -1; 

    for (i = 0; i < tam; i++) {
        if (vetor[i] < media) {
            if (*maiorInferior == -1 || vetor[i] > *maiorInferior) {
                *maiorInferior = vetor[i];
            }
        } else if (vetor[i] > media) {
            if (*menorSuperior == -1 || vetor[i] < *menorSuperior) {
                *menorSuperior = vetor[i];
            }
        }
    }
}

void main() {
    float vetor[] = {3.5, 7.2, 1.8, 9.1, 4.4};
    int tam = 5;
    float maiorInferior, menorSuperior;

    encontrarMaiorMenorRelativoMedia(vetor, tam, &maiorInferior, &menorSuperior);

    printf("Media do vetor: %.2f\n", calcularMedia(vetor, tam));
    printf("Maior valor inferior a media: %.2f\n", maiorInferior);
    printf("Menor valor superior a media: %.2f\n", menorSuperior);
}
