#include<stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	int t = n;
	int a[50], k = 0;
	while(n)
	{
		a[k++] = n % 2;
		n /= 2;
	}
	printf("So %d chuyen tu he co so 10 sang he nhi phan la: ", t);
	for(int i = k - 1; i >= 0; i--)
	{
		printf("%d", a[i]);
	}
}
