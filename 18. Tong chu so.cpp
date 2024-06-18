#include<stdio.h>
int main()
{
	int sum = 0, n;
	scanf("%d", &n);
	int t = n;
	while(n)
	{
		sum += n % 10;
		n /= 10;
	}
	printf("Tong chu so cua so %d la: %d", t, sum);
}
