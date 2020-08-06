#include <stdio.h>

float pot(float base, int exp)
{
	int cont;
	float resultado = 1;

	for(cont = 0; cont < exp; cont ++)
		resultado *= base;

	return resultado;
}

float VAL(float x, int n, float t)
{
	int cont;
	float val = 0;

	for(cont = 1; cont <= n; cont ++)
	{
		val += x / pot( (1 + t), cont );
	}

	return val;
}

int main()
{
	int n;
	float x, t, val;

	printf("\nDigite respectivamente, valores para x, n e t: ");
	scanf("%f %d %f", &x, &n, &t);

	val = VAL(x, n, t);

	printf("\nO valor líquido anual é: %f\n", val);
}
