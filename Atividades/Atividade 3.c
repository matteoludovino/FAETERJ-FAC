/*	
	Atividade 3:
	
	Desenvolver um programa que, dado um número inteiro n, exiba um triângulo conforme ilustrado pelo exemplo a
	seguir:
		n = 7
		1
		2 1
		1 2 3
		4 3 2 1
		1 2 3 4 5
		6 5 4 3 2 1
		1 2 3 4 5 6 7
*/

#include <stdio.h>

void main ()
{
	int num, i, j;
	
	printf("Digite um numero: ");
	scanf("%d", &num);
	
	for (i = 1; i <= num; i++) {
		
		if (i % 2 == 1) {
			
			for (j = 1; j <= i; j++) {	
				printf("%d ", j);
			}
		} else {
			
			for (j = i; j >= 1; j--) {
				printf("%d ", j);
			}
		}
		printf("\n");
	}
}
