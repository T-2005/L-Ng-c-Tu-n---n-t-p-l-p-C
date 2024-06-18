#include<stdio.h>
void swap(int *a, int *b)
{
	int t = *a;
	*a = *b;
	*b = t;
}
int main()
{
	int n;
	scanf("%d", &n);
	int a[n];
	for(int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	for(int i = 0; i < n - 1; i++)
	{
		int min = i;
		for(int j = i + 1; j < n; j++)
		{
			if(a[min] > a[j])
			{
				min = j;
			}
		}
		swap(&a[i], &a[min]);
	}
	printf("Mang sau khi sap xep: ");
	for(int i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}
}
