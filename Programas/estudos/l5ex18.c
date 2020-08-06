#include <stdio.h>
#include <string.h>

#define tam 100

void eliminar(char *str, char ch)
{
	int cont, aux;

	for(cont = 0; *(str + cont) != 0; cont ++)
	{
		if( *(str + cont) == ch )
		{
			for(aux = cont; *(str + aux) != 0; aux ++)
			{
				*(str + aux) = *(str + aux + 1);
			}
		}
	}
}

int main()
{
	char str[tam], ch;

	printf("\nDigite a string: ");
	scanf("%[^\n]s", str);

	getchar();
	printf("\nAgora digite um caractere que será eliminado: ");
	scanf("%c", &ch);

	printf("\nString com o caractere \"%c\": %s\n", ch, str);

	eliminar(str, ch);

	printf("\nString sem o caractere \"%c\": %s\n", ch, str);
}
