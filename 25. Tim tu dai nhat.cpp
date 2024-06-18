#include<stdio.h>
#include<string.h>
int main()
{
	char s[5001];
	gets(s);
	char a[1000][500];
	int m = 0;
	char *token = strtok(s, " ");
	while(token != NULL)
	{
		strcpy(a[m++], token);
		token = strtok(NULL, " ");
	}
	int max = 0, index = 0;
	for(int i = 0; i < m; i++)
	{
		if(max < strlen(a[i])) {
			max = strlen(a[i]);
			index = i;
		}
	}
	printf("Tu dai nhat trong chuoi la: %s va co so ki tu la: %d", a[index], strlen(a[index]));
}
