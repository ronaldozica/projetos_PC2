#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define linha 4
#define coluna 4

void crescente(int matriz[linha][coluna])
{
	int i1, j1, i2, j2, i, j, aux;

	for(j = 0; j < coluna; j ++)
	{
		for(i1 = 0; i1 < (linha - 1); i1 ++)
		{
			for(i2 = (i1 + 1); i2 < linha; i2 ++)
			{
				if( matriz[i1][j] > matriz[i2][j] )
				{
					aux = matriz[i1][j];
					matriz[i1][j] = matriz[i2][j];
					matriz[i2][j] = aux;
				}
			}
		}
	}

	for(i = 0; i < linha; i ++)
	{
		for(j1 = 0; j1 < (coluna - 1); j1 ++)
		{
			for(j2 = (j1 + 1); j2 < linha; j2 ++)
			{
				if( matriz[i][j1] > matriz[i][j2] )
				{
					aux = matriz[i][j1];
					matriz[i][j1] = matriz[i][j2];
					matriz[i][j2] = aux;
				}
			}
		}
	}
}

void retira_rep(int matriz[linha][coluna])
{
	int i1, j1, i2, j2;

	for(i1 = 0; i1 < linha; i1 ++)
	{
		for(j1 = 0; j1 < coluna; j1 ++)
		{
			for(i2 = 0; i2 < linha; i2 ++)
			{
				for(j2 = 0; j2 < coluna; j2 ++)
				{
					if( matriz[i1][j1] == matriz[i2][j2] )
					{
						if( (i1 != i2) || (j1 != j2) )
						{
							matriz[i1][j1] = (rand() % 16) + 1;
							i2 = -1;
							break;
						}
					}
				}
			}
		}
	}
}

int main()
{
	int matriz[linha][coluna], i, j;

	srand(time(0));

	printf("\nMatriz com números repetidos:\n");

	for(i = 0; i < linha; i ++)
	{
		for(j = 0; j < coluna; j ++)
		{
			matriz[i][j] = (rand() % 16) + 1;
			printf("%.2d ", matriz[i][j]);
		}

		putchar('\n');
	}

	retira_rep(matriz);

	printf("\nMatriz sem números repetidos:\n");

	for(i = 0; i < linha; i ++)
	{
		for(j = 0; j < coluna; j ++)
			printf("%.2d ", matriz[i][j]);

		putchar('\n');
	}

	crescente(matriz);

	printf("\nMatriz organizada em ordem crescente:\n");

	for(i = 0; i < linha; i ++)
	{
		for(j = 0; j < coluna; j ++)
			printf("%.2d ", matriz[i][j]);

		putchar('\n');
	}
}
