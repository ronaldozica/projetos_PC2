#include <stdio.h>
#include <string.h>

#define tamanho 200

int main()
{
	char defeito, impresso[tamanho], i, j;

	do
	{
		printf("\nDigite o dígito com defeito: ");
		scanf("%c", &defeito);
		getchar();

		printf("\nDigite o que deveria ser impresso: ");
		scanf("%[^\n]s", impresso);
		getchar();

		if( ! ( (defeito == '0') && ( (impresso[0] == '0') && (impresso[1] == 0) ) ) )
		{
			for(i = 0; *(impresso + i) != 0; i ++)
			{
				if( *(impresso + i) == defeito )
				{
					for(j = i; *(impresso + j) != 0; j ++)
					{
						*(impresso + j) = *(impresso + j + 1);
					}

					i--;
				}
			}

			while(impresso[0] == '0')
			{
				for(i = 0; *(impresso + i) != 0; i ++)
				{
					*(impresso + i) = *(impresso + i + 1);
				}
			}

			if(impresso[0] == 0)
			{
				impresso[0] = '0';
				impresso[1] = 0;
			}

			printf("\nImpresso: %s\n", impresso);
		}

		else
			break;

	}while(1);

	printf("\nFim do programa.\n");
}
