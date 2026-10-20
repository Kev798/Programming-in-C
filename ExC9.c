#include<stdio.h>
#include<locale.h>

int main(void)
{

	setlocale(LC_ALL, "");
	int n;
	do
	{
		printf("Escreve um número\n");
		scanf_s("%d", &n);
		if (n % 2 == 0)
		{
			printf("O número %d é par\n", n);
		}
		else
		{
			printf("O número %d é ímpar\n", n);
		}
	} while (n != 0);

}