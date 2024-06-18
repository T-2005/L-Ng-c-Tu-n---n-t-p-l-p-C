#include<stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	printf("Day so le tu n den 1: ");
	for(int i = n; i >= 1; i--)
	{
		if(i % 2 != 0) printf("%d ", i);
	}
}
