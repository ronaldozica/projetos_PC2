#include <stdio.h>

int main()
{
	int A, B, dig, cont, vezes_dig, aux;

	do
	{
		printf("\nDigite A e B, respectivamente: ");
		scanf("%d %d", &A, &B);
	}while(A >= B);

	putchar('\n');

	for(dig = 0; dig <= 9; dig ++)
	{
		vezes_dig = 0;

		for(aux = A; aux <= B; aux ++)
		{
			cont = aux;

			while(cont != 0)
			{
				if(cont % 10 == dig)
					vezes_dig ++;
				cont /= 10;
			}
		}
		printf("%d ", vezes_dig);
	}

	putchar('\n');
}
