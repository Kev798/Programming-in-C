#include <stdio.h>
#include<locale.h>
int main(void)
{
	setlocale(LC_ALL, "");
	int Kmi, kmf, l;
	float consumo;
	printf("Quantos Kmi?");
	scanf_s("%d", &Kmi); printf("Quantos Kmf?");
	scanf_s("%d", &kmf); printf("Quantos litros gastaste?");
	scanf_s("%d", &l);
	consumo = l * 100 / (Kmi - kmf);
	printf("O consumo foi de %.2f litros por 100 km.\n", consumo);
	return 0;	
}
