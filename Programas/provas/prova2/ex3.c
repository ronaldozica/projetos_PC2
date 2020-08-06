#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define linha 3
#define coluna 4

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
					if(matriz[i1][j1] == matriz [i2][j2])
					{
						if( (i1 != i2) || (j1 != j2) )
						{
							matriz[i1][j1] = (rand() % 12) + 1;
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
	int i, j, matriz[linha][coluna];

	srand(time(0));

	printf("\nMatriz original:\n");

	for(i = 0; i < linha; i ++)
	{
		for(j = 0; j < coluna; j ++)
		{
			matriz[i][j] = ( rand() % 12 ) + 1;
			printf("%.2d ", matriz[i][j]);
		}

		putchar('\n');
	}

	retira_rep(matriz);

	printf("\nMatriz sem repetições:\n");

	for(i = 0; i < linha; i ++)
	{
		for(j = 0; j < coluna; j ++)
		{
			printf("%.2d ", matriz[i][j]);
		}

		putchar('\n');
	}
}
