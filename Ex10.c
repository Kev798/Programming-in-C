#include<stdio.h>
#include<locale.h>
int main(void)
{
	int num;
	setlocale(LC_ALL, "");
	printf("Diz-me um número: ");
	scanf_s("%d", &num);
	for (int i = 1; i <= 10; i++)
	{
		printf("%d X %d = %d\n", num, i, num*i);
	}
	return 0;
}