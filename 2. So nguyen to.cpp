#include<stdio.h>
int nt(int n)
{
	if(n <= 1) return 0;
	else 
	for(int i = 2; i * i <= n; i++)
	{
		if(n % i == 0) return 0;
	}
	return 1;
}
int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		int n;
		scanf("%d", &n);
		if(n < 0) printf("So %d khong hop le", n);
		else if(nt(n)) printf("So %d la so nguyen to", n);
		else printf("So %d khong phai so nguyen to", n);
		printf("\n");
	}
}
