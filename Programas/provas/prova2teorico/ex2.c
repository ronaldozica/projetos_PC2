#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define tamA 10
#define tamB 5

void F(int *A, int *B, int *C, int *D)
{
	int i, pares = 0, somaB = 0, j = 0, k, divisores;

	for(i = 0; i < tamA; i ++)
	{
		if( A[i] % 2 == 0 )
			pares ++;
	}

	for(i = 0; i < tamB; i ++)
		somaB += B[i];

	for(i = 0; i < tamA; i ++)
	{
		if( A[i] % 2 == 0 )
		{
			C[j] = A[i] + somaB;
			j++;
		}
	}

	for(j = i = 0; i < tamA; i ++)
	{
		if( A[i] % 2 != 0 )
		{
			divisores = 0;

			for(k = 1; k <= tamB; k ++)
				if(A[i] % B[k - 1] == 0)
					divisores ++;			
			D[j] = divisores;
			j++;
		}
	}
}

int main()
{
	int A[tamA], B[tamB], i, pares = 0;

	printf("\nVetor A:\n");

	for(i = 0; i < tamA; i ++)
	{
		A[i] = rand() % 10;
		printf("%d ", A[i]);

		if( A[i] % 2 == 0 )
			pares ++;
	}

	printf("\nVetor B:\n");

	for(i = 0; i < tamB; i ++)
	{
		B[i] = (rand() % 4) + 1;
		printf("%d ", B[i]);
	}

	const int tamC = pares, tamD = (tamA - pares);
	int C[tamC], D[tamD];

	F(A, B, C, D);

	printf("\nVetor C:\n");

	for(i = 0; i < tamC; i ++)
		printf("%d ", C[i]);

	printf("\nVetor D:\n");

	for(i = 0; i < tamD; i ++)
		printf("%d ", D[i]);

	putchar('\n');
}
