#include <stdio.h>

#define tam 1000

int main()
{
	int t, N[tam], i, x = -1;

	do
	{
		printf("\nDigite t entre 2 e 50: ");
		scanf("%d", &t);
	}while( ( t < 2) || ( t > 50) );

	for(i = 0; i < tam; i ++)
	{
		if(t > (x + 1))
		{
			x ++;
			*(N + i) = x;
		}

		else
		{
			x = 0;
			*(N + i) = x;
		}

		printf("%.2d ", *(N + i) );
	}

	putchar('\n');
}
