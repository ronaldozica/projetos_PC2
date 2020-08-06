#include <stdio.h>
#include <string.h>

#define tam 200

int main()
{
	char tipo1[tam], tipo2[tam], tipo3[tam];
	int flag = 1;

	while(flag)
	{
		scanf("%s", tipo1);
		scanf("%s", tipo2);
		scanf("%s", tipo3);

		switch( *tipo1 )
		{
			case 'v':
				switch( *tipo2 )
				{
					case 'a':
						switch( *tipo3 )
						{
							case 'c':
								printf("\náguia.\n\n");
								break;
							case 'o':
								printf("\npomba.\n\n");
								break;
						}

						break;

					case 'm':
						switch( *tipo3 )
						{
							case 'o':
								printf("\nhomem.\n\n");
								break;
							case 'h':
								printf("\nvaca.\n\n");
								break;
						}

						break;
				}

				break;

			case 'i':
				switch( *tipo2 )
				{
					case 'i':
						switch( *(tipo3 + 2) )
						{
							case 'm':
								printf("\npulga.\n\n");
								break;
							case 'r':
								printf("\nlagarta.\n\n");
								break;
						}

						break;
					case 'a':
						switch( *tipo3 )
						{
							case 'h':
								printf("\nsanguessuga.\n\n");
								break;
							case 'o':
								printf("\nminhoca.\n\n");
								break;
						}

						break;
				}

				break;

			default:
				printf("\nTipo inválido.\n");
				flag = 0;
				break;
		}
	}
}
