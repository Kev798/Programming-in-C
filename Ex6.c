#include<stdio.h>
#include<locale.h>
int main(void)
{
	setlocale(LC_ALL, "");
	int i, quantos, num, somador = 0;
	printf("Diz quantos números queres somar: \n");
	scanf_s("%i",&quantos);
	for (i = 0; i < quantos; i++)
	{
		printf("Diz um número: ");
		scanf_s("%i", &num);
		somador = somador + num;
	}
	printf("somaste: %i números\n",somador);
	return 0;
}