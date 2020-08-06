#include <stdio.h>
#include <stdlib.h>

int confere_jogo(char jogo[3][3], char *simb_aux, char jog1)
{
	if( (jogo[0][0] == *simb_aux) && (jogo[0][0] == jogo [0][1]) && (jogo[0][1] == jogo[0][2]) )
	{
		if(*simb_aux == jog1)
			return 1;
		else
			return 2;
	}

	if( (jogo[1][0] == *simb_aux) && (jogo[1][0] == jogo [1][1]) && (jogo[1][1] == jogo[1][2]) )
	{
		if(*simb_aux == jog1)
			return 1;
		else
			return 2;
	}

	if( (jogo[2][0] == *simb_aux) && (jogo[2][0] == jogo [2][1]) && (jogo[2][1] == jogo[2][2]) )
	{
		if(*simb_aux == jog1)
			return 1;
		else
			return 2;
	}

	if( (jogo[0][0] == *simb_aux) && (jogo[0][0] == jogo [1][0]) && (jogo[1][0] == jogo[2][0]) )
	{
		if(*simb_aux == jog1)
			return 1;
		else
			return 2;
	}

	if( (jogo[0][1] == *simb_aux) && (jogo[0][1] == jogo [1][1]) && (jogo[1][1] == jogo[2][1]) )
	{
		if(*simb_aux == jog1)
			return 1;
		else
			return 2;
	}

	if( (jogo[0][2] == *simb_aux) && (jogo[0][2] == jogo [1][2]) && (jogo[1][2] == jogo[2][2]) )
	{
		if(*simb_aux == jog1)
			return 1;
		else
			return 2;
	}

	if( (jogo[0][0] == *simb_aux) && (jogo[0][0] == jogo [1][1]) && (jogo[1][1] == jogo[2][2]) )
	{
		if(*simb_aux == jog1)
			return 1;
		else
			return 2;
	}

	if( (jogo[0][2] == *simb_aux) && (jogo[0][2] == jogo [1][1]) && (jogo[1][1] == jogo[2][0]) )
	{
		if(*simb_aux == jog1)
			return 1;
		else
			return 2;
	}

	if(*simb_aux == 'x')
		*simb_aux = 'o';

	else
		*simb_aux = 'x';

	return 0;
}

void preenche_jogo(char jogo[3][3])
{
	int i, j;				// i == linha e j == coluna

	for(i = 0; i < 3; i ++)
	{
		for(j = 0; j < 3; j ++)
		{
			jogo[i][j] = '0';	// estado inicial == '0'
		}
	}
}

int print_jogo(char jogo[3][3], char simb_aux, char jog1)
{
	int i, j, cont;				// i == linha e j == coluna

	system("clear");			// limpa a tela do terminal

	printf("\n  1 2 3\n");

	for(cont = 1,i = 0; i < 3; i ++, cont ++)
	{
		printf("%d ", cont);

		for(j = 0; j < 3; j ++)
		{

			if(jogo[i][j] == '0')
				printf("_ ");
			else
				printf("%c ", jogo[i][j]);
		}
		putchar('\n');
	}

	if( (simb_aux == 'r') || (jog1 == 'f') )
		return 0;

	if( (simb_aux == jog1) || (jog1 == '0') )
		printf("\nTurno do Jogador 1 - %c\n", simb_aux);

	else
		printf("\nTurno do Jogador 2 - %c\n", simb_aux);

}

void preenche_casa(char jogo[3][3], char simb_aux, char jog1)
{
	int linha, coluna;
	int aux, aux_externo;

	do
	{
		aux_externo = 0;

		do
		{
			aux = 0;

			printf("\nDigite a linha: ");			// pede a linha
			scanf("%d", &linha);

			if( (linha < 1) || (linha > 3) )		// confere se a linha digitada é válida
			{
				printf("\nLinha inválida, digite novamente.\n");
				aux = 1;
			}

		}while(aux);

		do
		{
			aux = 0;

			printf("\nDigite a coluna: ");			// pede a coluna
			scanf("%d", &coluna);

			if( (coluna < 1) || (coluna > 3) )		// confere se a coluna digitada é válida
			{
				printf("\nColuna inválida, digite novamente.\n");
				aux = 1;
			}
		
		}while(aux);

		linha --;
		coluna --;

		if(jogo[linha][coluna] != '0')			// confere se a posição está ocupada
		{
			print_jogo(jogo, simb_aux, jog1);
			printf("\nPosição ocupada, digite novamente as linhas e colunas.\n");
			aux_externo = 1;
		}

	}while(aux_externo);

	jogo[linha][coluna] = simb_aux;		// atualiza a posição atual e retorna que não houve erros
}

void loop_jogo(char jogo[3][3])
{
	int i, j;				// i == linha e j == coluna
	int segue, aux, final = 0;
	char simb_aux, jog1;

	do
	{
		printf("\nJogador 1, digite seu marcador 'x' ou 'o': ");
		simb_aux = getchar();
		getchar();

		jog1 = simb_aux;

		if( (simb_aux != 'x') && (simb_aux != 'o') )
		{
			printf("\nSímbolo inválido, digite novamente.\n");
						// confere se o caractere digitado é válido
			aux = 1;
		}

		else
			aux = 0;

	}while(aux);

	do
	{
		segue = 0;			// segue == 0 -> fim do jogo

		for(i = 0; i < 3; i ++)
		{
			for(j = 0; j < 3; j ++)
			{
				if( jogo[i][j] == '0' )
				{
					segue = 1;	// ainda há uma posição disponível
				}
			}
		}

		if(segue)
		{
			preenche_casa(jogo, simb_aux, jog1);
							// pede mais uma casa para o usuário

			final = confere_jogo(jogo, &simb_aux, jog1);
		}

		if(aux)
			break;				// fim do jogo - erro

		if(final)
			break;				// fim do jogo - vitória

		print_jogo(jogo, simb_aux, jog1);	// imprime status atual do tabuleiro

	} while(segue);


	jog1 = 'f';
	print_jogo(jogo, simb_aux, jog1);
	printf("\nFim do jogo.\n");

	switch(final)
	{
		case 1:
			printf("Jogador 1 venceu.\n");
			break;
		case 2:
			printf("Jogador 2 venceu.\n");
			break;
		case 0:
			printf("Velha.\n");
			break;
	}
}

int main()
{
	char jogo[3][3], jog1 = '0';		// jogo é a matriz que contém o jogo da velha
	char simb_aux = 'r';
	int i, j;				// i == linha e j == coluna
	int segue, aux;

	preenche_jogo(jogo);			// começa o jogo com '0' em todas as posições
	print_jogo(jogo, simb_aux, jog1);	// imprime o status atual do jogo

	loop_jogo(jogo);			// executa o jogo em loop até terminar
}
