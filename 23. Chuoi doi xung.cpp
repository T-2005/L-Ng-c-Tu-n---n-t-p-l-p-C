#include<stdio.h>
#include<string.h>
int check(char s[])
{
	for(int i = 0; i < strlen(s) / 2; i++)
	{
		if(s[i] != s[strlen(s) - i - 1]) return 0;
	}
	return 1;
}
int main()
{
	int t;
	
	scanf("%d", &t);
	while(t--)
	{
		char s[1001];
		scanf("\n%[^\n]s", s);
		if(check(s)) printf("Chuoi '%s' la chuoi doi xung", s);
		else printf("Chuoi '%s' khong phai chuoi doi xung", s);
		printf("\n");
	}
}
