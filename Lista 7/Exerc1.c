/*	
	Lista de Exerc�cios VII (Estruturas de Repeti��o):

	QUEST�O 01: Dado o programa abaixo,
	fornecer os valores que ser�o exibidos
	quando o mesmo for executado:
	
	int main ()
	{
		int A, B, C, i;
		A = 0;
		B = 10;
		C = B - A;
		i = 1;
		while (i <= 10)
		{
			if (C > A)
			{
			C = C - 2;
			i++;
			}
			else
			{
				i += 2;
				B = C % i;
			}
			A = A + i;
			printf ("A = %d\n", A);
			printf ("B = %d\n", B);
			printf ("C = %d\n", C);
			printf ("i =%d\n", i);
		}
	}
*/

Itera��o 1:
A = 2
B = 10
C = 8
i = 2

Itera��o 2:
A = 5
B = 10
C = 6
i = 3

Itera��o 3:
A = 9
B = 10
C = 4
i = 4

Itera��o 4:
A = 15
B = 4
C = 4
i = 6	

Itera��o 5:
A = 23
B = 4
C = 4
i = 8

Itera��o 6:
A = 33
B = 4
C = 4
i = 10

Itera��o 7:
A = 45
B = 4
C = 4
i = 12
