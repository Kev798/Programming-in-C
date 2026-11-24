#include <stdio.h>
#include <locale.h>
int main(void)
{
	setlocale(LC_ALL,"");
	char* Nomes[5] = {"Kevin","Salvador","Tom","Victor","João"};
	int i;
	for (i = 4; i >=0; i--)
	{
		printf("%s\n", Nomes[i]);
	}
	return 0;
}