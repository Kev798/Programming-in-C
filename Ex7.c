#include<stdio.h>
#include<locale.h>
int main(void)
{
	setlocale(LC_ALL, "");
	int N;
	do
	{
		printf("Diz um número\n"); 
		scanf_s("%d", &N);
		if (N < 0)
		{
			printf("Número negativo\n");
		}
		else if (N > 0)
		{
			printf("é POSITIVO\n");
		}
	} while (N != 0);
	{
		printf("Digito 0 - Vai te embora");
	}
	return 0;
}