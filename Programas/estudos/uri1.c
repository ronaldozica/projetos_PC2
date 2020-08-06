#include <stdio.h>

int main()
{
	int A, N, i, soma = 0;

	printf("\nInsira A: ");
	scanf("%d", &A);

	do
	{
		printf("\nInsira N: ");
		scanf("%d", &N);

	}while(N <= 0);

	for(i = 0; i < N; i ++)
		soma += A + i;

	printf("\nA soma foi: %d.\n", soma);
}
