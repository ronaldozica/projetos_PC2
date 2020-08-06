#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define linha 5
#define coluna 7

int main()
{
	int matriz[linha][coluna], i, j, linha1, linha2, coluna1, coluna2, aux;

	printf("\nMatriz original:\n");

	for(i = 0; i < linha; i ++)
	{
		for(j = 0; j < coluna; j ++)
		{
			matriz[i][j] = rand() % 100;
			printf("%.2d ", matriz[i][j]);
		}

		putchar('\n');
	}

	printf("\nDigite duas linhas que serão trocadas de posição: \n");
	scanf("%d %d", &linha1, &linha2);
	linha1 --;
	linha2 --;

	for(j = 0; j < coluna; j ++)
	{
		aux = matriz[linha1][j];
		matriz[linha1][j] = matriz[linha2][j];
		matriz[linha2][j] = aux;	
	}

	printf("\nMatriz com as linhas trocadas de posição:\n");

	for(i = 0; i < linha; i ++)
	{
		for(j = 0; j < coluna; j ++)
		{
			printf("%.2d ", matriz[i][j]);
		}

		putchar('\n');
	}

	printf("\nDigite duas colunas que serão trocadas de posição: \n");
	scanf("%d %d", &coluna1, &coluna2);
	coluna1 --;
	coluna2 --;

	for(i = 0; i < linha; i ++)
	{
		aux = matriz[i][coluna1];
		matriz[i][coluna1] = matriz[i][coluna2];
		matriz[i][coluna2] = aux;
	}

	printf("\nMatriz com as colunas trocadas de posição:\n");

	for(i = 0; i < linha; i ++)
	{
		for(j = 0; j < coluna; j ++)
		{
			printf("%.2d ", matriz[i][j]);
		}

		putchar('\n');
	}

}
