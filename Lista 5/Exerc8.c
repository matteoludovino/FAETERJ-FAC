/*	
	Lista de Exerc�cios V (Estruturas de Repeti��o):
	
	QUEST�O 08:
	Fazer um programa que auxilie o �rg�o
	regulador no c�lculo do total de recursos
	arrecadados com a aplica��o de multas de
	tr�nsito.
	O programa deve ler as seguintes
	informa��es para cada motorista:
	
	- O n�mero da carteira de motorista;
	- N�mero de multas;
	- Valor de cada uma das multas.
	
	Deve ser exibido o valor da d�vida de cada
	motorista e ao final da leitura o total de
	recursos arrecadados (somat�rio de todas
	as multas). O programa tamb�m dever�
	apresentar o n�mero da carteira do
	motorista que obteve o maior n�mero de
	multas.
*/

#include <stdio.h>

void main() {
    int numCarteira, numMultas, maiorNumMultas = 0, carteiraMaisMultas, i;
    float valorMulta, totalArrecadado = 0;

    while (1) {
        printf("Digite o numero da carteira de motorista (ou 0 para sair): ");
        scanf("%d", &numCarteira);

        if (numCarteira == 0) {
            break;
        }

        printf("Digite o numero de multas: ");
        scanf("%d", &numMultas);

        float divida_motorista = 0;

        for (i = 1; i <= numMultas; i++) {
            printf("Digite o valor da multa %d: ", i);
            scanf("%f", &valorMulta);
            divida_motorista += valorMulta;
        }

        totalArrecadado += divida_motorista;

        if (numMultas > maiorNumMultas) {
            maiorNumMultas = numMultas;
            carteiraMaisMultas = numCarteira;
        }

        printf("Divida do motorista %d: R$ %.2f\n", numCarteira, divida_motorista);
    }

    printf("\nTotal arrecadado com multas: R$ %.2f\n", totalArrecadado);
    printf("Motorista com mais multas (carteira %d): %d multas\n", carteiraMaisMultas, maiorNumMultas);
}
