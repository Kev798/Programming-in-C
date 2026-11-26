#include<stdio.h>
#include<locale.h>
int main(void)
{
	setlocale(LC_ALL, "");
	int  n, n2, i, menor = 2147483647, maior = -2147483647;
	do
	{
		printf("diz-me quantos numeros vais querer por: ");
			scanf_s("%d", &n);
			if (n > 0)
			{
				for (i = 0; i < n; i++)
				{
					printf("Escreve mazé um numero: ");
					scanf_s("%d", &n2);
					if (maior < n2){
						maior = n2;
					}
					if (menor > n2){
						menor = n2;
					}
				}
				printf("O menor é %d já o maior é %d\n",menor, maior);
			}
 
	}while (n != 0);

	return 0;
}