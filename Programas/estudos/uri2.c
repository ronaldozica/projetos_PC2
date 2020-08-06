#include <stdio.h>
#include <string.h>

int main()
{
	char linha1[27], linha2[27], linha3[27], aux[27] = "";
	int i, j, cont;
	char cheater, not_cheater;
	int flag, loop, k, z;

	printf("\nDigite a quantidade de casos de teste: ");
	scanf("%d", &loop);
	getchar();

	for(k = 0; k < loop; k ++)
	{
		//pede as frases para o usuário ----------------------------------------------------------------------

		printf("\nDigite os alimentos da dieta: ");
		scanf("%[^\n]s", linha1);
		getchar();

		printf("\nDigite os alimentos do café da manhã: ");
		scanf("%[^\n]s", linha2);
		getchar();

		printf("\nDigite os alimentos do almoço: ");
		scanf("%[^\n]s", linha3);
		getchar();

		if( (linha1[0] < 'A') || (linha1[0] > 'Z') )
		{
			for(z = 0; z < 27; z ++)
				linha1[z] = 0;
		}

		if( (linha2[0] < 'A') || (linha2[0] > 'Z') )
		{
			for(z = 0; z < 27; z ++)
				linha2[z] = 0;
		}

		if( (linha3[0] < 'A') || (linha3[0] > 'Z') )
		{
			for(z = 0; z < 27; z ++)
				linha3[z] = 0;
		}

		//verifica se comeu demais algo ----------------------------------------------------------------------

		cheater = 0;

		for(i = 0; linha2[i] != 0; i ++)
		{
			for(j = 0; linha3[j] != 0; j ++)
			{
				if( linha2[i] == linha3[j] )
				{
					cheater = 1;
					break;
				}
			}

			if(cheater)
				break;
		}

		//verifica se comeu fora da dieta --------------------------------------------------------------------

		for(i = 0; linha2[i] != 0; i ++)
		{
			not_cheater = 1;

			for(j = 0; linha1[j] != 0; j ++)
			{
				if( linha2[i] == linha1[j] )
				{
					not_cheater = 0;
				}
			}

			if(not_cheater)
			{
				cheater = 1;
				break;
			}
		}

		for(i = 0; linha3[i] != 0; i ++)
		{
			not_cheater = 1;

			for(j = 0; linha1[j] != 0; j ++)
			{
				if( linha3[i] == linha1[j] )
				{
					not_cheater = 0;
				}
			}

			if(not_cheater)
			{
				cheater = 1;
				break;
			}
		}

		//imprime se trapaceou -------------------------------------------------------------------------------

		if(cheater)
			printf("\nCHEATER\n");

		else
		{
			putchar('\n');

			cont = 0;

			for(i = 0; linha1[i] != 0; i ++)			//recebeu o que comeu no café da manhã
			{
				for(j = 0; linha2[j] != 0; j ++)
				{
					if( linha1[i] == linha2[j] )
					{
						aux[cont] = linha1[i];
						cont ++;
					}
				}
			}

			for(i = 0; linha1[i] != 0; i ++)			//recebeu o que comeu no almoço
			{
				for(j = 0; linha3[j] != 0; j ++)
				{
					if( linha1[i] == linha3[j] )
					{
						aux[cont] = linha1[i];
						cont ++;
					}
				}
			}

			for(i = 0; linha1[i] != 0; i ++)
			{
				flag = 1;

				for(j = 0; aux[j] != 0; j ++)
				{
					if( linha1[i] == aux[j] )
					{
						flag = 0;			
					}
				}

				if(flag)
					printf("%c", linha1[i]);
			}

			for(z = 0; z < 27; z ++)
			{
				aux[z] = 0;
				linha1[z] = linha2[z] = linha3[z] = 0;
			}

			putchar('\n');
		}
	}
}
