#include<stdio.h>
int gt(int n)
{
	int tich = 1;
	for(int i = 1; i <= n; i++)
	{
		tich *= i;
	}
	return tich;
}
int main()
{
	int n;
	scanf("%d", &n);
	printf("Tam giac Pascal voi %d dong la: \n", n);
	for(int i = 0; i < n; i++)
	{
		for(int k = 0; k < n - i; k++)
		{
			printf(" ");
		}
		for(int j = 0; j <= i; j++)
		{
			printf("%d ", gt(i) / (gt(j) * gt(i - j)));
		}
		printf("\n");
	}
}
