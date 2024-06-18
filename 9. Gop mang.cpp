#include<stdio.h>
void swap(int *a, int *b)
{
	int t = *a;
	*a = *b;
	*b = t;
}
void sap_xep(int arr[], int size)
{
	for(int i = 0; i < size - 1; i++)
	{
		int min = i;
		for(int j = i + 1; j < size; j++)
		{
			if(arr[min] > arr[j])
			{
				min = j;
			}
		}
		swap(&arr[i], &arr[min]);
	}
}
int main()
{
	int n, m;
	scanf("%d%d", &n, &m);
	int a[n], b[m];
	int k[n + m], z = 0;
	for(int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
		k[z++] = a[i];
	}
	for(int j = 0; j < m; j++)
	{
		scanf("%d", &b[j]);
		k[z++] = b[j];
	}
	sap_xep(k, z);
	printf("Mang sau khi gop: ");
	for(int i = 0; i < z; i++)
	{
		printf("%d ", k[i]);
	}


	
}
