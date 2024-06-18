#include<stdio.h>
int nt(int n)
{
	if(n < 2) return 0;
	else 
		for(int i = 2; i * i <= n; i++)
		{
			if(n % i == 0) return 0;
		}
	return 1;
}
int main()
{
	int n;
	scanf("%d", &n);
	int a[n], cnt = 0;
	for(int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
		if(nt(a[i])) cnt++;
	}
	printf("So luong so nguyen to trong mang la: %d", cnt);
}
