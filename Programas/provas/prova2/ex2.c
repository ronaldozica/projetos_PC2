#include <stdio.h>
#include <math.h>

int main()
{
	int a, b, base, expoente, cont = 0, iguais = 0, i, j;

	printf("\nDigite a e b, respectivamente: ");
	scanf("%d %d", &a, &b);

	const int tamanho = pow(a, (b - 1) );
	int elementos[tamanho];

	putchar('\n');

	for(base = a; base <= b; base ++)
	{
		for(expoente = a; expoente <= b; expoente ++)
		{
			*(elementos + cont) = pow(base, expoente);
			printf("%.4d ", *(elementos + cont) );
			cont ++;
		}

		putchar('\n');
	}

	for(i = 0; i < tamanho; i ++)
	{
		for(j = i + 1; j < tamanho; j ++)
		{
			if( ( *(elementos + i) == *(elementos + j) ) && (i != j) )
			{
				iguais ++;
			}
		}
	}

	printf("\nO número de termos distintos é: %d\n", tamanho - iguais);
}
