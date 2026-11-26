#include <stdio.h>
#include <locale.h>
int main(void)
{
	setlocale(LC_ALL, "");
	int i, idade[5], altura[5];
	float mediation = 0;
	for (i = 0; i <= 4; i++)
	{
		printf("Diz a idade do %i aluno\n", i + 1);
		scanf_s("%d", &idade[i]);
		printf("Diz a altura do %i aluno\n", i + 1);
		scanf_s("%d", &altura[i]);
		mediation = mediation + altura[i];
	}
	for (i = 0; i <= 4; i++)
	{
		if (idade[i] > 13 && altura[i] < mediation / 5)
		{
			printf("o nº %i tem altura %i menor que a média que é: %f", i + 1, altura[i], mediation);
		}

	}
	return 0;
}