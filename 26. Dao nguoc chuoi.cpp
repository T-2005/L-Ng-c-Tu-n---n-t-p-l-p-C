#include<stdio.h>
#include<string.h>
int main()
{
	char s[1001];
	gets(s);
	printf("Chuoi sau khi dao nguoc la: ");
	for(int i = strlen(s) - 1; i >= 0; i--)
	{
		printf("%c", s[i]);
	}
}
