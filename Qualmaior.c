#include<stdio.h>
#include<locale.h>
int main(void)
{
	setlocale(LC_ALL, "");
	int N1, N2, N3;
	printf("Diz o primeiro número");
	scanf_s("%d", &N1);printf("Diz o segundo número");
	scanf_s("%d", &N2); printf("Diz o terceiro número");
	scanf_s("%d", &N3);
	if (N1 > N2 && N1 > N3)
	{
		printf("O maior número é %d", N1);
	}
	else if (N2 > N1 && N2 > N3)
	{
		printf("O maior número e %d", N2);
	}
	else
	{
		printf("O maior número é %d", N3);
	}
	return 0;
}
