#include<stdio.h>

int main()
{
	long long n;
	scanf("%lld", &n);
	long long tich = 1;
	for(long long i = 1; i <= n; i++)
	{
		tich *= i;
	}
	printf("Giai thua cua %lld la: %lld", n, tich);
}
