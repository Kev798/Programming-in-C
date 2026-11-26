#include <stdio.h>
#include <locale.h>
int main(void)
{
	setlocale(LC_ALL, "");
	int n, i;
	printf("Diz-me um numero atoa:\n");
	scanf_s("%d", &n);
	for (i = 1; i <= 10; i++) 
		printf("%d x %d = %d \n",n,i,n*i);	
	return 0;
}