#include <stdio.h>

int compara(int *vetor1, int *vetor2, int tam1, int tam2)
{
	int cont;

	if(tam1 != tam2)
		return 0;

	else
	{
		for(cont = 0; cont < tam1; cont ++)
		{
			if( *(vetor1 + cont) != *(vetor2 + cont) )
				return 0;
		}

		return 1;
	}
}

int main()
{
	int n1, n2, cont, aux;

	printf("\nDigite o tamanho dos dois vetores: ");
	scanf("%d %d", &n1, &n2);

	const int tam1 = n1, tam2 = n2;
	int vetor1[tam1], vetor2[tam2];

	printf("\nDigite o vetor 1: ");

	for(cont = 0; cont < tam1; cont ++)
	{
		scanf("%d", &aux);
		*(vetor1 + cont) = aux;
	}

	printf("\nDigite o vetor 2: ");

	for(cont = 0; cont < tam2; cont ++)
	{
		scanf("%d", &aux);
		*(vetor2 + cont) = aux;
	}

	printf("\nVetor 1: ");

	for(cont = 0; cont < tam1; cont ++)
	{
		printf("%d ", *(vetor1 + cont) );
	}

	printf("\nVetor 2: ");

	for(cont = 0; cont < tam2; cont ++)
	{
		printf("%d ", *(vetor2 + cont) );
	}

	putchar('\n');

	if( compara(vetor1, vetor2, tam1, tam2) )
		printf("\nOs vetores são iguais.\n");
	else
		printf("\nOs vetores são diferentes.\n");
}
