#include <stdio.h>
#include <string.h>

#define tamanho 200

int strcmpA(char *s1, char *s2)
{
	int i;

	for(i = 0; ( *(s1 + i) != 0 ) && ( *(s2 + i) != 0 ); i ++)
	{
		if( *(s1 + i) != *(s2 + i) )
		{
			if( ( *(s1 + i) >= 'A' ) && ( *(s1 + i) <= 'Z') )
			{
				if( ( *(s2 + i) >= 'A' ) && ( *(s2 + i) <= 'Z') )
					return (s1[i] - s2[i]);

				if( ( *(s2 + i) >= 'a' ) && ( *(s2 + i) <= 'z') )
					if( s1[i] != s2[i] + ('A' - 'a') )
						return (s1[i] - s2[i] - ('A' - 'a') );
			}

			else
			{
				if( ( *(s2 + i) >= 'A' ) && ( *(s2 + i) <= 'Z') )
					if( s1[i] != s2[i] - ('A' - 'a') )
						return (s1[i] - s2[i] + ('A' - 'a') );

				if( ( *(s2 + i) >= 'a' ) && ( *(s2 + i) <= 'z') )
					return (s1[i] - s2[i]);
			}
		}
	}

	return (s1[i] - s2[i]);
}

int main()
{
	char s1[tamanho], s2[tamanho], retorno;

	printf("\nDigite a primeira string: ");
	scanf("%[^\n]s", s1);
	getchar();

	printf("\nDigite a segunda string: ");
	scanf("%[^\n]s", s2);

	retorno = strcmpA(s1, s2);

	if(retorno < 0)
		printf("\n%s < %s\n", s1, s2);
	else if(retorno > 0)
		printf("\n%s > %s\n", s1, s2);
	else
		printf("\n%s = %s\n", s1, s2);
}
