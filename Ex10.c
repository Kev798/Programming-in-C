#include<stdio.h>
#include<locale.h>
int main(void)
{
	setlocale(LC_ALL, "");
		int num;
		do
		{
			printf("diz um numero mazé:\n");
			scanf_s("%d", &num);
			if (num != 0)
			{
				if (num % 3 == 0)
				{
					printf("o numero é multiplo de 3\n");
				}
				if
					(num % 5 == 0)
				{
					printf("o numero é multiplo de 5\n");
				}
			}
		} while (num != 0);
		printf("sái mazé daqui");
}
