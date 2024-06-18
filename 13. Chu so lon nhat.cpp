#include<stdio.h>
#include<string.h>
int main()
{
	char s[501];
	scanf("\n%[^\n]s", s);
	int max = 0;
	for(int i = 0; i < strlen(s); i++)
	{
		if(max < s[i] - '0') max = s[i] - '0';
	}
	printf("So %d la chu so lon nhat trong so nguyen duong %s", max, s);
	
}
