#include<stdio.h>
int main()
{
	int C, F;
	printf("Nhap do C: ");
	scanf("%d", &C);
	printf("Celsius sang Fahrenheit: %.2f\n", (float)(C * 1.8 + 32));
	printf("Nhap do F: ");
	scanf("%d", &F);
	printf("Fahrenheit sang Celsius: %.2f", (float)((F - 32) / 1.8));
}
