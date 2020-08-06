#include <stdio.h>

#define tam 10

int main()
{
	int x[tam], i;

	for(i = 0; i < tam; i ++)
	{
		scanf("%d", (x + i));

		if( *(x + i) <= 0 )
			*(x + i) = 1;
	}

	putchar('\n');

	for(i = 0; i < tam; i ++)
		printf("X[%d] = %d\n", i, *(x + i) );

}
