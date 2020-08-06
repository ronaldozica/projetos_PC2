#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define linha 12
#define coluna 12

int main()
{
	int C, matriz[linha][coluna], i, j, soma = 0, media;
	char op;

	putchar('\n');

	srand(time(0));

	for(i = 0; i < linha; i ++)
	{
		for(j = 0; j < coluna; j ++)
		{
			matriz[i][j] = rand() % 100;
			printf("%.2d ", matriz[i][j]);
		}
		putchar('\n');
	}

	do
	{
		printf("\nDigite a coluna: ");
		scanf("%d", &C);
		C --;
	}while( (C >= 12) || (C < 0) );

	getchar();

	printf("\nDigite a operação, 'M' ou 'S': ");
	scanf("%c", &op);

	for(i = 0; i < linha; i ++)
	{
		soma += matriz[i][C];
	}

	media = soma / coluna;

	switch(op)
	{
		case 'M':
			printf("\nA média dos %d elementos da coluna %d é: %d\n", linha, C + 1, media);
			break;
		case 'S':
			printf("\nA soma dos %d elementos da coluna %d é: %d\n", linha, C + 1, soma);
			break;
		default:
			printf("\nOperação inválida.\n");		
	}
}
