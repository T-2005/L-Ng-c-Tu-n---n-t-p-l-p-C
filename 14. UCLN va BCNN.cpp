#include<stdio.h>
int UCLN(int a, int b)
{
	int r = a % b;
	while(r != 0)
	{
		a = b;
		b = r;
		if(r == 0) return b;
		r = a % b;
	}
	return b;
}
int BCNN(int a, int b)
{
	return a * b / UCLN(a, b);
}
int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	printf("UCLN cua hai so %d va %d la: %d\n", a, b, UCLN(a, b));
	printf("BCNN cua hai so %d va %d la: %d", a, b, BCNN(a, b));
}
