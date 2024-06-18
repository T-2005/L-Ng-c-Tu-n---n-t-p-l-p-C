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
	int max = 0;
	for(int i = 0; i < n; i++)
	{
		if(max < a[i]) max = a[i];
	}
	int max2 = 0;
	for(int i = 0; i < n; i++)
	{
		if(a[i] < max && max2 < a[i]) max2 = a[i];
	}
	printf("So lon nhat thu 2 trong mang la: %d", max2);
}
