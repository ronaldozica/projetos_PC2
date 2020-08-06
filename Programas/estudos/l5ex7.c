#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define tam 20

void organizar(int *vetor)
{
	int i, j, aux;

	for(i = 0; i < (tam - 1); i ++)
	{
		for(j = i + 1; j < tam; j ++)
		{
			if( *(vetor + i) > *(vetor + j) )
			{
				aux = *(vetor + i);
				*(vetor + i) = *(vetor + j);
				*(vetor + j) = aux;
			}
		}
	}
}

int main()
{
	int vetor[tam], cont;

	srand(time(0));

	printf("\nVetor antes de organizar:\n");

	for(cont = 0; cont < tam; cont ++)
	{
		*(vetor + cont) = rand() % 100;
		printf("%.2d ", *(vetor + cont) );
	}

	organizar(vetor);

	printf("\nVetor depois de organizar:\n");

	for(cont = 0; cont < tam; cont ++)
		printf("%.2d ", *(vetor + cont) );

	putchar('\n');
}
