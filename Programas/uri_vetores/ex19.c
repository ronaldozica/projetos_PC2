#include <stdio.h>
#include <string.h>

#define tamanho 200

int main()
{
	int testes, aux_testes, i, economizados;
	char tel1[tamanho], tel2[tamanho];

	do
	{
		printf("\nDigite o número de testes: ");
		scanf("%d", &testes);

		economizados = 0;

		if(testes)
		{
			printf("\nDigite o telefone 1: ");
			scanf("%s", tel1);

			for(aux_testes = 2; aux_testes <= testes; aux_testes ++)
			{
				printf("\nDigite o telefone %d: ", aux_testes);
				scanf("%s", tel2);

				for(i = 0; *(tel1 + i) == *(tel2 + i); i ++)
					economizados ++;

				for(i = 0; *(tel2 + i) != 0; i ++)
					*(tel1 + i) = *(tel2 + i);
			}

			printf("\nForam economizados %d caracteres.\n", economizados);
		}

		else
			break;

	}while(1);

	printf("\nFim do programa!\n");
}
