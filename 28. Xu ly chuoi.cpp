#include<stdio.h>
#include<string.h>
int main()
{
	char s[1001];
	gets(s);
	for(int i = 0; i < strlen(s); i++)
	{
		if(s[i] >= 'a' && s[i] <= 'z')
		{
			printf("%c", s[i] - 32);
		}
		else printf("%c", s[i]);
	}
}
