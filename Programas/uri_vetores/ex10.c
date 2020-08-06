#include <stdio.h>
#include <string.h>

#define tam 200

int main()
{
	int testes, i, j, elementos, total;
	char codi[tam], aux[tam];
//-----------------------------------------------------------------------------------------------------//
	printf("\nDigite a quantidade de casos para teste: ");
	scanf("%d", &testes);
//-----------------------------------------------------------------------------------------------------//
	for(i = 0; i < testes; i ++)
	{
		printf("\nDigite frase %d: ", i + 1);
		getchar();
		scanf("%[^\n]s", codi);

		for(j = 0; *(codi + j) != 0; j ++)
		{
			if( ( *(codi + j) >= 'A' ) && ( *(codi + j) <= 'Z' ) )
				*(codi + j) += 3;
			else if( ( *(codi + j) >= 'a' ) && ( *(codi + j) <= 'z' ) )
				*(codi + j) += 3;
		}
//-----------------------------------------------------------------------------------------------------//
		for(j = 0, elementos = 0; *(codi + j) != 0; j ++)
		{
			*(aux + j) = *(codi + j);
			elementos ++;
		}

		*(aux + j) = 0;
		total = elementos;

		for(j = 0; *(aux + j) != 0; j ++)
		{
			*(codi + elementos - 1) = *(aux + j);
			elementos --;
		}
//-----------------------------------------------------------------------------------------------------//
		for(j = 0; *(codi + j) != 0; j ++)
		{
			if( j >= (total / 2) )
				*(codi + j) -= 1;
		}
//-----------------------------------------------------------------------------------------------------//
		printf("\n%s\n", codi);
	}
}
