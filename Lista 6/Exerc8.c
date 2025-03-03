/*	
	Lista de Exerc�cios VI (Estruturas de Repeti��o):
	
	QUEST�O 08: Fa�a um programa que leia
	um n�mero real x e um n�mero inteiro y.
	Em seguida, o programa deve ler 100
	n�meros reais e calcular quantos destes
	est�o no intervalo definido por [x-y,x+y].
*/

#include <stdio.h>

void main() {
    float x, numero;
    int y, countDentroIntervalo = 0;
    int i;

    printf("Digite um numero real x: ");
    scanf("%f", &x);

    printf("Digite um numero inteiro y: ");
    scanf("%d", &y);

    for (i = 1; i <= 100; i++) {
        printf("Digite o %d numero real: ", i);
        scanf("%f", &numero);

        if (numero >= (x - y) && numero <= (x + y)) {
            countDentroIntervalo++;
        }
    }

    printf("\nQuantidade de numeros no intervalo [%.2f, %.2f]: %d\n", x - y, x + y, countDentroIntervalo);

    return 0;
}
