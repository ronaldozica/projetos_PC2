#include <stdio.h>

#define tam 5
#define entradas 15

int main()
{
	int par[tam], impar[tam], i, i_par = 0, i_impar = 0, num[entradas];


	for(i = 0; i < entradas; i ++)			//leia todos os 15 numeros
		scanf("%d", (num + i) );


	for(i = 0; i < entradas; i ++)
	{
		if( *(num + i) % 2 == 0)
		{
			if(i_par < tam)
			{
				par[i_par] = *(num + i);
				i_par ++;
			}

			else
			{
				for(i_par = 0; i_par < tam; i_par ++)
					printf("par[%d] = %d\n", i_par, *(par + i_par) );
				i_par = 0;
				i --;
			}
		}

		else
		{
			if(i_impar < tam)
			{
				impar[i_impar] = *(num + i);
				i_impar ++;
			}

			else
			{
				for(i_impar = 0; i_impar < tam; i_impar ++)
					printf("impar[%d] = %d\n", i_impar, *(impar + i_impar) );
				i_impar = 0;
				i --;
			}
		}
	}

	if(i_impar != 0)
	{
		for(i = 0; i < i_impar; i ++)
			printf("impar[%d] = %d\n", i, *(impar + i) );
	}	

	if(i_par != 0)
	{
		for(i = 0; i < i_par; i ++)
			printf("par[%d] = %d\n", i, *(par + i) );
	}
}
