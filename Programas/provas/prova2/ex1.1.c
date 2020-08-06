#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define tam 15

void calc(int *v, int num, int *xmin, int *xmax)
{
	int i;

	*xmin = 100, *xmax = 0;

	for(i = 0; i < num; i ++)
	{
		if( *(v + i) < *xmin )
			*xmin = *(v + i);

		if( *(v + i) > *xmax )
			*xmax = *(v + i);
	}
}

int main()
{
	int i, v[tam], num, xmin, xmax;

	putchar('\n');

	srand(time(0));

	for(i = 0; i < tam; i ++)
	{
		*(v + i) = rand() % 100;
		printf("%.2d ", *(v + i) );
	}

	printf("\nDigite a quantidade de números: ");
	scanf("%d", &num);

	calc(v, num, &xmin, &xmax);

	printf("\nEntre os %d primeiros números do vetor, o maior valor é: %d.\n", num, xmax);
	printf("\nJá o menor valor é: %d.\n", xmin);
}
