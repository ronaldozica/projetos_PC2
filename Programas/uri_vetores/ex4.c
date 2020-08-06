#include <stdio.h>

#define tam 10

int main()
{
	int x[tam], i, V;

	do{
		scanf("%d", &V);
	}while(V > 50);

	for(i = 0; i < tam; i ++)
	{
		if(i == 0)
			*(x + i) = V;
		else
			*(x + i) = 2 * x[i - 1];

		printf("X[%d] = %d\n", i, *(x + i) );
	}
}
