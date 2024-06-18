#include<stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	int t = n;
	int m = 0;
	while(n)
	{
		m = m * 10 + n % 10;
		n /= 10;
	}
	printf("So %d sau khi dao nguoc cac chu so la: %d", t, m);
}
