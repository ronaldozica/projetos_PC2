#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define tam 15

void calc(int *v, int num, int *xmin, int *xmax)
{
	int menor = 100, maior = 0, i;

	for(i = 0; i < num; i ++)
	{
		if( *(v + i) < menor )
		{
			menor = *(v + i);
			*xmin = *(v + i);
		}

		if( *(v + i) > maior )
		{
			maior = *(v + i);
			*xmax = *(v + i);
		}
	}
}

int main()
{
	int i, v[tam], num, *xmin, *xmax, min, max;

	xmin = &min;		// faz com que as variáveis xmin e xmax apontem para o endereço de min e max
	xmax = &max;		// para que o conteúdo de min e max possa ser alterado

	putchar('\n');

	srand(time(0));

	for(i = 0; i < tam; i ++)
	{
		*(v + i) = rand() % 100;
		printf("%.2d ", *(v + i) );
	}

	printf("\nDigite a quantidade de números: ");
	scanf("%d", &num);

	calc(v, num, xmin, xmax);

	printf("\nEntre os %d primeiros números do vetor, o maior valor é: %d.\n", num, *xmax);
	printf("\nJá o menor valor é: %d.\n", *xmin);
}
