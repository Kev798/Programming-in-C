#include<stdio.h>
#include<locale.h>
int main(void)
{
	setlocale(LC_ALL, "");
	float area;
	int L1;
	printf("primeiro lado: ");
scanf_s("%d",&L1);
area = (L1 * L1);
printf("a área do quadrado é:%.2f", area);
return 0;
}
