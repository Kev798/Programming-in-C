#include<stdio.h>
#include<locale.h>
int main(void)
{
	setlocale(LC_ALL, "");
	float area;
	int b1, a2;
	printf("qual é a base?");
	scanf_s("%d", &b1); printf("qual é a altura?");
	scanf_s("%d", &a2);
	area = (b1 * a2);
	printf_s("a área do retângulo é:%.2f", area);
	return 0;
}
