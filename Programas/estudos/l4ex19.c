#include <stdio.h>

int dig_menor2(int n)
{
	int flag = 1, mult_n, cont;

	for(mult_n = 1; 1 ; mult_n ++)
	{
		for(cont = (mult_n * n); cont != 0; cont /= 10)
		{
			if(cont % 10 > 2)
			{
				flag = 0;
			}
		}

		cont *= 10;

		if(flag)
			return (mult_n * n);

		flag = 1;
	}
}

int somatorio(int n)
{
	int cont;
	unsigned long int soma = 0;

	for(cont = 1; cont <= n; cont ++)
		soma += dig_menor2(cont) / cont;

	printf("\nSomatório = %ld\n", soma);
}

int main()
{
	int n, f_n;
	somatorio(100);
}
