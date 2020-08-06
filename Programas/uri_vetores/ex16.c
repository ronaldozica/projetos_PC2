#include <stdio.h>
#include <string.h>

#define tam 200

int main()
{
	char codificada[tam], decodificada[tam];
	int i, j, testes, aux_testes, tamanho_str;

	printf("\nDigite a quantidade de casos de teste: ");
	scanf("%d", &testes);
	getchar();

	for(aux_testes = 1; aux_testes <= testes; aux_testes ++)
	{
		printf("\nDigite a string %d:", aux_testes);
		scanf("%[^\n]s", codificada);
		getchar();

		tamanho_str = 0;

		for(i = 0; *(codificada + i) != 0; i ++)
			tamanho_str ++;

		j = 0;

		for(i = tamanho_str / 2; i >= 0; i --)
		{
			*(decodificada + j) = *(codificada + i);
			j ++;
		}

		for(i = tamanho_str - 1; i > (tamanho_str / 2); i --)
		{
			*(decodificada + j) = *(codificada + i);
			j ++;
		}

		*(decodificada + j) = 0;

		printf("\nString %d decodificada: %s\n", aux_testes, decodificada);
	}
}
