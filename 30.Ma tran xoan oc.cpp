#include<stdio.h>
int matrix_xoan_oc(int n, int cnt)
{
	int h1 = 0, h2 = n - 1, c1 = 0, c2 = n - 1;
	int a[n][n];
	while(h2 >= h1 && c2 >= c1)
	{
		for(int i = c1; i <= c2; i++)
		{
			a[h1][i] = cnt++;
		}
		h1++;
		for(int i = h1; i <= h2; i++)
		{
			a[i][c2] = cnt++;
		}
		c2--;
		for(int i = c2; i >= c1; i--)
		{
			a[h2][i] = cnt++;
		}
		h2--;
		for(int i = h2; i >= h1; i--)
		{
			a[i][c1] = cnt++;
		}
		c1++;
	}
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
		{
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
}
int main()
{
	int n;
	scanf("%d", &n);
	int cnt = 1;
	matrix_xoan_oc(n, cnt);
	return 0;
}
