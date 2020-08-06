#include <stdio.h>
#include <string.h>

#define tam 200

int main()
{
	int n_testes, i, j, cont, esp;
	char str[tam], dec[tam];

	printf("\nDigite o número de testes: ");
	scanf("%d", &n_testes);

	for(i = 0; i < n_testes; i ++)
	{
		getchar();
		printf("\nDigite uma str: ");
		scanf("%[^\n]s", str);

		cont = 0;
		esp = 1;

		for(j = 0; *(str + j) != 0; j ++)
		{
			if(esp == 0)
			{
				if( *(str + j) == ' ' )
					esp = 1;
			}
		
			if( ( *(str + j) != ' ') && (esp) )
			{
				*(dec + cont) = *(str + j);

				printf("%c", *(dec + cont) );

				cont ++;
				esp = 0;
			}
		}

		*(dec + cont) = 0;
	}

	putchar('\n');
}
