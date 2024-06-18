#include<stdio.h>
int gt(int n)
{
	if(n == 0 || n == 1) return 1;
	else if(n == 2) return 2;
	
	else return gt(n - 1) * n;
}
int main()
{
	int n;
	scanf("%d", &n);
	printf("giai thua cua so %d la: %d", n, gt(n));
}
