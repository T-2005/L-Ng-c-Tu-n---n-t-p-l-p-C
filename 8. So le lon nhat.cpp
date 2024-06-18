#include<stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	int a[n];
	for(int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	int max_le = 0;
	for(int i = 0; i < n; i++)
	{
		if(a[i] % 2 != 0 && max_le < a[i]) max_le = a[i];
	}
	printf("So le lon nhat la: %d", max_le);
}
