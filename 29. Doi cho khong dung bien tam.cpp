#include<stdio.h>
int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	a = a + b;
	b = a - b;
	a = a - b;
	printf("2 so sau khi doi cho ma khong dung bien tam: %d - %d", a, b); 
}
