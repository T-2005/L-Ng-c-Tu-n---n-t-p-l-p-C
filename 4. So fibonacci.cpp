#include<stdio.h>
int fibo(int n)
{
	if(n == 0) return 0;
	if(n == 1) return 1;
	else return fibo(n - 2) + fibo(n - 1);
}
int main()
{
	int n;
	scanf("%d", &n);
	printf("So %d dau tien trong day fibo la: %d", n, fibo(n));
}
