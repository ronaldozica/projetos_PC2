#include <stdio.h>
#include <string.h>

#define tamanho 18

int main()
{
	int quant_total, quant_anali, i, j, b1, b2;
	char cpf[tamanho];

	printf("\nDigite a quantidade de CPF's que será analisada: ");
	scanf("%d", &quant_total);

	for(quant_anali = 0; quant_anali != quant_total; quant_anali ++)
	{
		printf("\nDigite o %dº CPF: ", quant_anali + 1);
		scanf("%s", cpf);

		b1 = b2 = 0;

		for(j = i = 0; i < 11; i ++)
		{
			if( ! ( (i == 3) || (i == 7) ) )
			{
				b1 += ( cpf[i] - 48 ) * (j + 1);
				b2 += ( cpf[i] - 48 ) * (9 - j);
				j ++;
			}
		}

		b1 %= 11;
		b2 %= 11;

		if(b1 == 10)
			b1 = 0;
		if(b2 == 10)
			b2 = 0;

		if( (cpf[12] - ('0' - 0) == b1) && (cpf[13] - 48 == b2) )
			printf("\nCPF válido.\n");
		else
			printf("\nCPF inválido.\n");
	}
}
