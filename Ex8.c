#include<stdio.h>
#include<locale.h>
int main(void)
{
	int numero;
	setlocale(LC_ALL, "");

	do
	{
		printf("Diz um número:\n");
		scanf_s("%i",&numero );
		if(numero % 2==0)
		{
			printf("O número é par:\n");
		}
		else
		{
			printf("O número é ímpar:\n");
		}
	} while (numero != 0);
	return 0;

}