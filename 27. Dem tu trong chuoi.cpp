#include<stdio.h>
#include<string.h>
int main()
{
	char s[10001];
	gets(s);
	char a[1000][1000];
	int m = 0;
	char *p = strtok(s, " ");
	while(p != NULL)
	{
		strcpy(a[m++], p);
		p = strtok(NULL, " ");
	}
	int b[1000] = {0};
	for(int i = 0; i < m; i++)
	{
		int cnt = 0;
		if(b[i] == 0)
		{
			for(int j = 0; j < m; j++)
			{
				if(strcmp(a[i], a[j]) == 0)
				{
					cnt++;
					b[j] = 1;
				}
			}
			printf("Tu '%s' xuat hien %d lan\n", a[i], cnt);
		}
	}
}
